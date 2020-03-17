
// CTest5.2(control rect)View.cpp : CCTest52controlrectView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest5.2(control rect).h"
#endif

#include "CTest5.2(control rect)Doc.h"
#include "CTest5.2(control rect)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest52controlrectView

IMPLEMENT_DYNCREATE(CCTest52controlrectView, CView)

BEGIN_MESSAGE_MAP(CCTest52controlrectView, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest52controlrectView 构造/析构

CCTest52controlrectView::CCTest52controlrectView()
{
	// TODO: 在此处添加构造代码
	r.SetRect(200, 200, 300, 300);
}

CCTest52controlrectView::~CCTest52controlrectView()
{
}

BOOL CCTest52controlrectView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest52controlrectView 绘制

void CCTest52controlrectView::OnDraw(CDC* pDC)
{
	CCTest52controlrectDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(r);
	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest52controlrectView 诊断

#ifdef _DEBUG
void CCTest52controlrectView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest52controlrectView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest52controlrectDoc* CCTest52controlrectView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest52controlrectDoc)));
	return (CCTest52controlrectDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest52controlrectView 消息处理程序


void CCTest52controlrectView::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CRect clientrect;
	GetClientRect(&clientrect);
	switch (nChar)
	{
	case VK_LEFT:
		if (r.left > 0)
		{
			r.left -= 5;
			r.right -= 5;
		}
		break;
	case VK_RIGHT:
		if (r.right<=clientrect.right)
		{
			r.left += 5;
			r.right += 5;
		}
		break;
	case VK_UP:
		if (r.top >= clientrect.top)
		{
			r.top -= 5;
			r.bottom -= 5;
		}
		break;
	case VK_DOWN:
		if (r.bottom <= clientrect.bottom)
		{
			r.top += 5;
			r.bottom += 5;
		}
		break;
	case VK_HOME:
		if (r.top >= clientrect.top&&r.left > 0)
		{
			r.top -= 5;
			r.left -= 5;
		}
		break;
	case VK_END:
		if (r.bottom <= clientrect.bottom&&r.right <= clientrect.right)
		{
			r.bottom += 5;
			r.right += 5;
		}
		break;
	}
	
	Invalidate();
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CCTest52controlrectView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	r.SetRect(200, 200, 300, 300);
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
