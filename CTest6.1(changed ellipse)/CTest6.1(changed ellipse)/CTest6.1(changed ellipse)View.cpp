
// CTest6.1(changed ellipse)View.cpp : CCTest61changedellipseView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest6.1(changed ellipse).h"
#endif

#include "CTest6.1(changed ellipse)Doc.h"
#include "CTest6.1(changed ellipse)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest61changedellipseView

IMPLEMENT_DYNCREATE(CCTest61changedellipseView, CView)

BEGIN_MESSAGE_MAP(CCTest61changedellipseView, CView)
	ON_COMMAND(ID_CIRCULAR1, &CCTest61changedellipseView::OnCircular1)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CCTest61changedellipseView 构造/析构

CCTest61changedellipseView::CCTest61changedellipseView()
{
	// TODO: 在此处添加构造代码
	/*GetClientRect(&clientrect);   //不能放在构造函数里面
	//centerx = (clientrect.right) /2;
	//centery =(clientrect.bottom) / 2;
	center = clientrect.CenterPoint();
	r.SetRect((center.x - 100), (center.y - 100),( center.x + 100), (center.y + 100));*/
	set = true;
	flag = 0;
}

CCTest61changedellipseView::~CCTest61changedellipseView()
{
}

BOOL CCTest61changedellipseView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest61changedellipseView 绘制

void CCTest61changedellipseView::OnDraw(CDC* pDC)
{
	CCTest61changedellipseDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (flag == 1) {
		if (set)
		{
			GetClientRect(&clientrect);
			center = clientrect.CenterPoint();
			r.SetRect((center.x - 100), (center.y - 100), (center.x + 100), (center.y + 100));
			SetTimer(1, 50, NULL);
			set = false;
		}
		CPen pen(PS_SOLID, 5, RGB(rand() % 255, rand() % 255, rand() % 255));
		CPen *p;
		p = pDC->SelectObject(&pen);
		pDC->Ellipse(r);
	}
	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest61changedellipseView 诊断

#ifdef _DEBUG
void CCTest61changedellipseView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest61changedellipseView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest61changedellipseDoc* CCTest61changedellipseView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest61changedellipseDoc)));
	return (CCTest61changedellipseDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest61changedellipseView 消息处理程序


void CCTest61changedellipseView::OnCircular1()
{
	// 这个是菜单中渐变大小园的程序
	flag = 1;
	Invalidate();
	set = true;
}


void CCTest61changedellipseView::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int i = nIDEvent;
	CClientDC dc(this);
	if (r.bottom <= clientrect.bottom&&r.left>=0)
	{
		r.top -= 10;
		r.left -= 10;
		r.bottom += 10;
		r.right += 10;
		/*CPen pen(PS_SOLID, 5, RGB(rand() % 255, rand() % 255, rand() % 255));
		CPen *p;
		p = dc.SelectObject(&pen);
		dc.Ellipse(r);*/
		Invalidate();
	}
	else 
	{
		flag = 0;
		KillTimer(i);
		r.SetRect((center.x - 100), (center.y - 100), (center.x + 100), (center.y + 100));
	}
	CView::OnTimer(nIDEvent);
}
