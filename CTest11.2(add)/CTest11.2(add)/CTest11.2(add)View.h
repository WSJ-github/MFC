
// CTest11.2(add)View.h : CCTest112addView ��Ľӿ�
//

#pragma once


class CCTest112addView : public CView
{
protected: // �������л�����
	CCTest112addView();
	DECLARE_DYNCREATE(CCTest112addView)

// ����
public:
	CCTest112addDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest112addView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCalculator();
};

#ifndef _DEBUG  // CTest11.2(add)View.cpp �еĵ��԰汾
inline CCTest112addDoc* CCTest112addView::GetDocument() const
   { return reinterpret_cast<CCTest112addDoc*>(m_pDocument); }
#endif

