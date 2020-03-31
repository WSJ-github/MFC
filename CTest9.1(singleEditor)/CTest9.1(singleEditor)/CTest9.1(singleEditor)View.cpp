
// CTest9.1(singleEditor)View.cpp : CCTest91singleEditorView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest9.1(singleEditor).h"
#endif

#include "CTest9.1(singleEditor)Doc.h"
#include "CTest9.1(singleEditor)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest91singleEditorView

IMPLEMENT_DYNCREATE(CCTest91singleEditorView, CView)

BEGIN_MESSAGE_MAP(CCTest91singleEditorView, CView)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CCTest91singleEditorView 构造/析构

CCTest91singleEditorView::CCTest91singleEditorView()
{
	// TODO: 在此处添加构造代码

}

CCTest91singleEditorView::~CCTest91singleEditorView()
{
	s1 = "";
}

BOOL CCTest91singleEditorView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest91singleEditorView 绘制

void CCTest91singleEditorView::OnDraw(CDC* pDC)
{
	CCTest91singleEditorDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CPen pen(PS_SOLID, 1, RGB(255, 0, 0));
	CPen *p;
	p = pDC->SelectObject(&pen);
	r.SetRect(100,100,300,130);
	pDC->Rectangle(r);
	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest91singleEditorView 诊断

#ifdef _DEBUG
void CCTest91singleEditorView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest91singleEditorView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest91singleEditorDoc* CCTest91singleEditorView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest91singleEditorDoc)));
	return (CCTest91singleEditorDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest91singleEditorView 消息处理程序


void CCTest91singleEditorView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CCHAR a=(CCHAR)nChar;
	CClientDC dc(this);
	s1 = s1 + a;
	CSize textsize = dc.GetTextExtent(s1);
	if(textsize.cx<200)
	  dc.TextOutW(101, 105, s1);
	

	CView::OnChar(nChar, nRepCnt, nFlags);
}
