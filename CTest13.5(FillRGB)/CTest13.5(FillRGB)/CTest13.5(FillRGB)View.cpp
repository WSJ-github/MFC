
// CTest13.5(FillRGB)View.cpp : CCTest135FillRGBView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest13.5(FillRGB).h"
#include"RGBdialog.h"
#endif

#include "CTest13.5(FillRGB)Doc.h"
#include "CTest13.5(FillRGB)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest135FillRGBView

IMPLEMENT_DYNCREATE(CCTest135FillRGBView, CView)

BEGIN_MESSAGE_MAP(CCTest135FillRGBView, CView)
	ON_COMMAND(ID_32771, &CCTest135FillRGBView::On32771)
END_MESSAGE_MAP()

// CCTest135FillRGBView ����/����

CCTest135FillRGBView::CCTest135FillRGBView()
{
	// TODO: �ڴ˴���ӹ������
	r1 = 255;
	r2 = 255;
	r3 = 255;
}

CCTest135FillRGBView::~CCTest135FillRGBView()
{
}

BOOL CCTest135FillRGBView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest135FillRGBView ����

void CCTest135FillRGBView::OnDraw(CDC* pDC)
{
	CCTest135FillRGBDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect rect(100, 100, 300, 200);
	pDC->Ellipse(rect);
	CBrush brush(RGB(r1, r2, r3));
	CRgn rgn;
	rgn.CreateEllipticRgn(100, 100, 300, 200);
	pDC->FillRgn(&rgn, &brush);
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest135FillRGBView ���

#ifdef _DEBUG
void CCTest135FillRGBView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest135FillRGBView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest135FillRGBDoc* CCTest135FillRGBView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest135FillRGBDoc)));
	return (CCTest135FillRGBDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest135FillRGBView ��Ϣ�������


void CCTest135FillRGBView::On32771()
{
	RGBdialog log;
	int flag=log.DoModal();
	if (flag == IDOK)
	{
		r1 = log.r1;
		r2 = log.r2;
		r3 = log.r3;
		Invalidate();
		//CClientDC dc(this);
		//dc.FillRgn(&rgn, &brush);
	}
	// TODO: �ڴ���������������
}
