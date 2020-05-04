
// CTest16(DynamicAndStaticLinkLibraries)View.h : CCTest16DynamicAndStaticLinkLibrariesView 类的接口
//

#pragma once


class CCTest16DynamicAndStaticLinkLibrariesView : public CView
{
protected: // 仅从序列化创建
	CCTest16DynamicAndStaticLinkLibrariesView();
	DECLARE_DYNCREATE(CCTest16DynamicAndStaticLinkLibrariesView)

// 特性
public:
	CCTest16DynamicAndStaticLinkLibrariesDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest16DynamicAndStaticLinkLibrariesView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // CTest16(DynamicAndStaticLinkLibraries)View.cpp 中的调试版本
inline CCTest16DynamicAndStaticLinkLibrariesDoc* CCTest16DynamicAndStaticLinkLibrariesView::GetDocument() const
   { return reinterpret_cast<CCTest16DynamicAndStaticLinkLibrariesDoc*>(m_pDocument); }
#endif

