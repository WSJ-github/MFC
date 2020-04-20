
// CTest13.5(FillRGB)View.h : CCTest135FillRGBView 类的接口
//

#pragma once


class CCTest135FillRGBView : public CView
{
protected: // 仅从序列化创建
	CCTest135FillRGBView();
	DECLARE_DYNCREATE(CCTest135FillRGBView)

// 特性
public:
	CCTest135FillRGBDoc* GetDocument() const;

// 操作
public:
	CRgn rgn;
	int r1, r2,r3;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest135FillRGBView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32771();
};

#ifndef _DEBUG  // CTest13.5(FillRGB)View.cpp 中的调试版本
inline CCTest135FillRGBDoc* CCTest135FillRGBView::GetDocument() const
   { return reinterpret_cast<CCTest135FillRGBDoc*>(m_pDocument); }
#endif

