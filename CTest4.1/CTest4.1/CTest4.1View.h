
// CTest4.1View.h : CCTest41View 类的接口
//

#pragma once


class CCTest41View : public CView
{
protected: // 仅从序列化创建
	CCTest41View();
	DECLARE_DYNCREATE(CCTest41View)

// 特性
public:
	CCTest41Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest41View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest4.1View.cpp 中的调试版本
inline CCTest41Doc* CCTest41View::GetDocument() const
   { return reinterpret_cast<CCTest41Doc*>(m_pDocument); }
#endif

