
// CTest13.5(FillRGB)View.h : CCTest135FillRGBView ��Ľӿ�
//

#pragma once


class CCTest135FillRGBView : public CView
{
protected: // �������л�����
	CCTest135FillRGBView();
	DECLARE_DYNCREATE(CCTest135FillRGBView)

// ����
public:
	CCTest135FillRGBDoc* GetDocument() const;

// ����
public:
	CRgn rgn;
	int r1, r2,r3;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest135FillRGBView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32771();
};

#ifndef _DEBUG  // CTest13.5(FillRGB)View.cpp �еĵ��԰汾
inline CCTest135FillRGBDoc* CCTest135FillRGBView::GetDocument() const
   { return reinterpret_cast<CCTest135FillRGBDoc*>(m_pDocument); }
#endif

