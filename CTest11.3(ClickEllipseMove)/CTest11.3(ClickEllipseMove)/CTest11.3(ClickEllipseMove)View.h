
// CTest11.3(ClickEllipseMove)View.h : CCTest113ClickEllipseMoveView ��Ľӿ�
//

#pragma once


class CCTest113ClickEllipseMoveView : public CView
{
protected: // �������л�����
	CCTest113ClickEllipseMoveView();
	DECLARE_DYNCREATE(CCTest113ClickEllipseMoveView)

// ����
public:
	CCTest113ClickEllipseMoveDoc* GetDocument() const;

// ����
public:
	CRect r;
	int flag=0;
	int set=1;
	CRect clientRect;
	int control=1;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest113ClickEllipseMoveView();
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
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest11.3(ClickEllipseMove)View.cpp �еĵ��԰汾
inline CCTest113ClickEllipseMoveDoc* CCTest113ClickEllipseMoveView::GetDocument() const
   { return reinterpret_cast<CCTest113ClickEllipseMoveDoc*>(m_pDocument); }
#endif

