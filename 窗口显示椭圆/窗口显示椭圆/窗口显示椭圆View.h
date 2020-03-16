
// 窗口显示椭圆View.h : C窗口显示椭圆View 类的接口
//

#pragma once


class C窗口显示椭圆View : public CView
{
protected: // 仅从序列化创建
	C窗口显示椭圆View();
	DECLARE_DYNCREATE(C窗口显示椭圆View)

// 特性
public:
	C窗口显示椭圆Doc* GetDocument() const;

// 操作
public:
	CRect cr;
	//CArray<CRect, CRect&> c;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C窗口显示椭圆View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 窗口显示椭圆View.cpp 中的调试版本
inline C窗口显示椭圆Doc* C窗口显示椭圆View::GetDocument() const
   { return reinterpret_cast<C窗口显示椭圆Doc*>(m_pDocument); }
#endif

