//EX 12
//An Elementary Windows Program

#include <afxwin.h>

class COurApp:public CWinApp
{
public:
	virtual BOOL InitInstance();
};

class COurWnd:public CFrameWnd
{
public:
	COurWnd()
	{
		Create(0,"Our Dumb MFC Application");
	}

};

BOOL COurApp::InitInstance(void)
{
	m_pMainWnd = new COurWnd;
	m_pMainWnd->ShowWindow(m_nCmdShow);
	return TRUE;
}

COurApp AnApplication;
