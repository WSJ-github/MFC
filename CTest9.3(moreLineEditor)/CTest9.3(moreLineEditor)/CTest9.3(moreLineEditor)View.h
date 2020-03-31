
// CTest9.3(moreLineEditor)View.h : CCTest93moreLineEditorView 类的接口
//

#pragma once


class CCTest93moreLineEditorView : public CView
{
protected: // 仅从序列化创建
	CCTest93moreLineEditorView();
	DECLARE_DYNCREATE(CCTest93moreLineEditorView)

// 特性
public:
	CCTest93moreLineEditorDoc* GetDocument() const;

// 操作
public:
	CRect r;
	CString s1;
	int y=105;
	int cy = 20;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CCTest93moreLineEditorView();
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

#ifndef _DEBUG  // CTest9.3(moreLineEditor)View.cpp 中的调试版本
inline CCTest93moreLineEditorDoc* CCTest93moreLineEditorView::GetDocument() const
   { return reinterpret_cast<CCTest93moreLineEditorDoc*>(m_pDocument); }
#endif

