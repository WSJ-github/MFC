
// CTest7.2(showBitmap)View.h : CCTest72showBitmapView 类的接口
//

#pragma once


class CCTest72showBitmapView : public CView
{
protected: // 仅从序列化创建
	CCTest72showBitmapView();
	DECLARE_DYNCREATE(CCTest72showBitmapView)

// 特性
public:
	CCTest72showBitmapDoc* GetDocument() const;

// 操作
public:
	CBitmap bitmap;
	int width;
	int heigth;
	BITMAP BM;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest72showBitmapView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // CTest7.2(showBitmap)View.cpp 中的调试版本
inline CCTest72showBitmapDoc* CCTest72showBitmapView::GetDocument() const
   { return reinterpret_cast<CCTest72showBitmapDoc*>(m_pDocument); }
#endif

