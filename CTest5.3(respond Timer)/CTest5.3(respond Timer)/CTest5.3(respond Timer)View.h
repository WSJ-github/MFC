
// CTest5.3(respond Timer)View.h : CCTest53respondTimerView 类的接口
//

#pragma once


class CCTest53respondTimerView : public CView
{
protected: // 仅从序列化创建
	CCTest53respondTimerView();
	DECLARE_DYNCREATE(CCTest53respondTimerView)

// 特性
public:
	CCTest53respondTimerDoc* GetDocument() const;

// 操作
public:
	CRect r;
	int set; //开关
	int flag;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest53respondTimerView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // CTest5.3(respond Timer)View.cpp 中的调试版本
inline CCTest53respondTimerDoc* CCTest53respondTimerView::GetDocument() const
   { return reinterpret_cast<CCTest53respondTimerDoc*>(m_pDocument); }
#endif

