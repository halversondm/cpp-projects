// Day2Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "Day2.h"
#include "Day2Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDay2Dlg dialog

CDay2Dlg::CDay2Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CDay2Dlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDay2Dlg)
	m_bEnableMsg = FALSE;
	m_bShowMsg = FALSE;
	m_bShowPgm = FALSE;
	m_strMessage = _T("");
	m_strProgToRun = _T("");
	m_bEnablePgm = FALSE;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CDay2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDay2Dlg)
	DDX_Check(pDX, IDC_CKENBLMSG, m_bEnableMsg);
	DDX_Check(pDX, IDC_CKSHWMSG, m_bShowMsg);
	DDX_Check(pDX, IDC_CKSHWPGM, m_bShowPgm);
	DDX_Text(pDX, IDC_MSG, m_strMessage);
	DDX_CBString(pDX, IDC_PROGTORUN, m_strProgToRun);
	DDX_Check(pDX, IDC_CKENBLPGM, m_bEnablePgm);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CDay2Dlg, CDialog)
	//{{AFX_MSG_MAP(CDay2Dlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_EXIT, OnExit)
	ON_BN_CLICKED(IDC_SHWMSG, OnShwmsg)
	ON_BN_CLICKED(IDC_CLRMSG, OnClrmsg)
	ON_BN_CLICKED(IDC_CKENBLMSG, OnCkenblmsg)
	ON_BN_CLICKED(IDC_CKSHWMSG, OnCkshwmsg)
	ON_BN_CLICKED(IDC_RUNPGM, OnRunpgm)
	ON_BN_CLICKED(IDC_DFLTMSG, OnDfltmsg)
	ON_BN_CLICKED(IDC_CKENBLPGM, OnCkenblpgm)
	ON_BN_CLICKED(IDC_CKSHWPGM, OnCkshwpgm)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDay2Dlg message handlers

BOOL CDay2Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	m_strMessage = "Place a message here";

	m_bShowMsg = true;
	m_bShowPgm = true;
	m_bEnableMsg = true;
	m_bEnablePgm = true;

	UpdateData(FALSE);

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CDay2Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CDay2Dlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CDay2Dlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CDay2Dlg::OnExit() 
{
	// TODO: Add your control notification handler code here
	OnOK();
}

void CDay2Dlg::OnShwmsg() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);

	MessageBox(m_strMessage);
}

void CDay2Dlg::OnClrmsg() 
{
	// TODO: Add your control notification handler code here
	m_strMessage = "";

	UpdateData(FALSE);
}

void CDay2Dlg::OnCkenblmsg() 
{
	// TODO: Add your control notification handler code here

	UpdateData(TRUE);

	if (m_bEnableMsg == TRUE)
	{
		GetDlgItem(IDC_MSG) ->EnableWindow(TRUE);
		GetDlgItem(IDC_SHWMSG) ->EnableWindow(TRUE);
		GetDlgItem(IDC_DFLTMSG) ->EnableWindow(TRUE);
		GetDlgItem(IDC_CLRMSG) ->EnableWindow(TRUE);
		GetDlgItem(IDC_STATICMSG) ->EnableWindow(TRUE);
	}
	else
	{
		GetDlgItem(IDC_MSG) ->EnableWindow(FALSE);
		GetDlgItem(IDC_SHWMSG) ->EnableWindow(FALSE);
		GetDlgItem(IDC_DFLTMSG) ->EnableWindow(FALSE);
		GetDlgItem(IDC_CLRMSG) ->EnableWindow(FALSE);
		GetDlgItem(IDC_STATICMSG) ->EnableWindow(FALSE);
	}

}

void CDay2Dlg::OnCkshwmsg() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);

	if (m_bShowMsg == TRUE)
	{
		GetDlgItem(IDC_MSG) ->ShowWindow(TRUE);
		GetDlgItem(IDC_SHWMSG) ->ShowWindow(TRUE);
		GetDlgItem(IDC_DFLTMSG) ->ShowWindow(TRUE);
		GetDlgItem(IDC_CLRMSG) ->ShowWindow(TRUE);
		GetDlgItem(IDC_STATICMSG) ->ShowWindow(TRUE);
	}
	else
	{
		GetDlgItem(IDC_MSG) ->ShowWindow(FALSE);
		GetDlgItem(IDC_SHWMSG) ->ShowWindow(FALSE);
		GetDlgItem(IDC_DFLTMSG) ->ShowWindow(FALSE);
		GetDlgItem(IDC_CLRMSG) ->ShowWindow(FALSE);
		GetDlgItem(IDC_STATICMSG) ->ShowWindow(FALSE);
	}

}

void CDay2Dlg::OnRunpgm() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	
	CString strPgmName;

	strPgmName = m_strProgToRun;

	strPgmName.MakeUpper();

	if (strPgmName == "PAINT")
		WinExec("mspaint.exe", SW_SHOW);

	if (strPgmName == "NOTEPAD")
		WinExec("notepad.exe", SW_SHOW);

	if (strPgmName == "SOLITAIRE")
		WinExec("sol.exe", SW_SHOW);
	else
		WinExec(strPgmName, SW_SHOW);


}

void CDay2Dlg::OnDfltmsg() 
{
	// TODO: Add your control notification handler code here
	m_strMessage = "Enter a message here";
	UpdateData(FALSE);
	
}

void CDay2Dlg::OnCkenblpgm() 
{
	// TODO: Add your control notification handler code here
		UpdateData(TRUE);

	if (m_bEnablePgm == TRUE)
	{
		GetDlgItem(IDC_STATICPGM) ->EnableWindow(TRUE);
		GetDlgItem(IDC_PROGTORUN) ->EnableWindow(TRUE);
		GetDlgItem(IDC_RUNPGM) ->EnableWindow(TRUE);
	}
	else
	{
		GetDlgItem(IDC_STATICPGM) ->EnableWindow(FALSE);
		GetDlgItem(IDC_PROGTORUN) ->EnableWindow(FALSE);
		GetDlgItem(IDC_RUNPGM) ->EnableWindow(FALSE);
	}

}

void CDay2Dlg::OnCkshwpgm() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);

	if (m_bShowPgm == TRUE)
	{
		GetDlgItem(IDC_STATICPGM) ->ShowWindow(TRUE);
		GetDlgItem(IDC_PROGTORUN) ->ShowWindow(TRUE);
		GetDlgItem(IDC_RUNPGM) ->ShowWindow(TRUE);
	}
	else
	{
		GetDlgItem(IDC_STATICPGM) ->ShowWindow(FALSE);
		GetDlgItem(IDC_PROGTORUN) ->ShowWindow(FALSE);
		GetDlgItem(IDC_RUNPGM) ->ShowWindow(FALSE);
	}

}
