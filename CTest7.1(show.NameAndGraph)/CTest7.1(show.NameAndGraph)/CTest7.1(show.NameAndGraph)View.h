
// CTest7.1(show.NameAndGraph)View.h : CCTest71showNameAndGraphView ��Ľӿ�
//

#pragma once


class CCTest71showNameAndGraphView : public CView
{
protected: // �������л�����
	CCTest71showNameAndGraphView();
	DECLARE_DYNCREATE(CCTest71showNameAndGraphView)

// ����
public:
	CCTest71showNameAndGraphDoc* GetDocument() const;

// ����
public:
	int flag1, flag2, flag3;
	POINT p1, p2;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest71showNameAndGraphView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Onshowname();
	afx_msg void Onshowline();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void Onshowrectangle();
	afx_msg void Onshowellipse();
};

#ifndef _DEBUG  // CTest7.1(show.NameAndGraph)View.cpp �еĵ��԰汾
inline CCTest71showNameAndGraphDoc* CCTest71showNameAndGraphView::GetDocument() const
   { return reinterpret_cast<CCTest71showNameAndGraphDoc*>(m_pDocument); }
#endif

