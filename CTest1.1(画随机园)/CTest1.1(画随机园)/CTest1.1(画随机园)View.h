
// CTest1.1(�����԰)View.h : CCTest11�����԰View ��Ľӿ�
//

#pragma once


class CCTest11�����԰View : public CView
{
protected: // �������л�����
	CCTest11�����԰View();
	DECLARE_DYNCREATE(CCTest11�����԰View)

// ����
public:
	CCTest11�����԰Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest11�����԰View();
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

#ifndef _DEBUG  // CTest1.1(�����԰)View.cpp �еĵ��԰汾
inline CCTest11�����԰Doc* CCTest11�����԰View::GetDocument() const
   { return reinterpret_cast<CCTest11�����԰Doc*>(m_pDocument); }
#endif

