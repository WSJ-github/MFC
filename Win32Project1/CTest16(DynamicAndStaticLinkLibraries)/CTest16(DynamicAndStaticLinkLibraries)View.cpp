
// CTest16(DynamicAndStaticLinkLibraries)View.cpp : CCTest16DynamicAndStaticLinkLibrariesView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CCTest16DynamicAndStaticLinkLibrariesView ����/����

CCTest16DynamicAndStaticLinkLibrariesView::CCTest16DynamicAndStaticLinkLibrariesView()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest16DynamicAndStaticLinkLibrariesView::~CCTest16DynamicAndStaticLinkLibrariesView()
{
}

BOOL CCTest16DynamicAndStaticLinkLibrariesView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest16DynamicAndStaticLinkLibrariesView ����

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
    
//�����ö�̬���ӿ�
	if (r > 0)
	{
		int k = factorialDLL(r);   //��̬���ӿ��еĺ���
		CString str2;
		str2.Format(_T("���Զ�̬���ӿ⣺factorialDLL(%d)=%d"), r, k);
		pDC->TextOutW(300, 300, str2);
	}
	FACDLL facdll;
	float radian1 = facdll.convert(30.0);
	CString str1;
	str1.Format(_T("���Զ�̬���ӿ⣺convert(30.0)=%5.3f"), radian1);
	pDC->TextOutW(400, 400, str1);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest16DynamicAndStaticLinkLibrariesView ���

#ifdef _DEBUG
void CCTest16DynamicAndStaticLinkLibrariesView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest16DynamicAndStaticLinkLibrariesView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest16DynamicAndStaticLinkLibrariesDoc* CCTest16DynamicAndStaticLinkLibrariesView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest16DynamicAndStaticLinkLibrariesDoc)));
	return (CCTest16DynamicAndStaticLinkLibrariesDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest16DynamicAndStaticLinkLibrariesView ��Ϣ�������
