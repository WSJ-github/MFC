
// CTest9.2(insertChar)View.h : CCTest92insertCharView 类的接口
//

#pragma once


class CCTest92insertCharView : public CView
{
protected: // 仅从序列化创建
	CCTest92insertCharView();
	DECLARE_DYNCREATE(CCTest92insertCharView)

// 特性
public:
	CCTest92insertCharDoc* GetDocument() const;

// 操作
public:
	CRect r;
	CString s1;
	CPoint p;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest92insertCharView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest9.2(insertChar)View.cpp 中的调试版本
inline CCTest92insertCharDoc* CCTest92insertCharView::GetDocument() const
   { return reinterpret_cast<CCTest92insertCharDoc*>(m_pDocument); }
#endif

