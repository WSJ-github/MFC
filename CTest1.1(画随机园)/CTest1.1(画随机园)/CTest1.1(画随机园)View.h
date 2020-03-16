
// CTest1.1(画随机园)View.h : CCTest11画随机园View 类的接口
//

#pragma once


class CCTest11画随机园View : public CView
{
protected: // 仅从序列化创建
	CCTest11画随机园View();
	DECLARE_DYNCREATE(CCTest11画随机园View)

// 特性
public:
	CCTest11画随机园Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest11画随机园View();
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

#ifndef _DEBUG  // CTest1.1(画随机园)View.cpp 中的调试版本
inline CCTest11画随机园Doc* CCTest11画随机园View::GetDocument() const
   { return reinterpret_cast<CCTest11画随机园Doc*>(m_pDocument); }
#endif

