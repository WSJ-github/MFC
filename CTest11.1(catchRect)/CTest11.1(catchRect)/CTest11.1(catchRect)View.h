
// CTest11.1(catchRect)View.h : CCTest111catchRectView ��Ľӿ�
//

#pragma once


class CCTest111catchRectView : public CView
{
protected: // �������л�����
	CCTest111catchRectView();
	DECLARE_DYNCREATE(CCTest111catchRectView)

// ����
public:
	CCTest111catchRectDoc* GetDocument() const;

// ����
public:
	CRect r;
	int flag = 0;
	CPoint p;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest111catchRectView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest11.1(catchRect)View.cpp �еĵ��԰汾
inline CCTest111catchRectDoc* CCTest111catchRectView::GetDocument() const
   { return reinterpret_cast<CCTest111catchRectDoc*>(m_pDocument); }
#endif

