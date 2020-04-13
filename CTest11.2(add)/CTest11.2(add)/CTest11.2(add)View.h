
// CTest11.2(add)View.h : CCTest112addView 类的接口
//

#pragma once


class CCTest112addView : public CView
{
protected: // 仅从序列化创建
	CCTest112addView();
	DECLARE_DYNCREATE(CCTest112addView)

// 特性
public:
	CCTest112addDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest112addView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCalculator();
};

#ifndef _DEBUG  // CTest11.2(add)View.cpp 中的调试版本
inline CCTest112addDoc* CCTest112addView::GetDocument() const
   { return reinterpret_cast<CCTest112addDoc*>(m_pDocument); }
#endif

