
// CTest4.2View.h : CCTest42View ��Ľӿ�
//

#pragma once


class CCTest42View : public CView
{
protected: // �������л�����
	CCTest42View();
	DECLARE_DYNCREATE(CCTest42View)

// ����
public:
	CCTest42Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest42View();
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

#ifndef _DEBUG  // CTest4.2View.cpp �еĵ��԰汾
inline CCTest42Doc* CCTest42View::GetDocument() const
   { return reinterpret_cast<CCTest42Doc*>(m_pDocument); }
#endif

