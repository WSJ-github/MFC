
// CTest15.1(SaveEllipse)View.h : CCTest151SaveEllipseView ��Ľӿ�
//

#pragma once


class CCTest151SaveEllipseView : public CView
{
protected: // �������л�����
	CCTest151SaveEllipseView();
	DECLARE_DYNCREATE(CCTest151SaveEllipseView)

// ����
public:
	CCTest151SaveEllipseDoc* GetDocument() const;

// ����
public:
	boolean flag;
	CRect r;
	CPoint p1, p2;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest151SaveEllipseView();
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
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest15.1(SaveEllipse)View.cpp �еĵ��԰汾
inline CCTest151SaveEllipseDoc* CCTest151SaveEllipseView::GetDocument() const
   { return reinterpret_cast<CCTest151SaveEllipseDoc*>(m_pDocument); }
#endif

