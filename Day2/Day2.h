// Day2.h : main header file for the DAY2 application
//

#if !defined(AFX_DAY2_H__245B3E8C_CF1A_49A3_8D82_5C3C292EE14D__INCLUDED_)
#define AFX_DAY2_H__245B3E8C_CF1A_49A3_8D82_5C3C292EE14D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CDay2App:
// See Day2.cpp for the implementation of this class
//

class CDay2App : public CWinApp
{
public:
	CDay2App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDay2App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CDay2App)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DAY2_H__245B3E8C_CF1A_49A3_8D82_5C3C292EE14D__INCLUDED_)
