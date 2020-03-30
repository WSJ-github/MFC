
// CTest8.1(showJPG)View.h : CCTest81showJPGView 类的接口
//

#pragma once


class CCTest81showJPGView : public CView
{
protected: // 仅从序列化创建
	CCTest81showJPGView();
	DECLARE_DYNCREATE(CCTest81showJPGView)

// 特性
public:
	CCTest81showJPGDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest81showJPGView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // CTest8.1(showJPG)View.cpp 中的调试版本
inline CCTest81showJPGDoc* CCTest81showJPGView::GetDocument() const
   { return reinterpret_cast<CCTest81showJPGDoc*>(m_pDocument); }
#endif

