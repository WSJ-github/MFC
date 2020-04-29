
// CTest14.1(MFCserialize)View.cpp : CCTest141MFCserializeView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest14.1(MFCserialize).h"
#endif

#include "CTest14.1(MFCserialize)Doc.h"
#include "CTest14.1(MFCserialize)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest141MFCserializeView

IMPLEMENT_DYNCREATE(CCTest141MFCserializeView, CView)

BEGIN_MESSAGE_MAP(CCTest141MFCserializeView, CView)
	ON_COMMAND(ID_READFILE, &CCTest141MFCserializeView::OnReadfile)
END_MESSAGE_MAP()

// CCTest141MFCserializeView 构造/析构

CCTest141MFCserializeView::CCTest141MFCserializeView()
{
	// TODO: 在此处添加构造代码

}

CCTest141MFCserializeView::~CCTest141MFCserializeView()
{
}

BOOL CCTest141MFCserializeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest141MFCserializeView 绘制

void CCTest141MFCserializeView::OnDraw(CDC* pDC)
{
	CCTest141MFCserializeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->TextOutW(200, 200, pDoc->s);
	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest141MFCserializeView 诊断

#ifdef _DEBUG
void CCTest141MFCserializeView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest141MFCserializeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest141MFCserializeDoc* CCTest141MFCserializeView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest141MFCserializeDoc)));
	return (CCTest141MFCserializeDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest141MFCserializeView 消息处理程序


void CCTest141MFCserializeView::OnReadfile()
{
	CCTest141MFCserializeDoc* pDoc = GetDocument();
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		CString str = cfd.GetPathName();
		CClientDC dc(this);
		pDoc->s = str;
		dc.TextOutW(100, 100, _T("您选择的文件的文件名为：") + str);
	}
	// TODO: 在此添加命令处理程序代码
}
