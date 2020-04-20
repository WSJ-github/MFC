
// CTest13.4(dotLineOnEllipse)View.h : CCTest134dotLineOnEllipseView 类的接口
//

#pragma once


class CCTest134dotLineOnEllipseView : public CView
{
protected: // 仅从序列化创建
	CCTest134dotLineOnEllipseView();
	DECLARE_DYNCREATE(CCTest134dotLineOnEllipseView)

// 特性
public:
	CCTest134dotLineOnEllipseDoc* GetDocument() const;

// 操作
public:
	CRect r1,r2;
	int flag=0;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest134dotLineOnEllipseView();
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
};

#ifndef _DEBUG  // CTest13.4(dotLineOnEllipse)View.cpp 中的调试版本
inline CCTest134dotLineOnEllipseDoc* CCTest134dotLineOnEllipseView::GetDocument() const
   { return reinterpret_cast<CCTest134dotLineOnEllipseDoc*>(m_pDocument); }
#endif

