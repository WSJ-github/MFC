
// CTest2.1(��ʾ����)View.cpp : CCTest21��ʾ����View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest2.1(��ʾ����).h"
#endif

#include "CTest2.1(��ʾ����)Doc.h"
#include "CTest2.1(��ʾ����)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest21��ʾ����View

IMPLEMENT_DYNCREATE(CCTest21��ʾ����View, CView)

BEGIN_MESSAGE_MAP(CCTest21��ʾ����View, CView)
END_MESSAGE_MAP()

// CCTest21��ʾ����View ����/����

CCTest21��ʾ����View::CCTest21��ʾ����View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest21��ʾ����View::~CCTest21��ʾ����View()
{
}

BOOL CCTest21��ʾ����View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest21��ʾ����View ����

void CCTest21��ʾ����View::OnDraw(CDC* pDC)
{
	CCTest21��ʾ����Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString A  ;
	A.Format(_T("%d"), pDoc->a);
	pDC->TextOutW(200, 200,pDoc->s);
	pDC->TextOutW(200, 300, A);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest21��ʾ����View ���

#ifdef _DEBUG
void CCTest21��ʾ����View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest21��ʾ����View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest21��ʾ����Doc* CCTest21��ʾ����View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest21��ʾ����Doc)));
	return (CCTest21��ʾ����Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest21��ʾ����View ��Ϣ�������
