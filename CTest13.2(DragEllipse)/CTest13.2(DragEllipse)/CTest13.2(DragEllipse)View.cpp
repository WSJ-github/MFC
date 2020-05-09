
// CTest13.2(DragEllipse)View.cpp : CCTest132DragEllipseView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest13.2(DragEllipse).h"
#endif

#include "CTest13.2(DragEllipse)Doc.h"
#include "CTest13.2(DragEllipse)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest132DragEllipseView

IMPLEMENT_DYNCREATE(CCTest132DragEllipseView, CView)

BEGIN_MESSAGE_MAP(CCTest132DragEllipseView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CCTest132DragEllipseView 构造/析构

CCTest132DragEllipseView::CCTest132DragEllipseView()
{
	// TODO: 在此处添加构造代码
	flag = false;
}

CCTest132DragEllipseView::~CCTest132DragEllipseView()
{
}

BOOL CCTest132DragEllipseView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest132DragEllipseView 绘制

void CCTest132DragEllipseView::OnDraw(CDC* pDC)
{
	CCTest132DragEllipseDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CPen pen(PS_SOLID, 5, RGB(rand() % 200 + 1, rand() % 200 + 1, rand() % 200 + 1));
	CPen *pp;
	pp = pDC->SelectObject(&pen);
	r.SetRect(p1, p2);
	pDC->Ellipse(r);
	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest132DragEllipseView 诊断

#ifdef _DEBUG
void CCTest132DragEllipseView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest132DragEllipseView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest132DragEllipseDoc* CCTest132DragEllipseView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest132DragEllipseDoc)));
	return (CCTest132DragEllipseDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest132DragEllipseView 消息处理程序


void CCTest132DragEllipseView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag = true;
	p1 = point;
	CView::OnLButtonDown(nFlags, point);
}


void CCTest132DragEllipseView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag = false;
	r.SetRect(p1, p2);
	pDoc->
	CView::OnLButtonUp(nFlags, point);
}


void CCTest132DragEllipseView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (flag == true)
	{
		p2 = point;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}
