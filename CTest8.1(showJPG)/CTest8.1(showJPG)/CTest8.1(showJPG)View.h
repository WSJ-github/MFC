
// CTest8.1(showJPG)View.h : CCTest81showJPGView ��Ľӿ�
//

#pragma once


class CCTest81showJPGView : public CView
{
protected: // �������л�����
	CCTest81showJPGView();
	DECLARE_DYNCREATE(CCTest81showJPGView)

// ����
public:
	CCTest81showJPGDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest81showJPGView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // CTest8.1(showJPG)View.cpp �еĵ��԰汾
inline CCTest81showJPGDoc* CCTest81showJPGView::GetDocument() const
   { return reinterpret_cast<CCTest81showJPGDoc*>(m_pDocument); }
#endif

