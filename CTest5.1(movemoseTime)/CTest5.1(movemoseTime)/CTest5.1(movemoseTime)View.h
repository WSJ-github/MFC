
// CTest5.1(movemoseTime)View.h : CCTest51movemoseTimeView ��Ľӿ�
//

#pragma once


class CCTest51movemoseTimeView : public CView
{
protected: // �������л�����
	CCTest51movemoseTimeView();
	DECLARE_DYNCREATE(CCTest51movemoseTimeView)

// ����
public:
	CCTest51movemoseTimeDoc* GetDocument() const;

// ����
public:
	int flag;
	int time;   //��¼mosemove�Ĵ���
	int crosswiseTime;
	CPoint p1, p2;  //���º�̧���������ص�

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest51movemoseTimeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnMButtonDown(UINT nFlags, CPoint point);
//	afx_msg void OnMButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest5.1(movemoseTime)View.cpp �еĵ��԰汾
inline CCTest51movemoseTimeDoc* CCTest51movemoseTimeView::GetDocument() const
   { return reinterpret_cast<CCTest51movemoseTimeDoc*>(m_pDocument); }
#endif

