
// CTest11.4(String+int)View.h : CCTest114StringintView 类的接口
//

#pragma once


class CCTest114StringintView : public CView
{
protected: // 仅从序列化创建
	CCTest114StringintView();
	DECLARE_DYNCREATE(CCTest114StringintView)

// 特性
public:
	CCTest114StringintDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest114StringintView();
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

#ifndef _DEBUG  // CTest11.4(String+int)View.cpp 中的调试版本
inline CCTest114StringintDoc* CCTest114StringintView::GetDocument() const
   { return reinterpret_cast<CCTest114StringintDoc*>(m_pDocument); }
#endif

