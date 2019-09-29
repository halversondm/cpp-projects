// TextEditorView.h : interface of the CTextEditorView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TEXTEDITORVIEW_H__645FAB32_F005_4738_90A7_CBC07FD8FEDC__INCLUDED_)
#define AFX_TEXTEDITORVIEW_H__645FAB32_F005_4738_90A7_CBC07FD8FEDC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTextEditorView : public CEditView
{
protected: // create from serialization only
	CTextEditorView();
	DECLARE_DYNCREATE(CTextEditorView)

// Attributes
public:
	CTextEditorDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTextEditorView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTextEditorView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTextEditorView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in TextEditorView.cpp
inline CTextEditorDoc* CTextEditorView::GetDocument()
   { return (CTextEditorDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEXTEDITORVIEW_H__645FAB32_F005_4738_90A7_CBC07FD8FEDC__INCLUDED_)
