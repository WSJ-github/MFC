
// CTest9.2(insertChar)View.cpp : CCTest92insertCharView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest9.2(insertChar).h"
#endif

#include "CTest9.2(insertChar)Doc.h"
#include "CTest9.2(insertChar)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest92insertCharView

IMPLEMENT_DYNCREATE(CCTest92insertCharView, CView)

BEGIN_MESSAGE_MAP(CCTest92insertCharView, CView)
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest92insertCharView 构造/析构

CCTest92insertCharView::CCTest92insertCharView()
{
	// TODO: 在此处添加构造代	s1 = "asgdvasad";
}

CCTest92insertCharView::~CCTest92insertCharView()
{
}

BOOL CCTest92insertCharView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest92insertCharView 绘制

void CCTest92insertCharView::OnDraw(CDC* pDC)
{
	CCTest92insertCharDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CPen pen(PS_SOLID, 1, RGB(255, 0, 0));
	CPen *p;
	p = pDC->SelectObject(&pen);
	r.SetRect(100, 100, 300, 130);
	s1 = "asgdvasad";
	pDC->Rectangle(r);
	pDC->TextOutW(101, 105, s1);
	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest92insertCharView 诊断

#ifdef _DEBUG
void CCTest92insertCharView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest92insertCharView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest92insertCharDoc* CCTest92insertCharView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest92insertCharDoc)));
	return (CCTest92insertCharDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest92insertCharView 消息处理程序


void CCTest92insertCharView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CCHAR a = (CCHAR)nChar;
	CClientDC dc(this);
	if (p.x > 100 && p.x < 300 && p.y>100 && p.y < 130)
	{
		int x = p.x - 100;   
		CSize textsize = dc.GetTextExtent(s1);
		int pointSize = textsize.cx / s1.GetLength();
		int index = x / pointSize;
		if (textsize.cx < 200) {
			s1.Insert(index, a);
			dc.TextOutW(101, 105, s1);
		}
	}
	CView::OnChar(nChar, nRepCnt, nFlags);
}


void CCTest92insertCharView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	p = point;
	CView::OnLButtonDown(nFlags, point);
}
