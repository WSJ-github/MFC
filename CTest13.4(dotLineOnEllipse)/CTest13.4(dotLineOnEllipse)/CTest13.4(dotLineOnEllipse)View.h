
// CTest13.4(dotLineOnEllipse)View.h : CCTest134dotLineOnEllipseView ��Ľӿ�
//

#pragma once


class CCTest134dotLineOnEllipseView : public CView
{
protected: // �������л�����
	CCTest134dotLineOnEllipseView();
	DECLARE_DYNCREATE(CCTest134dotLineOnEllipseView)

// ����
public:
	CCTest134dotLineOnEllipseDoc* GetDocument() const;

// ����
public:
	CRect r1,r2;
	int flag=0;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest134dotLineOnEllipseView();
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
};

#ifndef _DEBUG  // CTest13.4(dotLineOnEllipse)View.cpp �еĵ��԰汾
inline CCTest134dotLineOnEllipseDoc* CCTest134dotLineOnEllipseView::GetDocument() const
   { return reinterpret_cast<CCTest134dotLineOnEllipseDoc*>(m_pDocument); }
#endif

