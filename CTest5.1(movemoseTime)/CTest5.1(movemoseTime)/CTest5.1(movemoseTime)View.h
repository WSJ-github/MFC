
// CTest5.1(movemoseTime)View.h : CCTest51movemoseTimeView 类的接口
//

#pragma once


class CCTest51movemoseTimeView : public CView
{
protected: // 仅从序列化创建
	CCTest51movemoseTimeView();
	DECLARE_DYNCREATE(CCTest51movemoseTimeView)

// 特性
public:
	CCTest51movemoseTimeDoc* GetDocument() const;

// 操作
public:
	int flag;
	int time;   //记录mosemove的次数
	int crosswiseTime;
	CPoint p1, p2;  //按下和抬起两个像素点

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest51movemoseTimeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnMButtonDown(UINT nFlags, CPoint point);
//	afx_msg void OnMButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest5.1(movemoseTime)View.cpp 中的调试版本
inline CCTest51movemoseTimeDoc* CCTest51movemoseTimeView::GetDocument() const
   { return reinterpret_cast<CCTest51movemoseTimeDoc*>(m_pDocument); }
#endif

