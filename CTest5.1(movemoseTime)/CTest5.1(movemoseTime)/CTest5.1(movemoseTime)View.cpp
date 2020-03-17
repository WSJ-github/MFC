
// CTest5.1(movemoseTime)View.cpp : CCTest51movemoseTimeView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest5.1(movemoseTime).h"
#endif

#include "CTest5.1(movemoseTime)Doc.h"
#include "CTest5.1(movemoseTime)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest51movemoseTimeView

IMPLEMENT_DYNCREATE(CCTest51movemoseTimeView, CView)

BEGIN_MESSAGE_MAP(CCTest51movemoseTimeView, CView)
//	ON_WM_MBUTTONDOWN()
//	ON_WM_MBUTTONUP()
ON_WM_LBUTTONUP()
ON_WM_LBUTTONDOWN()
ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CCTest51movemoseTimeView 构造/析构

CCTest51movemoseTimeView::CCTest51movemoseTimeView()
{
	// TODO: 在此处添加构造代码
	flag = 0;
	time = 0;
	crosswiseTime = 0;  //横向移动多少个像素发生一次mosemove
}

CCTest51movemoseTimeView::~CCTest51movemoseTimeView()
{
}

BOOL CCTest51movemoseTimeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest51movemoseTimeView 绘制

void CCTest51movemoseTimeView::OnDraw(CDC* pDC)
{
	CCTest51movemoseTimeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s;
	s.Format(_T("Time=%d"), time);
	pDC->TextOutW(200,200,s);
	CString t;
	t.Format(_T("横向移动%d个像素点触发一次mosemove"), crosswiseTime);
	pDC->TextOutW(200, 300, t);
	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest51movemoseTimeView 诊断

#ifdef _DEBUG
void CCTest51movemoseTimeView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest51movemoseTimeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest51movemoseTimeDoc* CCTest51movemoseTimeView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest51movemoseTimeDoc)));
	return (CCTest51movemoseTimeDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest51movemoseTimeView 消息处理程序


//void CCTest51movemoseTimeView::OnMButtonDown(UINT nFlags, CPoint point)
//{
//	// TODO: 在此添加消息处理程序代码和/或调用默认值
//
//	CView::OnMButtonDown(nFlags, point);
//}


//void CCTest51movemoseTimeView::OnMButtonUp(UINT nFlags, CPoint point)
//{
//	// TODO: 在此添加消息处理程序代码和/或调用默认值
//
//	CView::OnMButtonUp(nFlags, point);
//}


void CCTest51movemoseTimeView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	p2 = point;
	crosswiseTime=(int)(p2.x-p1.x)/time;
	flag = 0;
	Invalidate();
	CView::OnLButtonUp(nFlags, point);
}


void CCTest51movemoseTimeView::OnLButtonDown(UINT nFlags, CPoint point)
{	// TODO: 在此添加消息处理程序代码和/或调用默认值

	flag = 1;
	time = 0;
	p1 = point;

	//Invalidate();
	CView::OnLButtonDown(nFlags, point);
}


void CCTest51movemoseTimeView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (flag == 1)
	{
		time++;
	}
	CView::OnMouseMove(nFlags, point);
}
