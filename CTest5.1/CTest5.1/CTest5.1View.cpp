
// CTest5.1View.cpp : CCTest51View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest5.1.h"
#endif

#include "CTest5.1Doc.h"
#include "CTest5.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest51View

IMPLEMENT_DYNCREATE(CCTest51View, CView)

BEGIN_MESSAGE_MAP(CCTest51View, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CCTest51View ����/����

CCTest51View::CCTest51View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest51View::~CCTest51View()
{
}

BOOL CCTest51View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest51View ����

void CCTest51View::OnDraw(CDC* pDC)
{
	CCTest51Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	//pDoc->s.Format(_T("X=%d Y=%d"), pDoc->c.x, pDoc->c.y);
	//pDC->TextOut(20, 20, pDoc->s);
    
	pDoc->rect.SetRect(pDoc->c1.x, pDoc->c1.y, pDoc->c2.x, pDoc->c2.y);
	pDC->Rectangle(pDoc->rect);
	

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest51View ���

#ifdef _DEBUG
void CCTest51View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest51View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest51Doc* CCTest51View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest51Doc)));
	return (CCTest51Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest51View ��Ϣ�������


void CCTest51View::OnMouseMove(UINT nFlags, CPoint point)
{
	CCTest51Doc* pDoc = GetDocument();
	CClientDC dc(this);
	pDoc->c = point;
	pDoc->s.Format(_T("X=%d Y=%d"), pDoc->c.x, pDoc->c.y);
	dc.TextOut(20, 20, pDoc->s);
	//Invalidate();
	

	CView::OnMouseMove(nFlags, point);
}


void CCTest51View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CCTest51Doc* pDoc = GetDocument();
	pDoc->c1 = point;
	

	CView::OnLButtonDown(nFlags, point);
}


void CCTest51View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CCTest51Doc* pDoc = GetDocument();
	pDoc->c2 = point;
	Invalidate();

	CView::OnLButtonUp(nFlags, point);
}
