
// CTest1.1(画随机园)View.cpp : CCTest11画随机园View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest1.1(画随机园).h"
#endif

#include "CTest1.1(画随机园)Doc.h"
#include "CTest1.1(画随机园)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest11画随机园View

IMPLEMENT_DYNCREATE(CCTest11画随机园View, CView)

BEGIN_MESSAGE_MAP(CCTest11画随机园View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest11画随机园View 构造/析构

CCTest11画随机园View::CCTest11画随机园View()
{
	// TODO: 在此处添加构造代码

}

CCTest11画随机园View::~CCTest11画随机园View()
{
}

BOOL CCTest11画随机园View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest11画随机园View 绘制

void CCTest11画随机园View::OnDraw(CDC* pDC)
{
	CCTest11画随机园Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	for (int i = 0; i < pDoc->c.GetSize(); i++)
	{
		pDC->Ellipse(pDoc->c.GetAt(i));
	}
	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest11画随机园View 诊断

#ifdef _DEBUG
void CCTest11画随机园View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest11画随机园View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest11画随机园Doc* CCTest11画随机园View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest11画随机园Doc)));
	return (CCTest11画随机园Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest11画随机园View 消息处理程序


void CCTest11画随机园View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CCTest11画随机园Doc* pDoc = GetDocument();
	int a = rand() % 100 + 5;
	CRect r1;
	r1.SetRect(point.x - a, point.y - a, point.x + a, point.y + a);
	pDoc->c.Add(r1);
	Invalidate();

	CView::OnLButtonDown(nFlags, point);
}
