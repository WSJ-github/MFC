
// CTest9.3(moreLineEditor)View.h : CCTest93moreLineEditorView ��Ľӿ�
//

#pragma once


class CCTest93moreLineEditorView : public CView
{
protected: // �������л�����
	CCTest93moreLineEditorView();
	DECLARE_DYNCREATE(CCTest93moreLineEditorView)

// ����
public:
	CCTest93moreLineEditorDoc* GetDocument() const;

// ����
public:
	CRect r;
	CString s1;
	int y=105;
	int cy = 20;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest93moreLineEditorView();
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

#ifndef _DEBUG  // CTest9.3(moreLineEditor)View.cpp �еĵ��԰汾
inline CCTest93moreLineEditorDoc* CCTest93moreLineEditorView::GetDocument() const
   { return reinterpret_cast<CCTest93moreLineEditorDoc*>(m_pDocument); }
#endif

