
// CTest2.3View.cpp : CCTest23View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest2.3.h"
#endif

#include "CTest2.3Doc.h"
#include "CTest2.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest23View

IMPLEMENT_DYNCREATE(CCTest23View, CView)

BEGIN_MESSAGE_MAP(CCTest23View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest23View 构造/析构

CCTest23View::CCTest23View()
{
	// TODO: 在此处添加构造代码

}

CCTest23View::~CCTest23View()
{
}

BOOL CCTest23View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest23View 绘制

void CCTest23View::OnDraw(CDC* /*pDC*/)
{
	CCTest23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest23View 诊断

#ifdef _DEBUG
void CCTest23View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest23View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest23Doc* CCTest23View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest23Doc)));
	return (CCTest23Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest23View 消息处理程序


void CCTest23View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CCTest23Doc* pDoc = GetDocument();
	pDoc->count= pDoc->count+1;
	CView::OnLButtonDown(nFlags, point);
}


void CCTest23View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	CView::OnLButtonUp(nFlags, point);
}


void CCTest23View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CCTest23Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s;
	s.Format(_T("count=%d"), pDoc->count);
	dc.TextOutW(200, 200, s);
	//Invalidate();
	CView::OnRButtonDown(nFlags, point);
}
