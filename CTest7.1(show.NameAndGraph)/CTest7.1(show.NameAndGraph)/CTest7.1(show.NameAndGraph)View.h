
// CTest7.1(show.NameAndGraph)View.h : CCTest71showNameAndGraphView 类的接口
//

#pragma once


class CCTest71showNameAndGraphView : public CView
{
protected: // 仅从序列化创建
	CCTest71showNameAndGraphView();
	DECLARE_DYNCREATE(CCTest71showNameAndGraphView)

// 特性
public:
	CCTest71showNameAndGraphDoc* GetDocument() const;

// 操作
public:
	int flag1, flag2, flag3;
	POINT p1, p2;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest71showNameAndGraphView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Onshowname();
	afx_msg void Onshowline();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void Onshowrectangle();
	afx_msg void Onshowellipse();
};

#ifndef _DEBUG  // CTest7.1(show.NameAndGraph)View.cpp 中的调试版本
inline CCTest71showNameAndGraphDoc* CCTest71showNameAndGraphView::GetDocument() const
   { return reinterpret_cast<CCTest71showNameAndGraphDoc*>(m_pDocument); }
#endif

