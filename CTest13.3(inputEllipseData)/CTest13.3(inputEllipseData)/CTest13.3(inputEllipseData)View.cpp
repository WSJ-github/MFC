
// CTest13.3(inputEllipseData)View.cpp : CCTest133inputEllipseDataView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest13.3(inputEllipseData).h"
#include"dialog1.h"
#endif

#include "CTest13.3(inputEllipseData)Doc.h"
#include "CTest13.3(inputEllipseData)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest133inputEllipseDataView

IMPLEMENT_DYNCREATE(CCTest133inputEllipseDataView, CView)

BEGIN_MESSAGE_MAP(CCTest133inputEllipseDataView, CView)
	ON_COMMAND(ID_Ellipse, &CCTest133inputEllipseDataView::OnEllipse)
END_MESSAGE_MAP()

// CCTest133inputEllipseDataView 构造/析构

CCTest133inputEllipseDataView::CCTest133inputEllipseDataView()
{
	// TODO: 在此处添加构造代码
	r1 = 0;
	r2 = 0;
	r3 = 0;
	r4 = 0;

}

CCTest133inputEllipseDataView::~CCTest133inputEllipseDataView()
{

}

BOOL CCTest133inputEllipseDataView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest133inputEllipseDataView 绘制

void CCTest133inputEllipseDataView::OnDraw(CDC* pDC)
{
	CCTest133inputEllipseDataDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (f == 1)
	{
		CRgn rgn;
		rgn.CreateEllipticRgn(r1,r2,r3,r4);
		CBrush brush(RGB(0, 0, 0));
		pDC->FillRgn(&rgn,&brush);
	}
	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest133inputEllipseDataView 诊断

#ifdef _DEBUG
void CCTest133inputEllipseDataView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest133inputEllipseDataView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest133inputEllipseDataDoc* CCTest133inputEllipseDataView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest133inputEllipseDataDoc)));
	return (CCTest133inputEllipseDataDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest133inputEllipseDataView 消息处理程序


void CCTest133inputEllipseDataView::OnEllipse()
{
	dialog1 log;
	int flag = log.DoModal();
	if (flag == IDOK)
	{
		f = 1;
		r1 = log.r1;
		r2 = log.r2;
		r3 = log.r3;
		r4 = log.r4;
		Invalidate();
	}
	// TODO: 在此添加命令处理程序代码
}
