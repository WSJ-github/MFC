
// CTest12.1(ClientShowFilename)View.h : CCTest121ClientShowFilenameView 类的接口
//

#pragma once


class CCTest121ClientShowFilenameView : public CView
{
protected: // 仅从序列化创建
	CCTest121ClientShowFilenameView();
	DECLARE_DYNCREATE(CCTest121ClientShowFilenameView)

// 特性
public:
	CCTest121ClientShowFilenameDoc* GetDocument() const;

// 操作
public:
	CString filename=_T(" ");
	

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest121ClientShowFilenameView();
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
	afx_msg void OnEditshow();
	afx_msg void OnListshow();
};

#ifndef _DEBUG  // CTest12.1(ClientShowFilename)View.cpp 中的调试版本
inline CCTest121ClientShowFilenameDoc* CCTest121ClientShowFilenameView::GetDocument() const
   { return reinterpret_cast<CCTest121ClientShowFilenameDoc*>(m_pDocument); }
#endif

