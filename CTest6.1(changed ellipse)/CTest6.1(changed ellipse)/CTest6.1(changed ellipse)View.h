
// CTest6.1(changed ellipse)View.h : CCTest61changedellipseView 类的接口
//

#pragma once


class CCTest61changedellipseView : public CView
{
protected: // 仅从序列化创建
	CCTest61changedellipseView();
	DECLARE_DYNCREATE(CCTest61changedellipseView)

// 特性
public:
	CCTest61changedellipseDoc* GetDocument() const;

// 操作
public:
	CRect r,clientrect;
	bool set;
	int flag;
	//long centerx;
	//long centery;
	POINT center;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest61changedellipseView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCircular1();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // CTest6.1(changed ellipse)View.cpp 中的调试版本
inline CCTest61changedellipseDoc* CCTest61changedellipseView::GetDocument() const
   { return reinterpret_cast<CCTest61changedellipseDoc*>(m_pDocument); }
#endif

