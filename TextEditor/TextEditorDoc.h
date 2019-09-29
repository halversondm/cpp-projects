// TextEditorDoc.h : interface of the CTextEditorDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TEXTEDITORDOC_H__D8382F44_71CB_461E_B480_5BDFCA7478FB__INCLUDED_)
#define AFX_TEXTEDITORDOC_H__D8382F44_71CB_461E_B480_5BDFCA7478FB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTextEditorDoc : public CDocument
{
protected: // create from serialization only
	CTextEditorDoc();
	DECLARE_DYNCREATE(CTextEditorDoc)
		
	int m_PenWidth;

// Attributes
public:

// Operations
public:

	int GetPenWidth()
	{ return m_PenWidth; }

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTextEditorDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTextEditorDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTextEditorDoc)
	afx_msg void OnPenwidthDlg();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEXTEDITORDOC_H__D8382F44_71CB_461E_B480_5BDFCA7478FB__INCLUDED_)
