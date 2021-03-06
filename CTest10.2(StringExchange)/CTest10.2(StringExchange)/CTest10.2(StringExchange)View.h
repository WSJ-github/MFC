
// CTest10.2(StringExchange)View.h : CCTest102StringExchangeView 类的接口
//

#pragma once


class CCTest102StringExchangeView : public CView
{
protected: // 仅从序列化创建
	CCTest102StringExchangeView();
	DECLARE_DYNCREATE(CCTest102StringExchangeView)

// 特性
public:
	CCTest102StringExchangeDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest102StringExchangeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnStringexchange();
};

#ifndef _DEBUG  // CTest10.2(StringExchange)View.cpp 中的调试版本
inline CCTest102StringExchangeDoc* CCTest102StringExchangeView::GetDocument() const
   { return reinterpret_cast<CCTest102StringExchangeDoc*>(m_pDocument); }
#endif

