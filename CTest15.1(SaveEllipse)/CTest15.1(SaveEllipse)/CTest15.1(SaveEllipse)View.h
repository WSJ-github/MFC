
// CTest15.1(SaveEllipse)View.h : CCTest151SaveEllipseView 类的接口
//

#pragma once


class CCTest151SaveEllipseView : public CView
{
protected: // 仅从序列化创建
	CCTest151SaveEllipseView();
	DECLARE_DYNCREATE(CCTest151SaveEllipseView)

// 特性
public:
	CCTest151SaveEllipseDoc* GetDocument() const;

// 操作
public:
	boolean flag;
	CRect r;
	CPoint p1, p2;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest151SaveEllipseView();
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
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest15.1(SaveEllipse)View.cpp 中的调试版本
inline CCTest151SaveEllipseDoc* CCTest151SaveEllipseView::GetDocument() const
   { return reinterpret_cast<CCTest151SaveEllipseDoc*>(m_pDocument); }
#endif

