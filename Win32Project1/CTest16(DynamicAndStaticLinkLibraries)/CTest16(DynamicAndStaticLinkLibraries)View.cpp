
// CTest16(DynamicAndStaticLinkLibraries)View.cpp : CCTest16DynamicAndStaticLinkLibrariesView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest16(DynamicAndStaticLinkLibraries).h"
#endif

#include "CTest16(DynamicAndStaticLinkLibraries)Doc.h"
#include "CTest16(DynamicAndStaticLinkLibraries)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"W32.h"
#include"Win32DLL.h"


// CCTest16DynamicAndStaticLinkLibrariesView

IMPLEMENT_DYNCREATE(CCTest16DynamicAndStaticLinkLibrariesView, CView)

BEGIN_MESSAGE_MAP(CCTest16DynamicAndStaticLinkLibrariesView, CView)
END_MESSAGE_MAP()

// CCTest16DynamicAndStaticLinkLibrariesView 构造/析构

CCTest16DynamicAndStaticLinkLibrariesView::CCTest16DynamicAndStaticLinkLibrariesView()
{
	// TODO: 在此处添加构造代码

}

CCTest16DynamicAndStaticLinkLibrariesView::~CCTest16DynamicAndStaticLinkLibrariesView()
{
}

BOOL CCTest16DynamicAndStaticLinkLibrariesView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CCTest16DynamicAndStaticLinkLibrariesView 绘制

void CCTest16DynamicAndStaticLinkLibrariesView::OnDraw(CDC* pDC)
{
	CCTest16DynamicAndStaticLinkLibrariesDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	int r = 5;
	if (r > 0)
	{
		int k=factorial(r);
		CString str;
		str.Format(_T("factorial(%d)=%d"),r,k);
		pDC->TextOutW(100,100,str);
	}
	FAC fac;
	float radian = fac.convert(30.0);
	CString str;
	str.Format(_T("convert(30.0)=%5.3f"), radian);
	pDC->TextOutW(200, 200, str);
    
//下面用动态链接库
	if (r > 0)
	{
		int k = factorialDLL(r);   //动态链接库中的函数
		CString str2;
		str2.Format(_T("来自动态链接库：factorialDLL(%d)=%d"), r, k);
		pDC->TextOutW(300, 300, str2);
	}
	FACDLL facdll;
	float radian1 = facdll.convert(30.0);
	CString str1;
	str1.Format(_T("来自动态链接库：convert(30.0)=%5.3f"), radian1);
	pDC->TextOutW(400, 400, str1);
	// TODO: 在此处为本机数据添加绘制代码
}


// CCTest16DynamicAndStaticLinkLibrariesView 诊断

#ifdef _DEBUG
void CCTest16DynamicAndStaticLinkLibrariesView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest16DynamicAndStaticLinkLibrariesView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest16DynamicAndStaticLinkLibrariesDoc* CCTest16DynamicAndStaticLinkLibrariesView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest16DynamicAndStaticLinkLibrariesDoc)));
	return (CCTest16DynamicAndStaticLinkLibrariesDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest16DynamicAndStaticLinkLibrariesView 消息处理程序
