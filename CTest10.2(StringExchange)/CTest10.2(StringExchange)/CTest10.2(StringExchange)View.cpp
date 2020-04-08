
// CTest10.2(StringExchange)View.cpp : CCTest102StringExchangeView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest10.2(StringExchange).h"
#include"Dialog2.h"
#endif

#include "CTest10.2(StringExchange)Doc.h"
#include "CTest10.2(StringExchange)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest102StringExchangeView

IMPLEMENT_DYNCREATE(CCTest102StringExchangeView, CView)

BEGIN_MESSAGE_MAP(CCTest102StringExchangeView, CView)
	ON_COMMAND(ID_StringExchange, &CCTest102StringExchangeView::OnStringexchange)
END_MESSAGE_MAP()

// CCTest102StringExchangeView 构造/析构

CCTest102StringExchangeView::CCTest102StringExchangeView()
{
	// TODO: 在此处添加构造代码

}

CCTest102StringExchangeView::~CCTest102StringExchangeView()
{
}

BOOL CCTest102StringExchangeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest102StringExchangeView 绘制

void CCTest102StringExchangeView::OnDraw(CDC* /*pDC*/)
{
	CCTest102StringExchangeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest102StringExchangeView 诊断

#ifdef _DEBUG
void CCTest102StringExchangeView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest102StringExchangeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest102StringExchangeDoc* CCTest102StringExchangeView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest102StringExchangeDoc)));
	return (CCTest102StringExchangeDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest102StringExchangeView 消息处理程序


void CCTest102StringExchangeView::OnStringexchange()
{
	Dialog2 *log=new Dialog2;
	log->Create(IDD_DIALOG1);
	log->ShowWindow(1);
	//log->DestroyWindow();
	// TODO: 在此添加命令处理程序代码
}
