
// CTest7.1(show.NameAndGraph)View.cpp : CCTest71showNameAndGraphView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest7.1(show.NameAndGraph).h"
#endif

#include "CTest7.1(show.NameAndGraph)Doc.h"
#include "CTest7.1(show.NameAndGraph)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest71showNameAndGraphView

IMPLEMENT_DYNCREATE(CCTest71showNameAndGraphView, CView)

BEGIN_MESSAGE_MAP(CCTest71showNameAndGraphView, CView)
	ON_COMMAND(ID_showName, &CCTest71showNameAndGraphView::Onshowname)
	ON_COMMAND(ID_showLine, &CCTest71showNameAndGraphView::Onshowline)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_COMMAND(ID_showRectangle, &CCTest71showNameAndGraphView::Onshowrectangle)
	ON_COMMAND(ID_showEllipse, &CCTest71showNameAndGraphView::Onshowellipse)
END_MESSAGE_MAP()

// CCTest71showNameAndGraphView 构造/析构

CCTest71showNameAndGraphView::CCTest71showNameAndGraphView()
{
	// TODO: 在此处添加构造代码

}

CCTest71showNameAndGraphView::~CCTest71showNameAndGraphView()
{
	flag1 = 0;
	flag2 = 0;
	flag3 = 0;
}

BOOL CCTest71showNameAndGraphView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest71showNameAndGraphView 绘制

void CCTest71showNameAndGraphView::OnDraw(CDC* pDC)
{
	CCTest71showNameAndGraphDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;


	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest71showNameAndGraphView 诊断

#ifdef _DEBUG
void CCTest71showNameAndGraphView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest71showNameAndGraphView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest71showNameAndGraphDoc* CCTest71showNameAndGraphView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest71showNameAndGraphDoc)));
	return (CCTest71showNameAndGraphDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest71showNameAndGraphView 消息处理程序


void CCTest71showNameAndGraphView::Onshowname()
{
	CClientDC dc(this);
	CString s = _T("吴世杰");
	dc.TextOutW(200,200,s);
	// TODO: 在此添加命令处理程序代码
}


void CCTest71showNameAndGraphView::Onshowline()
{
	flag1 = 1;
	flag2 = 0;
	flag3 = 0;
	// TODO: 在此添加命令处理程序代码
}


void CCTest71showNameAndGraphView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (flag1 == 1||flag2==1||flag3==1)
	{
		p1 = point;
	}
	CView::OnLButtonDown(nFlags, point);
}


void CCTest71showNameAndGraphView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	if (flag1 == 1)
	{
		p2 = point;
		dc.MoveTo(p1);
		dc.LineTo(p2);
	}
	if (flag2 == 1)
	{
		p2 = point;
		CRect r;
		r.SetRect(p1,p2);
		dc.Rectangle(r);
	}
	if (flag3 == 1)
	{
		p2 = point;
		CRect r;
		r.SetRect(p1, p2);
		dc.Ellipse(r);
	}
	CView::OnLButtonUp(nFlags, point);
}


void CCTest71showNameAndGraphView::Onshowrectangle()
{
	flag2 = 1;
	flag1 = 0;
	flag3 = 0;
	// TODO: 在此添加命令处理程序代码
}


void CCTest71showNameAndGraphView::Onshowellipse()
{
	flag3 = 1;
	flag1 = 0;
	flag2 = 0;

	// TODO: 在此添加命令处理程序代码
}
