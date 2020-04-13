
// CTest11.1(catchRect)View.h : CCTest111catchRectView 类的接口
//

#pragma once


class CCTest111catchRectView : public CView
{
protected: // 仅从序列化创建
	CCTest111catchRectView();
	DECLARE_DYNCREATE(CCTest111catchRectView)

// 特性
public:
	CCTest111catchRectDoc* GetDocument() const;

// 操作
public:
	CRect r;
	int flag = 0;
	CPoint p;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest111catchRectView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest11.1(catchRect)View.cpp 中的调试版本
inline CCTest111catchRectDoc* CCTest111catchRectView::GetDocument() const
   { return reinterpret_cast<CCTest111catchRectDoc*>(m_pDocument); }
#endif

