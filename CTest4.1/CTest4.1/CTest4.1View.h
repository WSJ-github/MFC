
// CTest4.1View.h : CCTest41View ��Ľӿ�
//

#pragma once


class CCTest41View : public CView
{
protected: // �������л�����
	CCTest41View();
	DECLARE_DYNCREATE(CCTest41View)

// ����
public:
	CCTest41Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest41View();
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
};

#ifndef _DEBUG  // CTest4.1View.cpp �еĵ��԰汾
inline CCTest41Doc* CCTest41View::GetDocument() const
   { return reinterpret_cast<CCTest41Doc*>(m_pDocument); }
#endif

