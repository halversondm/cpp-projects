// Dialogs.h : main header file for the DIALOGS application
//

#if !defined(AFX_DIALOGS_H__61310EF0_CFEE_4712_B106_F7E2CBB821C4__INCLUDED_)
#define AFX_DIALOGS_H__61310EF0_CFEE_4712_B106_F7E2CBB821C4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CDialogsApp:
// See Dialogs.cpp for the implementation of this class
//

class CDialogsApp : public CWinApp
{
public:
	CDialogsApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialogsApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CDialogsApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGS_H__61310EF0_CFEE_4712_B106_F7E2CBB821C4__INCLUDED_)
