
// CTest2.1(显示名字)View.cpp : CCTest21显示名字View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest2.1(显示名字).h"
#endif

#include "CTest2.1(显示名字)Doc.h"
#include "CTest2.1(显示名字)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest21显示名字View

IMPLEMENT_DYNCREATE(CCTest21显示名字View, CView)

BEGIN_MESSAGE_MAP(CCTest21显示名字View, CView)
END_MESSAGE_MAP()

// CCTest21显示名字View 构造/析构

CCTest21显示名字View::CCTest21显示名字View()
{
	// TODO: 在此处添加构造代码

}

CCTest21显示名字View::~CCTest21显示名字View()
{
}

BOOL CCTest21显示名字View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest21显示名字View 绘制

void CCTest21显示名字View::OnDraw(CDC* pDC)
{
	CCTest21显示名字Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString A  ;
	A.Format(_T("%d"), pDoc->a);
	pDC->TextOutW(200, 200,pDoc->s);
	pDC->TextOutW(200, 300, A);
	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest21显示名字View 诊断

#ifdef _DEBUG
void CCTest21显示名字View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest21显示名字View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest21显示名字Doc* CCTest21显示名字View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest21显示名字Doc)));
	return (CCTest21显示名字Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest21显示名字View 消息处理程序
