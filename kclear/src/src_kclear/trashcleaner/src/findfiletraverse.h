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

// FindFileTraverse.h: interface for the CFindFileTraverse class.
//
//////////////////////////////////////////////////////////////////////


#pragma once

#include "kvideocache.h"
#include "ConfigData.h"

class ITraverseFile;
class CConfigData;

class CFindFileTraverse
{
public:
    CFindFileTraverse();
    virtual ~CFindFileTraverse();

public:

    BOOL StartFindFileTraverse( 
        const CConfigData& config,
        ITraverseFile* piTraverseFile,
        BOOL Is_Init);

    BOOL StopFileTraverse();

    BOOL IsFinding() const ;

private:

    void RunFindFile();

    static DWORD WINAPI FindFileThread(LPVOID lpVoid);

	void RunVideoCacheFile(int id, CString& strPath);

    CConfigData::DirWorkArray m_DirWorks;


private:

    ITraverseFile* m_piTraverseFile;
    BOOL Is_Dlg_Init;
    HANDLE m_hThread;
    DWORD  m_dwThreadID;
};

