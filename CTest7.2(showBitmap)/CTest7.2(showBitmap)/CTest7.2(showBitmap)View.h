
// CTest7.2(showBitmap)View.h : CCTest72showBitmapView ��Ľӿ�
//

#pragma once


class CCTest72showBitmapView : public CView
{
protected: // �������л�����
	CCTest72showBitmapView();
	DECLARE_DYNCREATE(CCTest72showBitmapView)

// ����
public:
	CCTest72showBitmapDoc* GetDocument() const;

// ����
public:
	CBitmap bitmap;
	int width;
	int heigth;
	BITMAP BM;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest72showBitmapView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // CTest7.2(showBitmap)View.cpp �еĵ��԰汾
inline CCTest72showBitmapDoc* CCTest72showBitmapView::GetDocument() const
   { return reinterpret_cast<CCTest72showBitmapDoc*>(m_pDocument); }
#endif

