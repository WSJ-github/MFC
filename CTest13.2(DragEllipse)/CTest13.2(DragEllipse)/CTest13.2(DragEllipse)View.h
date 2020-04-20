
// CTest13.2(DragEllipse)View.h : CCTest132DragEllipseView 类的接口
//

#pragma once


class CCTest132DragEllipseView : public CView
{
protected: // 仅从序列化创建
	CCTest132DragEllipseView();
	DECLARE_DYNCREATE(CCTest132DragEllipseView)

// 特性
public:
	CCTest132DragEllipseDoc* GetDocument() const;

// 操作
public:
	boolean flag;
	CRect r;
	CPoint p1,p2;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest132DragEllipseView();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest13.2(DragEllipse)View.cpp 中的调试版本
inline CCTest132DragEllipseDoc* CCTest132DragEllipseView::GetDocument() const
   { return reinterpret_cast<CCTest132DragEllipseDoc*>(m_pDocument); }
#endif

