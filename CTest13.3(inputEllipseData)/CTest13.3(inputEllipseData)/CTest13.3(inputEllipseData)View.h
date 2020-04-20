
// CTest13.3(inputEllipseData)View.h : CCTest133inputEllipseDataView 类的接口
//

#pragma once


class CCTest133inputEllipseDataView : public CView
{
protected: // 仅从序列化创建
	CCTest133inputEllipseDataView();
	DECLARE_DYNCREATE(CCTest133inputEllipseDataView)

// 特性
public:
	CCTest133inputEllipseDataDoc* GetDocument() const;

// 操作
public:
	int f = 0;
	int r1, r2, r3, r4;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest133inputEllipseDataView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEllipse();
};

#ifndef _DEBUG  // CTest13.3(inputEllipseData)View.cpp 中的调试版本
inline CCTest133inputEllipseDataDoc* CCTest133inputEllipseDataView::GetDocument() const
   { return reinterpret_cast<CCTest133inputEllipseDataDoc*>(m_pDocument); }
#endif

