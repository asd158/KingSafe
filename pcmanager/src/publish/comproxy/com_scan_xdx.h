#pragma once
#include "common_def.h"
/************************************************************************/
/* CBkScan                                                              */
/************************************************************************/
// struct  TMP_SCAN_PARAM_0
// {
//     int                 nScanMode;
//     CAtlArray<CString>  lpParam;
// };
// XDX_CLASS_BEGIN(struct  TMP_SCAN_PARAM_0)
//     XDX_MEMBER(nScanMode)
//     XDX_MEMBER(lpParam)
// XDX_CLASS_END
BKCOM_PROXY_METHOD_PARAM_BEGIN(Scan, CBkScan)
    BKCOM_PROXY_METHOD_PARAM(int, nScanMode)
    BKCOM_PROXY_METHOD_PARAM(BOOL, bBackGround)
    BKCOM_PROXY_METHOD_PARAM(CAtlArray<CString>, lpParam);
BKCOM_PROXY_METHOD_PARAM_END
BKCOM_PROXY_METHOD_PARAM_XDX_BEGIN(Scan, CBkScan)
    BKCOM_PROXY_METHOD_PARAM_XDX(nScanMode)
    BKCOM_PROXY_METHOD_PARAM_XDX(bBackGround)
    BKCOM_PROXY_METHOD_PARAM_XDX(lpParam)
BKCOM_PROXY_METHOD_PARAM_XDX_END

BKCOM_PROXY_METHOD_PARAM_BEGIN(Scan2, CBkScan)
    BKCOM_PROXY_METHOD_PARAM(int, nScanMode)
    BKCOM_PROXY_METHOD_PARAM(BOOL, bBackGround)
    BKCOM_PROXY_METHOD_PARAM(CAtlArray<BK_SCAN_ADDITIONAL_PATH>, lpParam);
BKCOM_PROXY_METHOD_PARAM_END
BKCOM_PROXY_METHOD_PARAM_XDX_BEGIN(Scan2, CBkScan)
    BKCOM_PROXY_METHOD_PARAM_XDX(nScanMode)
    BKCOM_PROXY_METHOD_PARAM_XDX(bBackGround)
    BKCOM_PROXY_METHOD_PARAM_XDX(lpParam)
BKCOM_PROXY_METHOD_PARAM_XDX_END

// struct  TMP_QueryFileInfo_PARAM_0
// {
//     int     nType;
//     DWORD   dwIndex;
// };
// XDX_CLASS_BEGIN(struct  TMP_QueryFileInfo_PARAM_0)
//     XDX_MEMBER(nType)
//     XDX_MEMBER(dwIndex)
// XDX_CLASS_END
BKCOM_PROXY_METHOD_PARAM_BEGIN(QueryFileInfo, CBkScan)
    BKCOM_PROXY_METHOD_PARAM(int, nType)
    BKCOM_PROXY_METHOD_PARAM(DWORD, dwIndex);
BKCOM_PROXY_METHOD_PARAM_END
BKCOM_PROXY_METHOD_PARAM_XDX_BEGIN(QueryFileInfo, CBkScan)
    BKCOM_PROXY_METHOD_PARAM_XDX(nType)
    BKCOM_PROXY_METHOD_PARAM_XDX(dwIndex)
BKCOM_PROXY_METHOD_PARAM_XDX_END

BKCOM_PROXY_METHOD_PARAM_BEGIN(Clean, CBkScan)
    BKCOM_PROXY_METHOD_PARAM(CAtlArray<DWORD>, fileIndex)
BKCOM_PROXY_METHOD_PARAM_END
BKCOM_PROXY_METHOD_PARAM_XDX_BEGIN(Clean, CBkScan)
    BKCOM_PROXY_METHOD_PARAM_XDX(fileIndex)
BKCOM_PROXY_METHOD_PARAM_XDX_END

BKCOM_PROXY_METHOD_PARAM_BEGIN(QuerySteps, CBkScan)
    BKCOM_PROXY_METHOD_PARAM(int, nScanMode)
BKCOM_PROXY_METHOD_PARAM_END
BKCOM_PROXY_METHOD_PARAM_XDX_BEGIN(QuerySteps, CBkScan)
    BKCOM_PROXY_METHOD_PARAM_XDX(nScanMode)
BKCOM_PROXY_METHOD_PARAM_XDX_END

BKCOM_PROXY_METHOD_PARAM_BEGIN(QueryLastScanInfo, CBkScan)
    BKCOM_PROXY_METHOD_PARAM(int, nScanMode)
BKCOM_PROXY_METHOD_PARAM_END
BKCOM_PROXY_METHOD_PARAM_XDX_BEGIN(QueryLastScanInfo, CBkScan)
    BKCOM_PROXY_METHOD_PARAM_XDX(nScanMode)
BKCOM_PROXY_METHOD_PARAM_XDX_END

BKCOM_PROXY_METHOD_PARAM_BEGIN(QuerySteps, CBkScanOut)
    BKCOM_PROXY_METHOD_PARAM(CAtlArray<int>, steps)
BKCOM_PROXY_METHOD_PARAM_END
BKCOM_PROXY_METHOD_PARAM_XDX_BEGIN(QuerySteps, CBkScanOut)
    BKCOM_PROXY_METHOD_PARAM_XDX(steps)
BKCOM_PROXY_METHOD_PARAM_XDX_END

/************************************************************************/
/* CBkScanSingleFile                                                    */
/************************************************************************/
BKCOM_PROXY_METHOD_PARAM_BEGIN(ScanFile, CBkScanSingleFile)
    BKCOM_PROXY_METHOD_PARAM(CString, strFile)
    BKCOM_PROXY_METHOD_PARAM(DWORD, dwScanMask)
    BKCOM_PROXY_METHOD_PARAM(DWORD, dwScanPolicy)
BKCOM_PROXY_METHOD_PARAM_END
BKCOM_PROXY_METHOD_PARAM_XDX_BEGIN(ScanFile, CBkScanSingleFile)
    BKCOM_PROXY_METHOD_PARAM_XDX(strFile)
    BKCOM_PROXY_METHOD_PARAM_XDX(dwScanMask)
    BKCOM_PROXY_METHOD_PARAM_XDX(dwScanPolicy)
BKCOM_PROXY_METHOD_PARAM_XDX_END

BKCOM_PROXY_METHOD_PARAM_BEGIN(CleanFile, CBkScanSingleFile)
BKCOM_PROXY_METHOD_PARAM(CString, strFile)
BKCOM_PROXY_METHOD_PARAM(DWORD, dwScanMask)
    BKCOM_PROXY_METHOD_PARAM(DWORD, dwScanPolicy)
BKCOM_PROXY_METHOD_PARAM_END
BKCOM_PROXY_METHOD_PARAM_XDX_BEGIN(CleanFile, CBkScanSingleFile)
    BKCOM_PROXY_METHOD_PARAM_XDX(strFile)
    BKCOM_PROXY_METHOD_PARAM_XDX(dwScanMask)
    BKCOM_PROXY_METHOD_PARAM_XDX(dwScanPolicy)
BKCOM_PROXY_METHOD_PARAM_XDX_END

BKCOM_PROXY_METHOD_PARAM_BEGIN(ForceClean, CBkScanSingleFile)
    BKCOM_PROXY_METHOD_PARAM(CString, strFile)
    BKCOM_PROXY_METHOD_PARAM(BK_FORCE_CLEAN_DETAIL, detail)
BKCOM_PROXY_METHOD_PARAM_END
BKCOM_PROXY_METHOD_PARAM_XDX_BEGIN(ForceClean, CBkScanSingleFile)
    BKCOM_PROXY_METHOD_PARAM_XDX(strFile)
    BKCOM_PROXY_METHOD_PARAM_XDX(detail)
BKCOM_PROXY_METHOD_PARAM_XDX_END

/************************************************************************/
/* CBkScanMultiFile                                                    */
/************************************************************************/
BKCOM_PROXY_METHOD_PARAM_BEGIN(ScanHash, CBkScanMultiFile)
    BKCOM_PROXY_METHOD_PARAM(CAtlArray<CString>, hashArray)
    BKCOM_PROXY_METHOD_PARAM(DWORD, dwScanPolicy)
BKCOM_PROXY_METHOD_PARAM_END
BKCOM_PROXY_METHOD_PARAM_XDX_BEGIN(ScanHash, CBkScanMultiFile)
    BKCOM_PROXY_METHOD_PARAM_XDX(hashArray)
    BKCOM_PROXY_METHOD_PARAM_XDX(dwScanPolicy)
BKCOM_PROXY_METHOD_PARAM_XDX_END

BKCOM_PROXY_METHOD_PARAM_BEGIN(ScanHash, CBkScanMultiFileOut)
    BKCOM_PROXY_METHOD_PARAM(CAtlArray<BK_FILE_RESULT>, frArray)
BKCOM_PROXY_METHOD_PARAM_END
BKCOM_PROXY_METHOD_PARAM_XDX_BEGIN(ScanHash, CBkScanMultiFileOut)
    BKCOM_PROXY_METHOD_PARAM_XDX(frArray)
BKCOM_PROXY_METHOD_PARAM_XDX_END

BKCOM_PROXY_METHOD_PARAM_BEGIN(ScanFile, CBkScanMultiFile)
    BKCOM_PROXY_METHOD_PARAM(CAtlArray<CString>, fileArray)
    BKCOM_PROXY_METHOD_PARAM(DWORD, dwScanPolicy)
BKCOM_PROXY_METHOD_PARAM_END
BKCOM_PROXY_METHOD_PARAM_XDX_BEGIN(ScanFile, CBkScanMultiFile)
    BKCOM_PROXY_METHOD_PARAM_XDX(fileArray)
    BKCOM_PROXY_METHOD_PARAM_XDX(dwScanPolicy)
BKCOM_PROXY_METHOD_PARAM_XDX_END

BKCOM_PROXY_METHOD_PARAM_BEGIN(ScanFile, CBkScanMultiFileOut)
    BKCOM_PROXY_METHOD_PARAM(CAtlArray<BK_FILE_RESULT>, frArray)
BKCOM_PROXY_METHOD_PARAM_END
BKCOM_PROXY_METHOD_PARAM_XDX_BEGIN(ScanFile, CBkScanMultiFileOut)
    BKCOM_PROXY_METHOD_PARAM_XDX(frArray)
BKCOM_PROXY_METHOD_PARAM_XDX_END