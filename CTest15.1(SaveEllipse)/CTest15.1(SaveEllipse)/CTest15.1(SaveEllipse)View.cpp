
// CTest15.1(SaveEllipse)View.cpp : CCTest151SaveEllipseView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest15.1(SaveEllipse).h"
#endif

#include "CTest15.1(SaveEllipse)Doc.h"
#include "CTest15.1(SaveEllipse)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest151SaveEllipseView

IMPLEMENT_DYNCREATE(CCTest151SaveEllipseView, CView)

BEGIN_MESSAGE_MAP(CCTest151SaveEllipseView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CCTest151SaveEllipseView ����/����

CCTest151SaveEllipseView::CCTest151SaveEllipseView()
{
	// TODO: �ڴ˴���ӹ������
	flag = false;
}

CCTest151SaveEllipseView::~CCTest151SaveEllipseView()
{
}

BOOL CCTest151SaveEllipseView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest151SaveEllipseView ����

void CCTest151SaveEllipseView::OnDraw(CDC* pDC)
{
	CCTest151SaveEllipseDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	for (int i = 0; i<pDoc->ary.GetSize(); i++)
	{
		pDC->Ellipse(pDoc->ary.GetAt(i));
	}
	//CPen pen(PS_SOLID, 5, RGB(rand() % 200 + 1, rand() % 200 + 1, rand() % 200 + 1));
	//CPen *pp;
	//pp = pDC->SelectObject(&pen);
	r.SetRect(p1, p2);
	pDC->Ellipse(r);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest151SaveEllipseView ���

#ifdef _DEBUG
void CCTest151SaveEllipseView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest151SaveEllipseView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest151SaveEllipseDoc* CCTest151SaveEllipseView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest151SaveEllipseDoc)));
	return (CCTest151SaveEllipseDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest151SaveEllipseView ��Ϣ�������


void CCTest151SaveEllipseView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = true;
	p1 = point;
	CView::OnLButtonDown(nFlags, point);
}


void CCTest151SaveEllipseView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (flag == true)
	{
		p2 = point;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}


void CCTest151SaveEllipseView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CCTest151SaveEllipseDoc* pDoc = GetDocument();
	flag = false;
	r.SetRect(p1, p2);
	pDoc->ary.Add(r);
	CView::OnLButtonUp(nFlags, point);
}
