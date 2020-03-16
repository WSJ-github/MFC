
// CTest2.1(显示名字)View.h : CCTest21显示名字View 类的接口
//

#pragma once


class CCTest21显示名字View : public CView
{
protected: // 仅从序列化创建
	CCTest21显示名字View();
	DECLARE_DYNCREATE(CCTest21显示名字View)

// 特性
public:
	CCTest21显示名字Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest21显示名字View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // CTest2.1(显示名字)View.cpp 中的调试版本
inline CCTest21显示名字Doc* CCTest21显示名字View::GetDocument() const
   { return reinterpret_cast<CCTest21显示名字Doc*>(m_pDocument); }
#endif

