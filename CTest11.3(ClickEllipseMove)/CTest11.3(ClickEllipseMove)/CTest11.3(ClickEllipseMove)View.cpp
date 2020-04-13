
// CTest11.3(ClickEllipseMove)View.cpp : CCTest113ClickEllipseMoveView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest11.3(ClickEllipseMove).h"
#endif

#include "CTest11.3(ClickEllipseMove)Doc.h"
#include "CTest11.3(ClickEllipseMove)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest113ClickEllipseMoveView

IMPLEMENT_DYNCREATE(CCTest113ClickEllipseMoveView, CView)

BEGIN_MESSAGE_MAP(CCTest113ClickEllipseMoveView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_TIMER()
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CCTest113ClickEllipseMoveView 构造/析构

CCTest113ClickEllipseMoveView::CCTest113ClickEllipseMoveView()
{
	// TODO: 在此处添加构造代码
	r.SetRect(100,300,150,350);
}

CCTest113ClickEllipseMoveView::~CCTest113ClickEllipseMoveView()
{
}

BOOL CCTest113ClickEllipseMoveView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest113ClickEllipseMoveView 绘制

void CCTest113ClickEllipseMoveView::OnDraw(CDC* pDC)
{
	CCTest113ClickEllipseMoveDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (set == 1)
	{
		SetTimer(1, 50, NULL);
		set = 0;
		this->GetClientRect(&clientRect);
	}
	CRgn rgn;
	rgn.CreateEllipticRgn(r.left,r.top,r.right,r.bottom);
	CBrush brush(RGB(100,100,100));
	pDC->FillRgn(&rgn,&brush);
	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest113ClickEllipseMoveView 诊断

#ifdef _DEBUG
void CCTest113ClickEllipseMoveView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest113ClickEllipseMoveView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest113ClickEllipseMoveDoc* CCTest113ClickEllipseMoveView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest113ClickEllipseMoveDoc)));
	return (CCTest113ClickEllipseMoveDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest113ClickEllipseMoveView 消息处理程序


void CCTest113ClickEllipseMoveView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag = 1;
	CView::OnLButtonDown(nFlags, point);
}


void CCTest113ClickEllipseMoveView::OnTimer(UINT_PTR nIDEvent)
{
	int i = nIDEvent;
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (flag == 1)
	{
		if (r.right >=clientRect.right)
		{
			control = 2;   //2代表向左运动
		}
		if (r.left <= clientRect.left)
		{
			control = 1;  //1代表向右运动
		}
		if (control == 1)
		{
			r.left += 10;
			r.right += 10;
			Invalidate();
		}
		if (control == 2)
		{
			r.left -= 10;
			r.right -= 10;
			Invalidate();
		}
	}
	CView::OnTimer(nIDEvent);
}


void CCTest113ClickEllipseMoveView::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag = 0;
	CView::OnLButtonDblClk(nFlags, point);
}
