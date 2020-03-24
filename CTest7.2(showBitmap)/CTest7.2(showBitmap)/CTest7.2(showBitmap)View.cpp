
// CTest7.2(showBitmap)View.cpp : CCTest72showBitmapView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest7.2(showBitmap).h"
#endif

#include "CTest7.2(showBitmap)Doc.h"
#include "CTest7.2(showBitmap)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest72showBitmapView

IMPLEMENT_DYNCREATE(CCTest72showBitmapView, CView)

BEGIN_MESSAGE_MAP(CCTest72showBitmapView, CView)
END_MESSAGE_MAP()

// CCTest72showBitmapView 构造/析构

CCTest72showBitmapView::CCTest72showBitmapView()
{
	// TODO: 在此处添加构造代码
	bitmap.LoadBitmapW(IDB_BITMAP3);
}

CCTest72showBitmapView::~CCTest72showBitmapView()
{
}

BOOL CCTest72showBitmapView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest72showBitmapView 绘制

void CCTest72showBitmapView::OnDraw(CDC* pDC)
{
	CCTest72showBitmapDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	bitmap.GetBitmap(&BM);
	width = BM.bmWidth;
	heigth = BM.bmHeight;
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(bitmap);
	pDC->BitBlt(0, 0, width, heigth, &MemDC, 0, 0, SRCCOPY);
	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest72showBitmapView 诊断

#ifdef _DEBUG
void CCTest72showBitmapView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest72showBitmapView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest72showBitmapDoc* CCTest72showBitmapView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest72showBitmapDoc)));
	return (CCTest72showBitmapDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest72showBitmapView 消息处理程序
