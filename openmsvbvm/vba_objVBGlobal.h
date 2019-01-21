#pragma once
#include "vba_objVBGlobal_h.h"	// Generated by MIDL compiler
#include "vba_objApp.h"

class CVBGlobal : public IVBGlobal
{
public:
	CVBGlobal();
	~CVBGlobal();

	// IUnknown interface 
	HRESULT __stdcall QueryInterface(
		REFIID riid,
		void **ppObj);
	ULONG   __stdcall AddRef();
	ULONG   __stdcall Release();

	// IVBGlobal interface
	HRESULT _stdcall Load(IDispatch* object);
	HRESULT _stdcall Unload(IDispatch* object);
	HRESULT _stdcall get_App(IApp ** pdispRetVal);
	
private:
	long m_nRefCount;   // for managing the reference count
};

