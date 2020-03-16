
// CTest1.2(颜色填充)View.cpp : CCTest12颜色填充View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest1.2(颜色填充).h"
#endif

#include "CTest1.2(颜色填充)Doc.h"
#include "CTest1.2(颜色填充)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest12颜色填充View

IMPLEMENT_DYNCREATE(CCTest12颜色填充View, CView)

BEGIN_MESSAGE_MAP(CCTest12颜色填充View, CView)
END_MESSAGE_MAP()

// CCTest12颜色填充View 构造/析构

CCTest12颜色填充View::CCTest12颜色填充View()
{
	// TODO: 在此处添加构造代码

}

CCTest12颜色填充View::~CCTest12颜色填充View()
{
}

BOOL CCTest12颜色填充View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest12颜色填充View 绘制

void CCTest12颜色填充View::OnDraw(CDC* pDC)
{
	CCTest12颜色填充Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect c;
	GetClientRect(&c);
	CBrush brush(RGB(0,0,0));
	CRgn rgn;  //定义一个区域类
	rgn.CreateEllipticRgn(0,0,c.right,c.bottom);   //根据客户区矩形的坐标绘制一个椭圆
	//CBrush* pOldBrush = pDC->SelectObject(&brush);  //选择新的画刷
	//pDC->SelectObject(pOldBrush);	  //将原来的画刷选回去
	pDC->FillRgn(&rgn,&brush);   //给椭圆填色
	
	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest12颜色填充View 诊断

#ifdef _DEBUG
void CCTest12颜色填充View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest12颜色填充View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest12颜色填充Doc* CCTest12颜色填充View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest12颜色填充Doc)));
	return (CCTest12颜色填充Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest12颜色填充View 消息处理程序
