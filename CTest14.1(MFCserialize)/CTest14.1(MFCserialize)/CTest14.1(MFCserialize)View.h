
// CTest14.1(MFCserialize)View.h : CCTest141MFCserializeView ��Ľӿ�
//

#pragma once


class CCTest141MFCserializeView : public CView
{
protected: // �������л�����
	CCTest141MFCserializeView();
	DECLARE_DYNCREATE(CCTest141MFCserializeView)

// ����
public:
	CCTest141MFCserializeDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest141MFCserializeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnReadfile();
};

#ifndef _DEBUG  // CTest14.1(MFCserialize)View.cpp �еĵ��԰汾
inline CCTest141MFCserializeDoc* CCTest141MFCserializeView::GetDocument() const
   { return reinterpret_cast<CCTest141MFCserializeDoc*>(m_pDocument); }
#endif

