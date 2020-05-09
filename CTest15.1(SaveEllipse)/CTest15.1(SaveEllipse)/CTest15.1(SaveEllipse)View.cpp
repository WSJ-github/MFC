
// CTest15.1(SaveEllipse)View.cpp : CCTest151SaveEllipseView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest15.1(SaveEllipse).h"
#endif

#include "CTest15.1(SaveEllipse)Doc.h"
#include "CTest15.1(SaveEllipse)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest151SaveEllipseView

IMPLEMENT_DYNCREATE(CCTest151SaveEllipseView, CView)

BEGIN_MESSAGE_MAP(CCTest151SaveEllipseView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CCTest151SaveEllipseView 构造/析构

CCTest151SaveEllipseView::CCTest151SaveEllipseView()
{
	// TODO: 在此处添加构造代码
	flag = false;
}

CCTest151SaveEllipseView::~CCTest151SaveEllipseView()
{
}

BOOL CCTest151SaveEllipseView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest151SaveEllipseView 绘制

void CCTest151SaveEllipseView::OnDraw(CDC* pDC)
{
	CCTest151SaveEllipseDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i<pDoc->ary.GetSize(); i++)
	{
		pDC->Ellipse(pDoc->ary.GetAt(i));
	}
	//CPen pen(PS_SOLID, 5, RGB(rand() % 200 + 1, rand() % 200 + 1, rand() % 200 + 1));
	//CPen *pp;
	//pp = pDC->SelectObject(&pen);
	r.SetRect(p1, p2);
	pDC->Ellipse(r);
	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest151SaveEllipseView 诊断

#ifdef _DEBUG
void CCTest151SaveEllipseView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest151SaveEllipseView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest151SaveEllipseDoc* CCTest151SaveEllipseView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest151SaveEllipseDoc)));
	return (CCTest151SaveEllipseDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest151SaveEllipseView 消息处理程序


void CCTest151SaveEllipseView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag = true;
	p1 = point;
	CView::OnLButtonDown(nFlags, point);
}


void CCTest151SaveEllipseView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (flag == true)
	{
		p2 = point;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}


void CCTest151SaveEllipseView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CCTest151SaveEllipseDoc* pDoc = GetDocument();
	flag = false;
	r.SetRect(p1, p2);
	pDoc->ary.Add(r);
	CView::OnLButtonUp(nFlags, point);
}
