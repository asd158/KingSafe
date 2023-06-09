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
#include "kscmain.h"
#include "kclearimpl.h"

//////////////////////////////////////////////////////////////////////////

HINSTANCE g_hInstance;


HRESULT __cdecl CreateKClearObject(REFIID riid, void** ppObject)
{
    HRESULT hr = E_FAIL;
    CKClearImpl* pInstance = NULL;

    if (!ppObject)
    {
        hr = E_INVALIDARG;
        goto clean0;
    }

    if (riid != __uuidof(IKClear))
    {
        hr = E_NOINTERFACE;
        goto clean0;
    }

    pInstance = new CKClearImpl();
    if (!pInstance)
    {
        hr = E_OUTOFMEMORY;
        goto clean0;
    }

    *ppObject = pInstance;
    hr = S_OK;

clean0:
    return hr;
}

// HRESULT __cdecl DllGetClassObject(REFIID riid, void** ppObject)
// {
// 	return CreateKClearObject(riid, ppObject);
// }

//////////////////////////////////////////////////////////////////////////

BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	g_hInstance = hInstance;

    switch (dwReason)
    {
    case DLL_PROCESS_ATTACH:
        _Module.Init(hInstance);
        break;

    case  DLL_PROCESS_DETACH:
        _Module.UnInit();
        break;
    }

    return TRUE;
}

//////////////////////////////////////////////////////////////////////////
