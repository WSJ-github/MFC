
// CTest4.1View.cpp : CCTest41View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest4.1.h"
#endif

#include "CTest4.1Doc.h"
#include "CTest4.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest41View

IMPLEMENT_DYNCREATE(CCTest41View, CView)

BEGIN_MESSAGE_MAP(CCTest41View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CCTest41View 构造/析构

CCTest41View::CCTest41View()
{
	// TODO: 在此处添加构造代码

}

CCTest41View::~CCTest41View()
{
}

BOOL CCTest41View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest41View 绘制

void CCTest41View::OnDraw(CDC* /*pDC*/)
{
	CCTest41Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest41View 诊断

#ifdef _DEBUG
void CCTest41View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest41View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest41Doc* CCTest41View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest41Doc)));
	return (CCTest41Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest41View 消息处理程序


void CCTest41View::OnLButtonDown(UINT nFlags, CPoint point)
{
	CClientDC dc(this);
	CString s;
	s = "鼠标左键正在被按下";
	dc.TextOutW(200, 300, s);

	CView::OnLButtonDown(nFlags, point);
}


void CCTest41View::OnLButtonUp(UINT nFlags, CPoint point)
{
	CClientDC dc(this);
	CString s;
	s = "鼠标左键正在被抬起";
	dc.TextOutW(200, 300, s);
	s = "";
	dc.TextOutW(200, 300, s);

	CView::OnLButtonUp(nFlags, point);
}
