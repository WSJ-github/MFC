
// CTest10.1(showDialogOut)View.h : CCTest101showDialogOutView ��Ľӿ�
//

#pragma once


class CCTest101showDialogOutView : public CView
{
protected: // �������л�����
	CCTest101showDialogOutView();
	DECLARE_DYNCREATE(CCTest101showDialogOutView)

// ����
public:
	CCTest101showDialogOutDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest101showDialogOutView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest10.1(showDialogOut)View.cpp �еĵ��԰汾
inline CCTest101showDialogOutDoc* CCTest101showDialogOutView::GetDocument() const
   { return reinterpret_cast<CCTest101showDialogOutDoc*>(m_pDocument); }
#endif

