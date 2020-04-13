
// CTest11.3(ClickEllipseMove)View.h : CCTest113ClickEllipseMoveView 类的接口
//

#pragma once


class CCTest113ClickEllipseMoveView : public CView
{
protected: // 仅从序列化创建
	CCTest113ClickEllipseMoveView();
	DECLARE_DYNCREATE(CCTest113ClickEllipseMoveView)

// 特性
public:
	CCTest113ClickEllipseMoveDoc* GetDocument() const;

// 操作
public:
	CRect r;
	int flag=0;
	int set=1;
	CRect clientRect;
	int control=1;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest113ClickEllipseMoveView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest11.3(ClickEllipseMove)View.cpp 中的调试版本
inline CCTest113ClickEllipseMoveDoc* CCTest113ClickEllipseMoveView::GetDocument() const
   { return reinterpret_cast<CCTest113ClickEllipseMoveDoc*>(m_pDocument); }
#endif

