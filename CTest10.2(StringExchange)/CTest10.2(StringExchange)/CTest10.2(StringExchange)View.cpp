
// CTest10.2(StringExchange)View.cpp : CCTest102StringExchangeView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest10.2(StringExchange).h"
#include"Dialog2.h"
#endif

#include "CTest10.2(StringExchange)Doc.h"
#include "CTest10.2(StringExchange)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest102StringExchangeView

IMPLEMENT_DYNCREATE(CCTest102StringExchangeView, CView)

BEGIN_MESSAGE_MAP(CCTest102StringExchangeView, CView)
	ON_COMMAND(ID_StringExchange, &CCTest102StringExchangeView::OnStringexchange)
END_MESSAGE_MAP()

// CCTest102StringExchangeView ����/����

CCTest102StringExchangeView::CCTest102StringExchangeView()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest102StringExchangeView::~CCTest102StringExchangeView()
{
}

BOOL CCTest102StringExchangeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest102StringExchangeView ����

void CCTest102StringExchangeView::OnDraw(CDC* /*pDC*/)
{
	CCTest102StringExchangeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest102StringExchangeView ���

#ifdef _DEBUG
void CCTest102StringExchangeView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest102StringExchangeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest102StringExchangeDoc* CCTest102StringExchangeView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest102StringExchangeDoc)));
	return (CCTest102StringExchangeDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest102StringExchangeView ��Ϣ�������


void CCTest102StringExchangeView::OnStringexchange()
{
	Dialog2 *log=new Dialog2;
	log->Create(IDD_DIALOG1);
	log->ShowWindow(1);
	//log->DestroyWindow();
	// TODO: �ڴ���������������
}
