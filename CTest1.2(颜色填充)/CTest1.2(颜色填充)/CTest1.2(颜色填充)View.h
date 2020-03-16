
// CTest1.2(颜色填充)View.h : CCTest12颜色填充View 类的接口
//

#pragma once


class CCTest12颜色填充View : public CView
{
protected: // 仅从序列化创建
	CCTest12颜色填充View();
	DECLARE_DYNCREATE(CCTest12颜色填充View)

// 特性
public:
	CCTest12颜色填充Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest12颜色填充View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // CTest1.2(颜色填充)View.cpp 中的调试版本
inline CCTest12颜色填充Doc* CCTest12颜色填充View::GetDocument() const
   { return reinterpret_cast<CCTest12颜色填充Doc*>(m_pDocument); }
#endif

