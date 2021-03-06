
// CTest5.1View.h : CCTest51View 类的接口
//

#pragma once


class CCTest51View : public CView
{
protected: // 仅从序列化创建
	CCTest51View();
	DECLARE_DYNCREATE(CCTest51View)

// 特性
public:
	CCTest51Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest51View();
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

#ifndef _DEBUG  // CTest5.1View.cpp 中的调试版本
inline CCTest51Doc* CCTest51View::GetDocument() const
   { return reinterpret_cast<CCTest51Doc*>(m_pDocument); }
#endif

