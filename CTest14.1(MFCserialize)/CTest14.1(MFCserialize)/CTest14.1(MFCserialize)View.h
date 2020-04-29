
// CTest14.1(MFCserialize)View.h : CCTest141MFCserializeView 类的接口
//

#pragma once


class CCTest141MFCserializeView : public CView
{
protected: // 仅从序列化创建
	CCTest141MFCserializeView();
	DECLARE_DYNCREATE(CCTest141MFCserializeView)

// 特性
public:
	CCTest141MFCserializeDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest141MFCserializeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnReadfile();
};

#ifndef _DEBUG  // CTest14.1(MFCserialize)View.cpp 中的调试版本
inline CCTest141MFCserializeDoc* CCTest141MFCserializeView::GetDocument() const
   { return reinterpret_cast<CCTest141MFCserializeDoc*>(m_pDocument); }
#endif

