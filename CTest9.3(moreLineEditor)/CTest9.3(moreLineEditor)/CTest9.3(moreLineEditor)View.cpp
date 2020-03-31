
// CTest9.3(moreLineEditor)View.cpp : CCTest93moreLineEditorView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest9.3(moreLineEditor).h"
#endif

#include "CTest9.3(moreLineEditor)Doc.h"
#include "CTest9.3(moreLineEditor)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest93moreLineEditorView

IMPLEMENT_DYNCREATE(CCTest93moreLineEditorView, CView)

BEGIN_MESSAGE_MAP(CCTest93moreLineEditorView, CView)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CCTest93moreLineEditorView 构造/析构

CCTest93moreLineEditorView::CCTest93moreLineEditorView()
{
	// TODO: 在此处添加构造代码
}

CCTest93moreLineEditorView::~CCTest93moreLineEditorView()
{
}

BOOL CCTest93moreLineEditorView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest93moreLineEditorView 绘制

void CCTest93moreLineEditorView::OnDraw(CDC* pDC)
{
	CCTest93moreLineEditorDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CPen pen(PS_SOLID, 1, RGB(255, 0, 0));
	CPen *p;
	p = pDC->SelectObject(&pen);
	r.SetRect(100, 100, 300, 150);
	pDC->Rectangle(r);
	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest93moreLineEditorView 诊断

#ifdef _DEBUG
void CCTest93moreLineEditorView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest93moreLineEditorView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest93moreLineEditorDoc* CCTest93moreLineEditorView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest93moreLineEditorDoc)));
	return (CCTest93moreLineEditorDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest93moreLineEditorView 消息处理程序


void CCTest93moreLineEditorView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CCHAR a = (CCHAR)nChar;
	CClientDC dc(this);
	s1 = s1 + a;
	CSize textsize = dc.GetTextExtent(s1);
	//s1.Format(_T("%d"), (int)textsize.cy);    //初始字符串的cy为20
	if (textsize.cx<195)
		dc.TextOutW(101, y, s1);
	else if (textsize.cx >= 195&&cy<40)
	{
		s1 = "";
		y = y + 20;
		dc.TextOutW(101, y, s1);
		cy =cy + 20;
	}
	CView::OnChar(nChar, nRepCnt, nFlags);
}
