
// CTest14.2(readPictureAndShow)View.h : CCTest142readPictureAndShowView ��Ľӿ�
//

#pragma once


class CCTest142readPictureAndShowView : public CView
{
protected: // �������л�����
	CCTest142readPictureAndShowView();
	DECLARE_DYNCREATE(CCTest142readPictureAndShowView)

// ����
public:
	CCTest142readPictureAndShowDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest142readPictureAndShowView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnSelectpic();
	afx_msg void OnShowpic();
};

#ifndef _DEBUG  // CTest14.2(readPictureAndShow)View.cpp �еĵ��԰汾
inline CCTest142readPictureAndShowDoc* CCTest142readPictureAndShowView::GetDocument() const
   { return reinterpret_cast<CCTest142readPictureAndShowDoc*>(m_pDocument); }
#endif

