
// 窗口显示椭圆View.cpp : C窗口显示椭圆View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "窗口显示椭圆.h"
#endif

#include "窗口显示椭圆Doc.h"
#include "窗口显示椭圆View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C窗口显示椭圆View

IMPLEMENT_DYNCREATE(C窗口显示椭圆View, CView)

BEGIN_MESSAGE_MAP(C窗口显示椭圆View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C窗口显示椭圆View 构造/析构

C窗口显示椭圆View::C窗口显示椭圆View()
{
	//c.SetSize(256);

}

C窗口显示椭圆View::~C窗口显示椭圆View()
{
}

BOOL C窗口显示椭圆View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C窗口显示椭圆View 绘制

void C窗口显示椭圆View::OnDraw(CDC* pDC)
{
	C窗口显示椭圆Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	//pDC->Ellipse(cr);
	for (int i=0; i < pDoc->c.GetSize(); i++)
		pDC->Ellipse(pDoc->c.GetAt(i));
	// TODO: 在此处为本机数据添加绘制代码
}


// C窗口显示椭圆View 诊断

#ifdef _DEBUG
void C窗口显示椭圆View::AssertValid() const
{
	CView::AssertValid();
}

void C窗口显示椭圆View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C窗口显示椭圆Doc* C窗口显示椭圆View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C窗口显示椭圆Doc)));
	return (C窗口显示椭圆Doc*)m_pDocument;
}
#endif //_DEBUG


// C窗口显示椭圆View 消息处理程序


void C窗口显示椭圆View::OnLButtonDown(UINT nFlags, CPoint point)
{
	CRect vr;
	//this->GetClientRect(&cr);
	//this->Invalidate();
	int r1 = rand() % 50 + 5;   //长轴的随机数
	int r2 = rand() % 50 + 5;   //短轴的随机数
	C窗口显示椭圆Doc* pDoc = GetDocument();
	vr.SetRect(point.x - r1, point.y + r2, point.x + r1, point.y - r2);
	pDoc->c.Add(vr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
