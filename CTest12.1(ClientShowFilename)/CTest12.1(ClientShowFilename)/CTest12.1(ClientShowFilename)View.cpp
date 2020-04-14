
// CTest12.1(ClientShowFilename)View.cpp : CCTest121ClientShowFilenameView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest12.1(ClientShowFilename).h"
#endif

#include "CTest12.1(ClientShowFilename)Doc.h"
#include "CTest12.1(ClientShowFilename)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"editDialog.h"
#include"listDialog.h"

// CCTest121ClientShowFilenameView

IMPLEMENT_DYNCREATE(CCTest121ClientShowFilenameView, CView)

BEGIN_MESSAGE_MAP(CCTest121ClientShowFilenameView, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_EDITSHOW, &CCTest121ClientShowFilenameView::OnEditshow)
	ON_COMMAND(ID_LISTSHOW, &CCTest121ClientShowFilenameView::OnListshow)
END_MESSAGE_MAP()

// CCTest121ClientShowFilenameView 构造/析构

CCTest121ClientShowFilenameView::CCTest121ClientShowFilenameView()
{
	// TODO: 在此处添加构造代码

}

CCTest121ClientShowFilenameView::~CCTest121ClientShowFilenameView()
{
}

BOOL CCTest121ClientShowFilenameView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest121ClientShowFilenameView 绘制

void CCTest121ClientShowFilenameView::OnDraw(CDC* pDC)
{
	CCTest121ClientShowFilenameDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->TextOutW(10, 10, _T("左键双击打开文件对话框"));
	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest121ClientShowFilenameView 诊断

#ifdef _DEBUG
void CCTest121ClientShowFilenameView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest121ClientShowFilenameView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest121ClientShowFilenameDoc* CCTest121ClientShowFilenameView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest121ClientShowFilenameDoc)));
	return (CCTest121ClientShowFilenameDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest121ClientShowFilenameView 消息处理程序


void CCTest121ClientShowFilenameView::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CFileDialog cdf(true);
	int  r = cdf.DoModal();
	if (r == IDOK)
	{
		filename = cdf.GetFileName();
		CClientDC dc(this);
		dc.TextOutW(200, 200, filename);
	}
	CView::OnLButtonDblClk(nFlags, point);
}


void CCTest121ClientShowFilenameView::OnEditshow()
{
	editDialog log;
	log.editS = filename;
	log.DoModal();
	// TODO: 在此添加命令处理程序代码
}


void CCTest121ClientShowFilenameView::OnListshow()
{
	listDialog listlog;
	listlog.ls = filename;
	listlog.DoModal();
	// TODO: 在此添加命令处理程序代码
}
