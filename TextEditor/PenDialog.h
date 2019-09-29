#if !defined(AFX_PENDIALOG_H__04CE69A5_C353_4FF1_803C_975051058ED6__INCLUDED_)
#define AFX_PENDIALOG_H__04CE69A5_C353_4FF1_803C_975051058ED6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// PenDialog.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CPenDialog dialog

class CPenDialog : public CDialog
{
// Construction
public:
	CPenDialog(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CPenDialog)
	enum { IDD = IDD_PENWIDTH_DLG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA
public:
	int m_PenWidth;

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPenDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CPenDialog)
	virtual BOOL OnInitDialog();
	afx_msg void OnPenwidth0();
	afx_msg void OnPenwidth1();
	afx_msg void OnPenwidth2();
	afx_msg void OnPenwidth3();
	afx_msg void OnPenwidth4();
	afx_msg void OnPenwidth5();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PENDIALOG_H__04CE69A5_C353_4FF1_803C_975051058ED6__INCLUDED_)
