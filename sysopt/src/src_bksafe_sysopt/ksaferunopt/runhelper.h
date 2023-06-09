#pragma once

#include <plugin/enumfile.h>
#include "lnkhelper.h"
#include <globalstate/GetGlobalState.h>


class CRunDirEnumer
{
public:
	CRunDirEnumer(){}
	~CRunDirEnumer(){}

	struct RUN_DIR_INFO
	{
		CString	strName;
		CString	strPath;
		CString	strDesc;
		CString strParam;
		DWORD	nDirType;
	};

public:
	virtual BOOL DoEnum()
	{
		_EnumRunDir(GetGlobalState()->GetUserStartRunDir(),DIR_RUN_TYPE_WINDOW_USER);
		_EnumRunDir(GetGlobalState()->GetCommonStartRunDir(),DIR_RUN_TYPE_WINDOW_COMM);

		return TRUE;
	}

	int GetCount()
	{
		return m_runArray.GetSize();
	}

	RUN_DIR_INFO& GetItem(int iIndex)
	{
		return m_runArray[iIndex];
	}

protected:
	void _EnumRunDir(LPCTSTR lpDir, DWORD nType)
	{
		if (TRUE)
		{
			CEnumFile	fileEnumer(lpDir,_T("\\*.lnk"));
			for (int i=0; i<fileEnumer.GetFileCount(); i++)
			{
				if (CLnkDecode::IsLnkPostFile(fileEnumer.GetFileName(i)))
				{
					CString	strPath;
					CString strParam;
					if ( CLnkDecode::QueryLnk(fileEnumer.GetFileFullPath(i),strPath,strParam) )
					{
						RUN_DIR_INFO	runinfo;
						runinfo.strPath	= strPath;
						runinfo.strName	= fileEnumer.GetFileFullPath(i);
						runinfo.strParam = strParam;
						runinfo.nDirType = nType;
						m_runArray.Add(runinfo);
					}
				}	
			}
		}

		if (TRUE)
		{
			CEnumFile	fileEnumer(lpDir,_T("\\*.exe"));
			for (int i=0; i<fileEnumer.GetFileCount(); i++)
			{
				RUN_DIR_INFO	runinfo;
				runinfo.strName	= fileEnumer.GetFileFullPath(i);
				runinfo.strPath	= runinfo.strName;
				runinfo.nDirType= nType;
				m_runArray.Add(runinfo);			
			}
		}
	}

protected:
	CSimpleArray<RUN_DIR_INFO>	m_runArray;
};

#define STR_RUN_REG_KEY		_T("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run")

class CRunRegEnumer
{
public:
	CRunRegEnumer(){}
	~CRunRegEnumer(){}

	struct REG_RUN_INFO
	{
		CString	strName;
		CString	strPath;
		CString	strdesc;	//PE的描述信息
		DWORD	nRegType;	
		BOOL	bDisabledBy3XX;
	};

public:
	virtual BOOL DoEnum()
	{
		_EnumRegRun(HKEY_LOCAL_MACHINE,STR_RUN_REG_KEY, REG_RUN_TYPE_WINDOW_HKLM);
		_EnumRegRun(HKEY_CURRENT_USER,STR_RUN_REG_KEY, REG_RUN_TYPE_WINDOW_HKCU);

		return TRUE;
	}

	int GetCount()
	{
		return m_runArray.GetSize();
	}

	REG_RUN_INFO& GetItem(int i)
	{
		return m_runArray[i];
	}

protected:
	virtual void _EnumRegRun(HKEY hRoot, LPCTSTR lpRunKey, DWORD nType)
	{
		HKEY	hKey = NULL;
		
		if (ERROR_SUCCESS==::RegOpenKeyEx(hRoot,lpRunKey,0,KEY_READ,&hKey))
		{
			DWORD	iIndex = 0;
			CString	strData;
			CString	strValue;
			while (SHEnumStringValue(hKey,iIndex++,strValue,strData)==ERROR_SUCCESS)
			{
				if (strData.IsEmpty())//如果路径为空，会被CommandLineToArgvW解析到当前路径,所以就跳过
					continue;
				REG_RUN_INFO	runinfo;
				runinfo.strName	= strValue;
				runinfo.strPath	= strData;
				runinfo.nRegType= nType;
				runinfo.bDisabledBy3XX = FALSE;
				
				m_runArray.Add(runinfo);
				strData.Empty();
				strValue.Empty();
			}
		}
	}

	DWORD SHEnumStringValue(HKEY hKey, DWORD iIndex, CString& strValue, CString& strData)
	{
		DWORD	nRet	= ERROR_SUCCESS;
		DWORD	nValue	= MAX_PATH;
		DWORD	nData	= MAX_PATH;
		DWORD	nType	= REG_SZ;
		TCHAR*	btrValue= new TCHAR[nValue];
		TCHAR*	btrData = new TCHAR[nValue];

		do 
		{
			memset(btrValue,0,nValue*sizeof(TCHAR));
			memset(btrData,0,nData*sizeof(TCHAR));

			nRet = SHEnumValue(hKey,iIndex,btrValue,&nValue,&nType,btrData,&nData);

			if (nRet==ERROR_SUCCESS)
			{
				if (nType==REG_SZ||nType==REG_EXPAND_SZ)
				{
					strValue = btrValue;
					strData	 = btrData;
				}
				else
					nRet = ERROR_BAD_FORMAT;

				delete btrData;
				delete btrValue;
				break;			
			}
			else if (nRet==ERROR_MORE_DATA)
			{
				nValue+=MAX_PATH;
				nData+=MAX_PATH;
				delete btrData;
				delete btrValue;
				btrValue = new TCHAR[nValue];
				btrData	 = new TCHAR[nData];
			}
			else
			{
				delete btrData;
				delete btrValue;
				break;
			}

		} while (TRUE);

		return nRet;
	}

protected:
	CSimpleArray<REG_RUN_INFO>	m_runArray;
};