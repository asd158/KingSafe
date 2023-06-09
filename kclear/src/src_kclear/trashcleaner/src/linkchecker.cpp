// Copyright (c) 2010 Kingsoft Corporation. All rights reserved.
// Copyright (c) 2010 The KSafe Authors. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "stdafx.h"
#include "linkchecker.h"
#include <winioctl.h>

//////////////////////////////////////////////////////////////////////////

CLinkChecker::CLinkChecker()
{
    m_bInit = TRUE;
}

CLinkChecker::~CLinkChecker()
{
}

//////////////////////////////////////////////////////////////////////////

CLinkChecker& CLinkChecker::Instance()
{
    static CLinkChecker _singleton;
    
    _singleton.Init();
      
    return _singleton;
}

BOOL CLinkChecker::Init()
{
    BOOL bRet = TRUE;
    if(m_bInit)
    {
        bRet = _GainBackupPrivilege();
        m_bInit = FALSE;
    }
    return bRet;
}

void CLinkChecker::UnInit()
{
    m_bInit = TRUE;
}

//////////////////////////////////////////////////////////////////////////

BOOL CLinkChecker::_GainBackupPrivilege()
{
    BOOL retval = FALSE;
    HANDLE hToken = NULL;
    TOKEN_PRIVILEGES tp;
    BOOL fRetCode;

    fRetCode = ::OpenProcessToken(
        ::GetCurrentProcess(), 
        TOKEN_ADJUST_PRIVILEGES, 
        &hToken
        );
    if (!fRetCode)
        goto clean0;

    fRetCode = ::LookupPrivilegeValue(
        NULL, 
        SE_BACKUP_NAME, 
        &tp.Privileges[0].Luid
        );
    if (!fRetCode)
        goto clean0;

    tp.PrivilegeCount = 1;
    tp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;

    fRetCode = ::AdjustTokenPrivileges(hToken, FALSE, &tp, sizeof(TOKEN_PRIVILEGES), NULL, NULL);
    if (!fRetCode)
        goto clean0;

    retval = TRUE;

clean0:
    if (hToken) 
    {
        ::CloseHandle(hToken);
        hToken = NULL;
    }
    return retval;
}

HANDLE CLinkChecker::_OpenDirectory(LPCTSTR pszPath, BOOL bReadWrite) 
{
    DWORD dwAccess = GENERIC_READ;
    HANDLE hDir = ::CreateFile(pszPath, dwAccess, 0, NULL, OPEN_EXISTING,
        FILE_FLAG_OPEN_REPARSE_POINT | FILE_FLAG_BACKUP_SEMANTICS, NULL);

    return hDir;
}

//////////////////////////////////////////////////////////////////////////

#define DIR_LINK_ATTR  (FILE_ATTRIBUTE_DIRECTORY | FILE_ATTRIBUTE_REPARSE_POINT)

#define REPARSE_MOUNTPOINT_HEADER_SIZE   8

typedef struct {
    DWORD ReparseTag;
    DWORD ReparseDataLength;
    WORD Reserved;
    WORD ReparseTargetLength;
    WORD ReparseTargetMaximumLength;
    WORD Reserved1;
    WCHAR ReparseTarget[1];
} REPARSE_MOUNTPOINT_DATA_BUFFER, *PREPARSE_MOUNTPOINT_DATA_BUFFER;

//////////////////////////////////////////////////////////////////////////

BOOL CLinkChecker::IsDirectoryJunction(LPCTSTR pszDir) 
{
    BOOL retval = FALSE;
    DWORD dwAttr;
    HANDLE hDir = INVALID_HANDLE_VALUE;
    BYTE* pBuffer = NULL;
    PREPARSE_MOUNTPOINT_DATA_BUFFER pReparseBuffer = NULL;
    DWORD dwRetCode;
    BOOL fRetCode;

    dwAttr = ::GetFileAttributes(pszDir);
    if (INVALID_FILE_ATTRIBUTES == dwAttr)
        goto clean0;

    if ((dwAttr & DIR_LINK_ATTR) != DIR_LINK_ATTR)
        goto clean0;

    hDir = _OpenDirectory(pszDir, FALSE);
    if (INVALID_HANDLE_VALUE == hDir)
        goto clean0;

    pBuffer = new BYTE[MAXIMUM_REPARSE_DATA_BUFFER_SIZE];
    if (!pBuffer)
        goto clean0;

    pReparseBuffer = (PREPARSE_MOUNTPOINT_DATA_BUFFER)pBuffer;
    
    fRetCode = ::DeviceIoControl(
        hDir, 
        FSCTL_GET_REPARSE_POINT, 
        NULL, 
        0, 
        pReparseBuffer,
        MAXIMUM_REPARSE_DATA_BUFFER_SIZE, 
        &dwRetCode, 
        NULL
        );
    if (!fRetCode)
        goto clean0;

    if (pReparseBuffer->ReparseTag != IO_REPARSE_TAG_MOUNT_POINT)
        goto clean0;

    retval = TRUE;

clean0:
    if (pBuffer)
    {
        delete[] pBuffer;
        pBuffer = NULL;
    }

    if (hDir)
    {
        ::CloseHandle(hDir);
    }

    return retval;
}

//////////////////////////////////////////////////////////////////////////
