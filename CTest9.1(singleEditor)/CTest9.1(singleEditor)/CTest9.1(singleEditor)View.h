
// CTest9.1(singleEditor)View.h : CCTest91singleEditorView ��Ľӿ�
//

#pragma once


class CCTest91singleEditorView : public CView
{
protected: // �������л�����
	CCTest91singleEditorView();
	DECLARE_DYNCREATE(CCTest91singleEditorView)

// ����
public:
	CCTest91singleEditorDoc* GetDocument() const;

// ����
public:
	CRect r;
	CString s1;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest91singleEditorView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // CTest9.1(singleEditor)View.cpp �еĵ��԰汾
inline CCTest91singleEditorDoc* CCTest91singleEditorView::GetDocument() const
   { return reinterpret_cast<CCTest91singleEditorDoc*>(m_pDocument); }
#endif

