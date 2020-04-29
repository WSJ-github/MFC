
// CTest14.2(readPictureAndShow)View.h : CCTest142readPictureAndShowView 类的接口
//

#pragma once


class CCTest142readPictureAndShowView : public CView
{
protected: // 仅从序列化创建
	CCTest142readPictureAndShowView();
	DECLARE_DYNCREATE(CCTest142readPictureAndShowView)

// 特性
public:
	CCTest142readPictureAndShowDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest142readPictureAndShowView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnSelectpic();
	afx_msg void OnShowpic();
};

#ifndef _DEBUG  // CTest14.2(readPictureAndShow)View.cpp 中的调试版本
inline CCTest142readPictureAndShowDoc* CCTest142readPictureAndShowView::GetDocument() const
   { return reinterpret_cast<CCTest142readPictureAndShowDoc*>(m_pDocument); }
#endif

