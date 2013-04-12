// loginWeb.h : main header file for the LOGINWEB application
//

#if !defined(AFX_LOGINWEB_H__D36A3927_9D53_4EE2_8227_E4E38EC9D38E__INCLUDED_)
#define AFX_LOGINWEB_H__D36A3927_9D53_4EE2_8227_E4E38EC9D38E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CLoginWebApp:
// See loginWeb.cpp for the implementation of this class
//

class CLoginWebApp : public CWinApp
{
public:
	CLoginWebApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLoginWebApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CLoginWebApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LOGINWEB_H__D36A3927_9D53_4EE2_8227_E4E38EC9D38E__INCLUDED_)
