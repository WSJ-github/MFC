
// CTest4View.h : CCTest4View ��Ľӿ�
//

#pragma once


class CCTest4View : public CView
{
protected: // �������л�����
	CCTest4View();
	DECLARE_DYNCREATE(CCTest4View)

// ����
public:
	CCTest4Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest4View();
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

#ifndef _DEBUG  // CTest4View.cpp �еĵ��԰汾
inline CCTest4Doc* CCTest4View::GetDocument() const
   { return reinterpret_cast<CCTest4Doc*>(m_pDocument); }
#endif

