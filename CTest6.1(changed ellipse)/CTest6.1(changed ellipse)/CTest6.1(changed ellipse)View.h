
// CTest6.1(changed ellipse)View.h : CCTest61changedellipseView ��Ľӿ�
//

#pragma once


class CCTest61changedellipseView : public CView
{
protected: // �������л�����
	CCTest61changedellipseView();
	DECLARE_DYNCREATE(CCTest61changedellipseView)

// ����
public:
	CCTest61changedellipseDoc* GetDocument() const;

// ����
public:
	CRect r,clientrect;
	bool set;
	int flag;
	//long centerx;
	//long centery;
	POINT center;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest61changedellipseView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCircular1();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // CTest6.1(changed ellipse)View.cpp �еĵ��԰汾
inline CCTest61changedellipseDoc* CCTest61changedellipseView::GetDocument() const
   { return reinterpret_cast<CCTest61changedellipseDoc*>(m_pDocument); }
#endif

