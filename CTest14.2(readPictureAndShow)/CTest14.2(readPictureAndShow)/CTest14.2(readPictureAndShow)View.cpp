
// CTest14.2(readPictureAndShow)View.cpp : CCTest142readPictureAndShowView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest14.2(readPictureAndShow).h"
#include"Dialog1.h"
#endif

#include "CTest14.2(readPictureAndShow)Doc.h"
#include "CTest14.2(readPictureAndShow)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest142readPictureAndShowView

IMPLEMENT_DYNCREATE(CCTest142readPictureAndShowView, CView)

BEGIN_MESSAGE_MAP(CCTest142readPictureAndShowView, CView)
	ON_COMMAND(ID_SELECTPIC, &CCTest142readPictureAndShowView::OnSelectpic)
	ON_COMMAND(ID_SHOWPIC, &CCTest142readPictureAndShowView::OnShowpic)
END_MESSAGE_MAP()

// CCTest142readPictureAndShowView 构造/析构

CCTest142readPictureAndShowView::CCTest142readPictureAndShowView()
{
	// TODO: 在此处添加构造代码

}

CCTest142readPictureAndShowView::~CCTest142readPictureAndShowView()
{
}

BOOL CCTest142readPictureAndShowView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest142readPictureAndShowView 绘制

void CCTest142readPictureAndShowView::OnDraw(CDC* pDC)
{
	CCTest142readPictureAndShowDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->TextOutW(100, 100, pDoc->filename);
	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest142readPictureAndShowView 诊断

#ifdef _DEBUG
void CCTest142readPictureAndShowView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest142readPictureAndShowView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest142readPictureAndShowDoc* CCTest142readPictureAndShowView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest142readPictureAndShowDoc)));
	return (CCTest142readPictureAndShowDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest142readPictureAndShowView 消息处理程序


void CCTest142readPictureAndShowView::OnSelectpic()
{
	CCTest142readPictureAndShowDoc* pDoc = GetDocument();
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		CString str = cfd.GetPathName();
		CClientDC dc(this);
		pDoc->filename = str;
		dc.TextOutW(100, 100, _T("您选择的文件的文件名为：") + str);
	}
	// TODO: 在此添加命令处理程序代码
}


void CCTest142readPictureAndShowView::OnShowpic()
{
	CCTest142readPictureAndShowDoc* pDoc = GetDocument();
	if (pDoc->filename != _T(""))
	{
		Dialog1 dia;
		dia.name = pDoc->filename;
		int r=dia.DoModal();
	}
	if (pDoc->filename == _T(""))
	{
		AfxMessageBox(_T("请选择图片路径"));
		OnSelectpic();
		if (pDoc->filename != _T(""))
		{
			Dialog1 dia;
			dia.name = pDoc->filename;
			int r = dia.DoModal();
		}
	}

	// TODO: 在此添加命令处理程序代码
}
