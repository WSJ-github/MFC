
// CTest8.1(showJPG)View.cpp : CCTest81showJPGView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest8.1(showJPG).h"
#endif

#include "CTest8.1(showJPG)Doc.h"
#include "CTest8.1(showJPG)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest81showJPGView

IMPLEMENT_DYNCREATE(CCTest81showJPGView, CView)

BEGIN_MESSAGE_MAP(CCTest81showJPGView, CView)
	ON_COMMAND(ID_FILE_OPEN, &CCTest81showJPGView::OnFileOpen)
END_MESSAGE_MAP()

// CCTest81showJPGView 构造/析构

CCTest81showJPGView::CCTest81showJPGView()
{
	// TODO: 在此处添加构造代码

}

CCTest81showJPGView::~CCTest81showJPGView()
{
}

BOOL CCTest81showJPGView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest81showJPGView 绘制

void CCTest81showJPGView::OnDraw(CDC* /*pDC*/)
{
	CCTest81showJPGDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest81showJPGView 诊断

#ifdef _DEBUG
void CCTest81showJPGView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest81showJPGView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest81showJPGDoc* CCTest81showJPGView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest81showJPGDoc)));
	return (CCTest81showJPGDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest81showJPGView 消息处理程序


void CCTest81showJPGView::OnFileOpen()
{
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	CRect rect;
	int sx, sy;
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		CImage img;
		img.Load(filename);
		GetClientRect(&rect);
		sx = (rect.right - img.GetWidth()) / 2;
		sy = (rect.bottom - img.GetHeight()) / 2;

		img.Draw(dc.m_hDC, sx, sy, img.GetWidth(), img.GetHeight());
	}
	// TODO: 在此添加命令处理程序代码
}
