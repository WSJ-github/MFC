
// CTest13.2(DragEllipse)View.h : CCTest132DragEllipseView ��Ľӿ�
//

#pragma once


class CCTest132DragEllipseView : public CView
{
protected: // �������л�����
	CCTest132DragEllipseView();
	DECLARE_DYNCREATE(CCTest132DragEllipseView)

// ����
public:
	CCTest132DragEllipseDoc* GetDocument() const;

// ����
public:
	boolean flag;
	CRect r;
	CPoint p1,p2;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest132DragEllipseView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest13.2(DragEllipse)View.cpp �еĵ��԰汾
inline CCTest132DragEllipseDoc* CCTest132DragEllipseView::GetDocument() const
   { return reinterpret_cast<CCTest132DragEllipseDoc*>(m_pDocument); }
#endif

