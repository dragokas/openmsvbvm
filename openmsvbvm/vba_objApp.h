#pragma once
#include "vba_objApp_h.h"		// Generated by MIDL compiler

class CApp : public IApp
{
public:
	CApp();
	~CApp();

	// IUnknown interface 
	HRESULT __stdcall QueryInterface(
		REFIID riid,
		void **ppObj);
	ULONG   __stdcall AddRef();
	ULONG   __stdcall Release();

	// IDispatch interface
	HRESULT __stdcall GetTypeInfoCount(UINT * pctInfo);
	HRESULT __stdcall GetTypeInfo(UINT itinfo, LCID lcid, ITypeInfo** pptinfo);
	HRESULT __stdcall GetIDsOfNames(REFIID riid, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgdispid);
	HRESULT __stdcall Invoke(DISPID dispidMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS* pdispparams, VARIANT* pvarResult, EXCEPINFO* pexcepinfo, UINT* puArgErr);

	// Unknown exported stuff
	HRESULT _stdcall HctlDemandLoad(unsigned int * ctl);
	HRESULT _stdcall ChkProp(unsigned int i,  unsigned int * tagData);
	HRESULT _stdcall SetPropA( unsigned int i,  unsigned int * tagData);
	HRESULT _stdcall GetPropA( unsigned int i,  unsigned int * tagData);
	HRESULT _stdcall GetPropHsz( unsigned int i, unsigned char ** hsz);
	HRESULT _stdcall LoadProp( unsigned int i,  unsigned int * fref);
	HRESULT _stdcall SaveProp( unsigned int i,  unsigned int * fref);
	HRESULT _stdcall GetPalette(void);
	HRESULT _stdcall Reset(void);
	HRESULT _stdcall get_DefaultProp( VARIANT * var);
	HRESULT _stdcall put_DefaultProp( VARIANT * var);
	HRESULT _stdcall get_000x( VARIANT * var);
	HRESULT _stdcall put_000x( unsigned int i);

	// IApp interface
	HRESULT __stdcall get_Path(BSTR* rhs);
	HRESULT __stdcall put_Path(BSTR rhs);

	HRESULT __stdcall get_EXEName(BSTR* rhs);
	HRESULT __stdcall put_EXEName(BSTR rhs);

	HRESULT __stdcall get_Title(BSTR* rhs);
	HRESULT __stdcall put_Title(BSTR rhs);

private:
	long m_nRefCount;   // for managing the reference count
};
