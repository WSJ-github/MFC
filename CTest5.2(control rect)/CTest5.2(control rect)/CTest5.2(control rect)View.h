
// CTest5.2(control rect)View.h : CCTest52controlrectView ��Ľӿ�
//

#pragma once


class CCTest52controlrectView : public CView
{
protected: // �������л�����
	CCTest52controlrectView();
	DECLARE_DYNCREATE(CCTest52controlrectView)

// ����
public:
	CCTest52controlrectDoc* GetDocument() const;

// ����
public:
	CRect r;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest52controlrectView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest5.2(control rect)View.cpp �еĵ��԰汾
inline CCTest52controlrectDoc* CCTest52controlrectView::GetDocument() const
   { return reinterpret_cast<CCTest52controlrectDoc*>(m_pDocument); }
#endif

