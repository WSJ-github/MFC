
// CTest10.1(showDialogOut)View.h : CCTest101showDialogOutView 类的接口
//

#pragma once


class CCTest101showDialogOutView : public CView
{
protected: // 仅从序列化创建
	CCTest101showDialogOutView();
	DECLARE_DYNCREATE(CCTest101showDialogOutView)

// 特性
public:
	CCTest101showDialogOutDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest101showDialogOutView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // CTest10.1(showDialogOut)View.cpp 中的调试版本
inline CCTest101showDialogOutDoc* CCTest101showDialogOutView::GetDocument() const
   { return reinterpret_cast<CCTest101showDialogOutDoc*>(m_pDocument); }
#endif

