// TimersDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Timers.h"
#include "TimersDlg.h"

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
// CTimersDlg dialog

CTimersDlg::CTimersDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTimersDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CTimersDlg)
	m_sTime = _T("");
	m_sCount = _T("");
	m_iInterval = 0;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CTimersDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTimersDlg)
	DDX_Control(pDX, IDC_STOPTIMER, m_cStopTime);
	DDX_Control(pDX, IDC_STARTTIME, m_cStartTime);
	DDX_Text(pDX, IDC_STATICTIME, m_sTime);
	DDX_Text(pDX, IDC_STATICCOUNT, m_sCount);
	DDX_Text(pDX, IDC_INTERVAL, m_iInterval);
	DDV_MinMaxInt(pDX, m_iInterval, 1, 100000);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CTimersDlg, CDialog)
	//{{AFX_MSG_MAP(CTimersDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_EXIT, OnExit)
	ON_WM_TIMER()
	ON_EN_CHANGE(IDC_INTERVAL, OnChangeInterval)
	ON_BN_CLICKED(IDC_STARTTIME, OnStarttime)
	ON_BN_CLICKED(IDC_STOPTIMER, OnStoptimer)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTimersDlg message handlers

BOOL CTimersDlg::OnInitDialog()
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
	m_iInterval = 100;

	UpdateData(FALSE);

	SetTimer(ID_CLOCK_TIMER,1000,NULL);


	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CTimersDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CTimersDlg::OnPaint() 
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
HCURSOR CTimersDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CTimersDlg::OnExit() 
{
	// TODO: Add your control notification handler code here

	OnOK();
	
}

void CTimersDlg::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	CTime curTime = CTime::GetCurrentTime();

	switch (nIDEvent)
	{
	case ID_CLOCK_TIMER:
		m_sTime.Format("%d:%d:%d",curTime.GetHour(), curTime.GetMinute(), curTime.GetSecond());
		break;
	case ID_COUNT_TIMER:
		{
		m_iCount++;

		m_sCount.Format("%d", m_iCount);
		}
		break;
	}

	UpdateData(FALSE);

	CDialog::OnTimer(nIDEvent);
}

void CTimersDlg::OnChangeInterval() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
	UpdateData(TRUE);
	
}

void CTimersDlg::OnStarttime() 
{
	// TODO: Add your control notification handler code here
	
	UpdateData(TRUE);

	m_iCount = 0;
	m_sCount.Format("%d", m_iCount);

	m_cStartTime.EnableWindow(FALSE);
	m_cStopTime.EnableWindow(TRUE);

	UpdateData(FALSE);

	SetTimer(ID_COUNT_TIMER, m_iInterval, NULL);


}

void CTimersDlg::OnStoptimer() 
{
	// TODO: Add your control notification handler code here
	
	KillTimer(ID_COUNT_TIMER);

	m_cStartTime.EnableWindow(TRUE);
	m_cStopTime.EnableWindow(FALSE);

	UpdateData(FALSE);
}
