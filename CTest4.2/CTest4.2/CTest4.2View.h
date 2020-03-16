
// CTest4.2View.h : CCTest42View 类的接口
//

#pragma once


class CCTest42View : public CView
{
protected: // 仅从序列化创建
	CCTest42View();
	DECLARE_DYNCREATE(CCTest42View)

// 特性
public:
	CCTest42Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest42View();
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

#ifndef _DEBUG  // CTest4.2View.cpp 中的调试版本
inline CCTest42Doc* CCTest42View::GetDocument() const
   { return reinterpret_cast<CCTest42Doc*>(m_pDocument); }
#endif

