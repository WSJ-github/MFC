
// CTest13.3(inputEllipseData)View.cpp : CCTest133inputEllipseDataView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest13.3(inputEllipseData).h"
#include"dialog1.h"
#endif

#include "CTest13.3(inputEllipseData)Doc.h"
#include "CTest13.3(inputEllipseData)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest133inputEllipseDataView

IMPLEMENT_DYNCREATE(CCTest133inputEllipseDataView, CView)

BEGIN_MESSAGE_MAP(CCTest133inputEllipseDataView, CView)
	ON_COMMAND(ID_Ellipse, &CCTest133inputEllipseDataView::OnEllipse)
END_MESSAGE_MAP()

// CCTest133inputEllipseDataView ����/����

CCTest133inputEllipseDataView::CCTest133inputEllipseDataView()
{
	// TODO: �ڴ˴���ӹ������
	r1 = 0;
	r2 = 0;
	r3 = 0;
	r4 = 0;

}

CCTest133inputEllipseDataView::~CCTest133inputEllipseDataView()
{

}

BOOL CCTest133inputEllipseDataView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest133inputEllipseDataView ����

void CCTest133inputEllipseDataView::OnDraw(CDC* pDC)
{
	CCTest133inputEllipseDataDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (f == 1)
	{
		CRgn rgn;
		rgn.CreateEllipticRgn(r1,r2,r3,r4);
		CBrush brush(RGB(0, 0, 0));
		pDC->FillRgn(&rgn,&brush);
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest133inputEllipseDataView ���

#ifdef _DEBUG
void CCTest133inputEllipseDataView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest133inputEllipseDataView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest133inputEllipseDataDoc* CCTest133inputEllipseDataView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest133inputEllipseDataDoc)));
	return (CCTest133inputEllipseDataDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest133inputEllipseDataView ��Ϣ�������


void CCTest133inputEllipseDataView::OnEllipse()
{
	dialog1 log;
	int flag = log.DoModal();
	if (flag == IDOK)
	{
		f = 1;
		r1 = log.r1;
		r2 = log.r2;
		r3 = log.r3;
		r4 = log.r4;
		Invalidate();
	}
	// TODO: �ڴ���������������
}
