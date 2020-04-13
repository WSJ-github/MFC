
// CTest11.1(catchRect)View.cpp : CCTest111catchRectView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest11.1(catchRect).h"
#endif

#include "CTest11.1(catchRect)Doc.h"
#include "CTest11.1(catchRect)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest111catchRectView

IMPLEMENT_DYNCREATE(CCTest111catchRectView, CView)

BEGIN_MESSAGE_MAP(CCTest111catchRectView, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CCTest111catchRectView 构造/析构

CCTest111catchRectView::CCTest111catchRectView()
{
	// TODO: 在此处添加构造代码
	p.SetPoint(150, 150);
	r.SetRect(p.x - 50, p.y - 50, p.x + 50, p.y + 50);
}

CCTest111catchRectView::~CCTest111catchRectView()
{
}

BOOL CCTest111catchRectView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest111catchRectView 绘制

void CCTest111catchRectView::OnDraw(CDC* pDC)
{
	CCTest111catchRectDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CBrush brush(RGB(114,200,134));
	pDC->FillRect(&r, &brush);
	//pDC->Rectangle(r);
	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest111catchRectView 诊断

#ifdef _DEBUG
void CCTest111catchRectView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest111catchRectView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest111catchRectDoc* CCTest111catchRectView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest111catchRectDoc)));
	return (CCTest111catchRectDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest111catchRectView 消息处理程序


void CCTest111catchRectView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	p = point;
	if (flag == 1)
	{
		r.SetRect(p.x - 50, p.y - 50, p.x + 50, p.y + 50);
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}


void CCTest111catchRectView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if(point.x>p.x-50&&point.x<p.x+50&&point.y>p.y-50&&point.y<p.y+50)
	   flag = 1;
	CView::OnLButtonDown(nFlags, point);
}


void CCTest111catchRectView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag = 0;
	CView::OnLButtonUp(nFlags, point);
}
