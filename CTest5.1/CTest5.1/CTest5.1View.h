
// CTest5.1View.h : CCTest51View ��Ľӿ�
//

#pragma once


class CCTest51View : public CView
{
protected: // �������л�����
	CCTest51View();
	DECLARE_DYNCREATE(CCTest51View)

// ����
public:
	CCTest51Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest51View();
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

#ifndef _DEBUG  // CTest5.1View.cpp �еĵ��԰汾
inline CCTest51Doc* CCTest51View::GetDocument() const
   { return reinterpret_cast<CCTest51Doc*>(m_pDocument); }
#endif

