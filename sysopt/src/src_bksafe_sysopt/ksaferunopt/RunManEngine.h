#pragma once

#include "LibLoader.h"
#include <runoptimize/interface.h>
#include "runhelper.h"
#include "restorerunitem.h"
#include "disablerunhelper.h"
#include "taskjobhelper.h"
#include "servicehelper.h"
#include "x64helper.h"

class CRunManEngine : 
	public IRunOptimizeEng, 
	public IEnumLogCallBack, 
	public IPreOpcallBack,
	public IEnumRunFilter,
	public IEnumTaskFilter
{
public:
	CRunManEngine(void);
	~CRunManEngine(void);

	VOID SynEnumRunInfo(DWORD dwFlags, IEnumRunCallBack* pCallBack);
	void EnumRunInfo(DWORD dwFlags,IEnumRunCallBack* pCallback );
	void EnumRunInfoForExam(DWORD dwFlags,IEnumRunCallBack* pCallback );
	BOOL ControlRun(BOOL bEnable, CKsafeRunInfo* pInfo);
	void RestoreRun(DWORD nType,IEnumRunCallBack* pCallback);
	BOOL DeleteRun(CKsafeRunInfo* pInfo);
	DWORD GetRunCount(DWORD nFlags);

protected:
	void EnumRegRunner(BOOL bEnable, CRunRegEnumer* pEnumer, IEnumRunCallBack* pCallback, CRunRegEnumer* pFilter=NULL);
	void EnumDirRunner(BOOL bEnable, CRunDirEnumer* pEnumer, IEnumRunCallBack* pCallback, CRunDirEnumer* pFilter=NULL);
	
	void RestoreRegRunner(CRunRegEnumer* pEnumer);
	void RestoreDirRuner(CRunDirEnumer* pEnumer);
protected:
	static void threadstub(PVOID lParam);
	static void threadstub_Exam(PVOID lParam);
	void _InternEnumRunInfo(DWORD dwFlags,IEnumRunCallBack* pCallback );
	virtual BOOL EnumLog(RunLogItem* pItem, PVOID lParam);

public:
	BOOL WriteRunKey(HKEY hRoot, LPCTSTR lpKey, LPCTSTR lpValue, LPCTSTR lpData);
	BOOL WriteRunFile(LPCTSTR lpFile);

	virtual BOOL PreCopyFile(DWORD nType, LPCTSTR lpFileName);
	virtual BOOL PreCopyValue(DWORD nType, LPCTSTR lpValue);
	virtual BOOL PreCopyTaskFile(DWORD nType, LPCTSTR lpFileName);

protected:
	void _InternEnumRunInfo_Exam(DWORD dwFlags,IEnumRunCallBack* pCallback );
	int EnumRegRunner2(BOOL bEnable, CRunRegEnumer* pEnumer, IEnumRunCallBack* pCallback);
	int EnumDirRunner2(BOOL bEnable, CRunDirEnumer* pEnumer, IEnumRunCallBack* pCallback);
	int EnumServiceRunner2(CServiceEnumer* pEnumer, IEnumRunCallBack* pCallback);
	int EnumTaskRunner2(CTaskSchedularEnumer* pEnumer, IEnumRunCallBack* pCallback);

protected:
	CLibLoader*	m_pLibLoader;
	HANDLE		m_hOpThread;
	HANDLE		m_hOpThread_Exam;
	KWow64Switcher m_wow64Switcher;
};
