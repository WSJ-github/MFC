
// CTest8.2(showCenteralJPG)View.cpp : CCTest82showCenteralJPGView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest8.2(showCenteralJPG).h"
#endif

#include "CTest8.2(showCenteralJPG)Doc.h"
#include "CTest8.2(showCenteralJPG)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest82showCenteralJPGView

IMPLEMENT_DYNCREATE(CCTest82showCenteralJPGView, CView)

BEGIN_MESSAGE_MAP(CCTest82showCenteralJPGView, CView)
	ON_COMMAND(ID_FILE_OPEN, &CCTest82showCenteralJPGView::OnFileOpen)
END_MESSAGE_MAP()

// CCTest82showCenteralJPGView 构造/析构

CCTest82showCenteralJPGView::CCTest82showCenteralJPGView()
{
	// TODO: 在此处添加构造代码

}

CCTest82showCenteralJPGView::~CCTest82showCenteralJPGView()
{
}

BOOL CCTest82showCenteralJPGView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest82showCenteralJPGView 绘制

void CCTest82showCenteralJPGView::OnDraw(CDC* /*pDC*/)
{
	CCTest82showCenteralJPGDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest82showCenteralJPGView 诊断

#ifdef _DEBUG
void CCTest82showCenteralJPGView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest82showCenteralJPGView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest82showCenteralJPGDoc* CCTest82showCenteralJPGView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest82showCenteralJPGDoc)));
	return (CCTest82showCenteralJPGDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest82showCenteralJPGView 消息处理程序


void CCTest82showCenteralJPGView::OnFileOpen()
{
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	CRect rect;
	int sx, sy,w,h; //sx,sy是图片左上角断电；w，h是图片的宽高
	float jpg, client;
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		CImage img;
		img.Load(filename);
		GetClientRect(&rect);
		client = rect.Width() / rect.Height();   //客户区的宽高比
		jpg = img.GetWidth() / img.GetHeight();  //图片的宽高比
		if (client > jpg)   //说明客户区相对图片较宽
		{
			h= rect.Height();  //此时图片的高度应该适应客户区的高度
			w = img.GetWidth();  //图片的宽不变
			sx = (rect.right - img.GetWidth()) / 2;
			sy = 0;
		}
		else 
		{
			h= img.GetHeight();
			w = rect.Width();
			sx = 0;
			sy= (rect.bottom - img.GetHeight()) / 2;
		}
		img.Draw(dc.m_hDC, sx, sy, w, h);
	}
	// TODO: 在此添加命令处理程序代码
}
