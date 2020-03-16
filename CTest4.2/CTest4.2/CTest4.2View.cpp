
// CTest4.2View.cpp : CCTest42View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest4.2.h"
#endif

#include "CTest4.2Doc.h"
#include "CTest4.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest42View

IMPLEMENT_DYNCREATE(CCTest42View, CView)

BEGIN_MESSAGE_MAP(CCTest42View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest42View 构造/析构

CCTest42View::CCTest42View()
{
	// TODO: 在此处添加构造代码

}

CCTest42View::~CCTest42View()
{
}

BOOL CCTest42View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest42View 绘制

void CCTest42View::OnDraw(CDC* /*pDC*/)
{
	CCTest42Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest42View 诊断

#ifdef _DEBUG
void CCTest42View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest42View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest42Doc* CCTest42View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest42Doc)));
	return (CCTest42Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest42View 消息处理程序


void CCTest42View::OnLButtonDown(UINT nFlags, CPoint point)
{
	CCTest42Doc* pDoc = GetDocument();
	CString s1, s2, s3;
	int C = pDoc->A + pDoc->B;
	s1.Format(_T("%d"), pDoc->A);
	s2.Format(_T("%d"), pDoc->B);
	s3.Format(_T("%d"), C);
	CClientDC dc(this);
	dc.TextOutW(200, 300, s1 + "+" + s2 + "=" + s3);

	CView::OnLButtonDown(nFlags, point);
}
