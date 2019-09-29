// Day2Dlg.h : header file
//

#if !defined(AFX_DAY2DLG_H__3BA6AF83_A069_48DC_B8CE_294FF978C667__INCLUDED_)
#define AFX_DAY2DLG_H__3BA6AF83_A069_48DC_B8CE_294FF978C667__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CDay2Dlg dialog

class CDay2Dlg : public CDialog
{
// Construction
public:
	CDay2Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CDay2Dlg)
	enum { IDD = IDD_DAY2_DIALOG };
	BOOL	m_bEnableMsg;
	BOOL	m_bShowMsg;
	BOOL	m_bShowPgm;
	CString	m_strMessage;
	CString	m_strProgToRun;
	BOOL	m_bEnablePgm;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDay2Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CDay2Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnExit();
	afx_msg void OnShwmsg();
	afx_msg void OnClrmsg();
	afx_msg void OnCkenblmsg();
	afx_msg void OnCkshwmsg();
	afx_msg void OnRunpgm();
	afx_msg void OnDfltmsg();
	afx_msg void OnCkenblpgm();
	afx_msg void OnCkshwpgm();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DAY2DLG_H__3BA6AF83_A069_48DC_B8CE_294FF978C667__INCLUDED_)
