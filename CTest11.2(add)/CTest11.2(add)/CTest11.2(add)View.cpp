
// CTest11.2(add)View.cpp : CCTest112addView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest11.2(add).h"
#include"addDialog.h"
#endif

#include "CTest11.2(add)Doc.h"
#include "CTest11.2(add)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest112addView

IMPLEMENT_DYNCREATE(CCTest112addView, CView)

BEGIN_MESSAGE_MAP(CCTest112addView, CView)
	ON_COMMAND(ID_CALCULATOR, &CCTest112addView::OnCalculator)
END_MESSAGE_MAP()

// CCTest112addView 构造/析构

CCTest112addView::CCTest112addView()
{
	// TODO: 在此处添加构造代码

}

CCTest112addView::~CCTest112addView()
{
}

BOOL CCTest112addView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest112addView 绘制

void CCTest112addView::OnDraw(CDC* /*pDC*/)
{
	CCTest112addDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest112addView 诊断

#ifdef _DEBUG
void CCTest112addView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest112addView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest112addDoc* CCTest112addView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest112addDoc)));
	return (CCTest112addDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest112addView 消息处理程序


void CCTest112addView::OnCalculator()
{
	addDialog log;
	log.DoModal();
	// TODO: 在此添加命令处理程序代码
}
