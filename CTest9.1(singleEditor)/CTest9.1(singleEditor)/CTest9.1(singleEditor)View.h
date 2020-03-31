
// CTest9.1(singleEditor)View.h : CCTest91singleEditorView 类的接口
//

#pragma once


class CCTest91singleEditorView : public CView
{
protected: // 仅从序列化创建
	CCTest91singleEditorView();
	DECLARE_DYNCREATE(CCTest91singleEditorView)

// 特性
public:
	CCTest91singleEditorDoc* GetDocument() const;

// 操作
public:
	CRect r;
	CString s1;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest91singleEditorView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // CTest9.1(singleEditor)View.cpp 中的调试版本
inline CCTest91singleEditorDoc* CCTest91singleEditorView::GetDocument() const
   { return reinterpret_cast<CCTest91singleEditorDoc*>(m_pDocument); }
#endif

