
// CTest10.1(showDialogOut)View.cpp : CCTest101showDialogOutView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest10.1(showDialogOut).h"
#include"Dialog1.h"
#endif

#include "CTest10.1(showDialogOut)Doc.h"
#include "CTest10.1(showDialogOut)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest101showDialogOutView

IMPLEMENT_DYNCREATE(CCTest101showDialogOutView, CView)

BEGIN_MESSAGE_MAP(CCTest101showDialogOutView, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CCTest101showDialogOutView 构造/析构

CCTest101showDialogOutView::CCTest101showDialogOutView()
{
	// TODO: 在此处添加构造代码

}

CCTest101showDialogOutView::~CCTest101showDialogOutView()
{
}

BOOL CCTest101showDialogOutView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest101showDialogOutView 绘制

void CCTest101showDialogOutView::OnDraw(CDC* pDC)
{
	CCTest101showDialogOutDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest101showDialogOutView 诊断

#ifdef _DEBUG
void CCTest101showDialogOutView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest101showDialogOutView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest101showDialogOutDoc* CCTest101showDialogOutView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest101showDialogOutDoc)));
	return (CCTest101showDialogOutDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest101showDialogOutView 消息处理程序


void CCTest101showDialogOutView::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Dialog1 log;
	int t=log.DoModal();
	CClientDC dc(this);
	if (t=IDCLOSE)
	{
		CString s = _T("你已退出对话框");
		dc.TextOutW(rand()%500, rand()%500, s);
	}
	CView::OnLButtonDblClk(nFlags, point);
}
