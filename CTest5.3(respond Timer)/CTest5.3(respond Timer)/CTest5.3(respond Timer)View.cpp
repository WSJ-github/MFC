
// CTest5.3(respond Timer)View.cpp : CCTest53respondTimerView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest5.3(respond Timer).h"
#endif

#include "CTest5.3(respond Timer)Doc.h"
#include "CTest5.3(respond Timer)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest53respondTimerView

IMPLEMENT_DYNCREATE(CCTest53respondTimerView, CView)

BEGIN_MESSAGE_MAP(CCTest53respondTimerView, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CCTest53respondTimerView 构造/析构

CCTest53respondTimerView::CCTest53respondTimerView()
{
	// TODO: 在此处添加构造代码
	set = 1;
	flag = 1;
	r.SetRect(100, 0, 200, 100);
}

CCTest53respondTimerView::~CCTest53respondTimerView()
{
}

BOOL CCTest53respondTimerView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest53respondTimerView 绘制

void CCTest53respondTimerView::OnDraw(CDC* pDC)
{
	CCTest53respondTimerDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	pDC->Ellipse(r);
	if (set == 1)
	{
		SetTimer(1, 50, NULL);
		set = 0;
	}
}


// CCTest53respondTimerView 诊断

#ifdef _DEBUG
void CCTest53respondTimerView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest53respondTimerView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest53respondTimerDoc* CCTest53respondTimerView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest53respondTimerDoc)));
	return (CCTest53respondTimerDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest53respondTimerView 消息处理程序


void CCTest53respondTimerView::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CRect clientrect;
	GetClientRect(&clientrect);
	int i = nIDEvent;
	if (r.bottom <= clientrect.bottom&&flag ==1)
	{
		r.top += 5;
		r.bottom += 5;
		if (r.bottom > clientrect.bottom) flag = 0;
	}
	else if (flag==0&&r.top>0)
	{
		r.top -= 5;
		r.bottom -= 5;
		if (r.top <= 0) flag = 1;
	}
	Invalidate();
	CView::OnTimer(nIDEvent);
}
