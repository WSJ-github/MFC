
// CTest13.2(DragEllipse)View.cpp : CCTest132DragEllipseView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest13.2(DragEllipse).h"
#endif

#include "CTest13.2(DragEllipse)Doc.h"
#include "CTest13.2(DragEllipse)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest132DragEllipseView

IMPLEMENT_DYNCREATE(CCTest132DragEllipseView, CView)

BEGIN_MESSAGE_MAP(CCTest132DragEllipseView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CCTest132DragEllipseView ����/����

CCTest132DragEllipseView::CCTest132DragEllipseView()
{
	// TODO: �ڴ˴���ӹ������
	flag = false;
}

CCTest132DragEllipseView::~CCTest132DragEllipseView()
{
}

BOOL CCTest132DragEllipseView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest132DragEllipseView ����

void CCTest132DragEllipseView::OnDraw(CDC* pDC)
{
	CCTest132DragEllipseDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CPen pen(PS_SOLID, 5, RGB(rand() % 200 + 1, rand() % 200 + 1, rand() % 200 + 1));
	CPen *pp;
	pp = pDC->SelectObject(&pen);
	r.SetRect(p1, p2);
	pDC->Ellipse(r);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest132DragEllipseView ���

#ifdef _DEBUG
void CCTest132DragEllipseView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest132DragEllipseView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest132DragEllipseDoc* CCTest132DragEllipseView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest132DragEllipseDoc)));
	return (CCTest132DragEllipseDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest132DragEllipseView ��Ϣ�������


void CCTest132DragEllipseView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = true;
	p1 = point;
	CView::OnLButtonDown(nFlags, point);
}


void CCTest132DragEllipseView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = false;
	r.SetRect(p1, p2);
	pDoc->
	CView::OnLButtonUp(nFlags, point);
}


void CCTest132DragEllipseView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (flag == true)
	{
		p2 = point;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}
