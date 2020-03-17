
// CTest5.2(control rect)View.h : CCTest52controlrectView 类的接口
//

#pragma once


class CCTest52controlrectView : public CView
{
protected: // 仅从序列化创建
	CCTest52controlrectView();
	DECLARE_DYNCREATE(CCTest52controlrectView)

// 特性
public:
	CCTest52controlrectDoc* GetDocument() const;

// 操作
public:
	CRect r;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest52controlrectView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest5.2(control rect)View.cpp 中的调试版本
inline CCTest52controlrectDoc* CCTest52controlrectView::GetDocument() const
   { return reinterpret_cast<CCTest52controlrectDoc*>(m_pDocument); }
#endif

