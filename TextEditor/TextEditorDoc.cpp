// TextEditorDoc.cpp : implementation of the CTextEditorDoc class
//

#include "stdafx.h"
#include "TextEditor.h"
#include "PenDialog.h"

#include "TextEditorDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTextEditorDoc

IMPLEMENT_DYNCREATE(CTextEditorDoc, CDocument)

BEGIN_MESSAGE_MAP(CTextEditorDoc, CDocument)
	//{{AFX_MSG_MAP(CTextEditorDoc)
	ON_COMMAND(IDD_PENWIDTH_DLG, OnPenwidthDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTextEditorDoc construction/destruction

CTextEditorDoc::CTextEditorDoc()
{


}

CTextEditorDoc::~CTextEditorDoc()
{
}

BOOL CTextEditorDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	((CEditView*)m_viewList.GetHead())->SetWindowText(NULL);

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CTextEditorDoc serialization

void CTextEditorDoc::Serialize(CArchive& ar)
{
	// CEditView contains an edit control which handles all serialization
	((CEditView*)m_viewList.GetHead())->SerializeRaw(ar);
}

/////////////////////////////////////////////////////////////////////////////
// CTextEditorDoc diagnostics

#ifdef _DEBUG
void CTextEditorDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTextEditorDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTextEditorDoc commands

void CTextEditorDoc::OnPenwidthDlg() 
{
	CPenDialog aDlg;
	m_PenWidth = 0;

	aDlg.m_PenWidth = m_PenWidth;
	if(aDlg.DoModal() == IDOK)
		m_PenWidth = aDlg.m_PenWidth;

	
}
