
// CTest10.2(StringExchange)View.h : CCTest102StringExchangeView ��Ľӿ�
//

#pragma once


class CCTest102StringExchangeView : public CView
{
protected: // �������л�����
	CCTest102StringExchangeView();
	DECLARE_DYNCREATE(CCTest102StringExchangeView)

// ����
public:
	CCTest102StringExchangeDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest102StringExchangeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnStringexchange();
};

#ifndef _DEBUG  // CTest10.2(StringExchange)View.cpp �еĵ��԰汾
inline CCTest102StringExchangeDoc* CCTest102StringExchangeView::GetDocument() const
   { return reinterpret_cast<CCTest102StringExchangeDoc*>(m_pDocument); }
#endif

