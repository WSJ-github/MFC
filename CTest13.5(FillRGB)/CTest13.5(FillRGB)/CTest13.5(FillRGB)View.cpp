
// CTest13.5(FillRGB)View.cpp : CCTest135FillRGBView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest13.5(FillRGB).h"
#include"RGBdialog.h"
#endif

#include "CTest13.5(FillRGB)Doc.h"
#include "CTest13.5(FillRGB)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest135FillRGBView

IMPLEMENT_DYNCREATE(CCTest135FillRGBView, CView)

BEGIN_MESSAGE_MAP(CCTest135FillRGBView, CView)
	ON_COMMAND(ID_32771, &CCTest135FillRGBView::On32771)
END_MESSAGE_MAP()

// CCTest135FillRGBView 构造/析构

CCTest135FillRGBView::CCTest135FillRGBView()
{
	// TODO: 在此处添加构造代码
	r1 = 255;
	r2 = 255;
	r3 = 255;
}

CCTest135FillRGBView::~CCTest135FillRGBView()
{
}

BOOL CCTest135FillRGBView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest135FillRGBView 绘制

void CCTest135FillRGBView::OnDraw(CDC* pDC)
{
	CCTest135FillRGBDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect rect(100, 100, 300, 200);
	pDC->Ellipse(rect);
	CBrush brush(RGB(r1, r2, r3));
	CRgn rgn;
	rgn.CreateEllipticRgn(100, 100, 300, 200);
	pDC->FillRgn(&rgn, &brush);
	
	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest135FillRGBView 诊断

#ifdef _DEBUG
void CCTest135FillRGBView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest135FillRGBView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest135FillRGBDoc* CCTest135FillRGBView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest135FillRGBDoc)));
	return (CCTest135FillRGBDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest135FillRGBView 消息处理程序


void CCTest135FillRGBView::On32771()
{
	RGBdialog log;
	int flag=log.DoModal();
	if (flag == IDOK)
	{
		r1 = log.r1;
		r2 = log.r2;
		r3 = log.r3;
		Invalidate();
		//CClientDC dc(this);
		//dc.FillRgn(&rgn, &brush);
	}
	// TODO: 在此添加命令处理程序代码
}
