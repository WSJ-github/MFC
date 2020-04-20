
// CTest13.4(dotLineOnEllipse)View.cpp : CCTest134dotLineOnEllipseView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest13.4(dotLineOnEllipse).h"
#endif

#include "CTest13.4(dotLineOnEllipse)Doc.h"
#include "CTest13.4(dotLineOnEllipse)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest134dotLineOnEllipseView

IMPLEMENT_DYNCREATE(CCTest134dotLineOnEllipseView, CView)

BEGIN_MESSAGE_MAP(CCTest134dotLineOnEllipseView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest134dotLineOnEllipseView 构造/析构

CCTest134dotLineOnEllipseView::CCTest134dotLineOnEllipseView()
{
	// TODO: 在此处添加构造代码
	r1.SetRect(100, 100, 300, 200);
	r2.SetRect(500,100,700,200);
}

CCTest134dotLineOnEllipseView::~CCTest134dotLineOnEllipseView()
{
}

BOOL CCTest134dotLineOnEllipseView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest134dotLineOnEllipseView 绘制

void CCTest134dotLineOnEllipseView::OnDraw(CDC* pDC)
{
	CCTest134dotLineOnEllipseDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CPen pen(PS_SOLID, 1, RGB(0, 0, 0));
	CPen *p;
	p = pDC->SelectObject(&pen);
	pDC->Ellipse(r1);
	pDC->Ellipse(r2);
	if (flag == 1)
	{
		CPen pen(PS_DOT,1, RGB(0, 255, 0));
		CPen *p;
		p = pDC->SelectObject(&pen);
		pDC->MoveTo(r1.left, r1.top);
		pDC->LineTo(r1.left + (r1.right - r1.left), r1.top);
		pDC->MoveTo(r1.left + (r1.right - r1.left), r1.top);
		pDC->LineTo(r1.right, r1.bottom);
		pDC->MoveTo(r1.right, r1.bottom);
		pDC->LineTo(r1.left, r1.top + (r1.bottom - r1.top));
		pDC->MoveTo(r1.left, r1.top + (r1.bottom - r1.top));
		pDC->LineTo(r1.left, r1.top);
	}
	if (flag == 2)
	{
		CPen pen(PS_DOT, 1, RGB(0, 255, 0));
		CPen *p;
		p = pDC->SelectObject(&pen);
	
		pDC->MoveTo(r2.left, r2.top);
		pDC->LineTo(r2.left + (r2.right - r2.left), r2.top);
		pDC->MoveTo(r2.left + (r2.right - r2.left), r2.top);
		pDC->LineTo(r2.right, r2.bottom);
		pDC->MoveTo(r2.right, r2.bottom);
		pDC->LineTo(r2.left, r2.top + (r2.bottom - r2.top));
		pDC->MoveTo(r2.left, r2.top + (r2.bottom - r2.top));
		pDC->LineTo(r2.left, r2.top);
		
	}
	flag = 0;
	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest134dotLineOnEllipseView 诊断

#ifdef _DEBUG
void CCTest134dotLineOnEllipseView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest134dotLineOnEllipseView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest134dotLineOnEllipseDoc* CCTest134dotLineOnEllipseView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest134dotLineOnEllipseDoc)));
	return (CCTest134dotLineOnEllipseDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest134dotLineOnEllipseView 消息处理程序


void CCTest134dotLineOnEllipseView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (point.x > r1.left&&point.x<r1.right&&point.y>r1.top&&point.y < r1.bottom)
	{
		flag = 1;
		Invalidate();
	}
	if (point.x > r2.left&&point.x<r2.right&&point.y>r2.top&&point.y < r2.bottom)
	{
		flag = 2;
		Invalidate();
	}
	CView::OnLButtonDown(nFlags, point);
}
