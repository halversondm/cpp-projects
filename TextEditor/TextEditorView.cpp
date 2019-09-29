// TextEditorView.cpp : implementation of the CTextEditorView class
//

#include "stdafx.h"
#include "TextEditor.h"

#include "TextEditorDoc.h"
#include "TextEditorView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTextEditorView

IMPLEMENT_DYNCREATE(CTextEditorView, CEditView)

BEGIN_MESSAGE_MAP(CTextEditorView, CEditView)
	//{{AFX_MSG_MAP(CTextEditorView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CEditView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CEditView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CEditView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTextEditorView construction/destruction

CTextEditorView::CTextEditorView()
{
	// TODO: add construction code here

}

CTextEditorView::~CTextEditorView()
{
}

BOOL CTextEditorView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	BOOL bPreCreated = CEditView::PreCreateWindow(cs);
	cs.style &= ~(ES_AUTOHSCROLL|WS_HSCROLL);	// Enable word-wrapping

	return bPreCreated;
}

/////////////////////////////////////////////////////////////////////////////
// CTextEditorView drawing

void CTextEditorView::OnDraw(CDC* pDC)
{
	CTextEditorDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CTextEditorView printing

BOOL CTextEditorView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default CEditView preparation
	return CEditView::OnPreparePrinting(pInfo);
}

void CTextEditorView::OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo)
{
	// Default CEditView begin printing.
	CEditView::OnBeginPrinting(pDC, pInfo);
}

void CTextEditorView::OnEndPrinting(CDC* pDC, CPrintInfo* pInfo)
{
	// Default CEditView end printing
	CEditView::OnEndPrinting(pDC, pInfo);
}

/////////////////////////////////////////////////////////////////////////////
// CTextEditorView diagnostics

#ifdef _DEBUG
void CTextEditorView::AssertValid() const
{
	CEditView::AssertValid();
}

void CTextEditorView::Dump(CDumpContext& dc) const
{
	CEditView::Dump(dc);
}

CTextEditorDoc* CTextEditorView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTextEditorDoc)));
	return (CTextEditorDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTextEditorView message handlers
