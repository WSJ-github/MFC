
// ������ʾ��ԲView.cpp : C������ʾ��ԲView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������ʾ��Բ.h"
#endif

#include "������ʾ��ԲDoc.h"
#include "������ʾ��ԲView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C������ʾ��ԲView

IMPLEMENT_DYNCREATE(C������ʾ��ԲView, CView)

BEGIN_MESSAGE_MAP(C������ʾ��ԲView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C������ʾ��ԲView ����/����

C������ʾ��ԲView::C������ʾ��ԲView()
{
	//c.SetSize(256);

}

C������ʾ��ԲView::~C������ʾ��ԲView()
{
}

BOOL C������ʾ��ԲView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C������ʾ��ԲView ����

void C������ʾ��ԲView::OnDraw(CDC* pDC)
{
	C������ʾ��ԲDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	//pDC->Ellipse(cr);
	for (int i=0; i < pDoc->c.GetSize(); i++)
		pDC->Ellipse(pDoc->c.GetAt(i));
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C������ʾ��ԲView ���

#ifdef _DEBUG
void C������ʾ��ԲView::AssertValid() const
{
	CView::AssertValid();
}

void C������ʾ��ԲView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C������ʾ��ԲDoc* C������ʾ��ԲView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C������ʾ��ԲDoc)));
	return (C������ʾ��ԲDoc*)m_pDocument;
}
#endif //_DEBUG


// C������ʾ��ԲView ��Ϣ�������


void C������ʾ��ԲView::OnLButtonDown(UINT nFlags, CPoint point)
{
	CRect vr;
	//this->GetClientRect(&cr);
	//this->Invalidate();
	int r1 = rand() % 50 + 5;   //����������
	int r2 = rand() % 50 + 5;   //����������
	C������ʾ��ԲDoc* pDoc = GetDocument();
	vr.SetRect(point.x - r1, point.y + r2, point.x + r1, point.y - r2);
	pDoc->c.Add(vr);
	this->Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
