
// CTest9.2(insertChar)View.h : CCTest92insertCharView ��Ľӿ�
//

#pragma once


class CCTest92insertCharView : public CView
{
protected: // �������л�����
	CCTest92insertCharView();
	DECLARE_DYNCREATE(CCTest92insertCharView)

// ����
public:
	CCTest92insertCharDoc* GetDocument() const;

// ����
public:
	CRect r;
	CString s1;
	CPoint p;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest92insertCharView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest9.2(insertChar)View.cpp �еĵ��԰汾
inline CCTest92insertCharDoc* CCTest92insertCharView::GetDocument() const
   { return reinterpret_cast<CCTest92insertCharDoc*>(m_pDocument); }
#endif

