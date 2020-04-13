
// CTest11.1(catchRect)View.cpp : CCTest111catchRectView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest11.1(catchRect).h"
#endif

#include "CTest11.1(catchRect)Doc.h"
#include "CTest11.1(catchRect)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest111catchRectView

IMPLEMENT_DYNCREATE(CCTest111catchRectView, CView)

BEGIN_MESSAGE_MAP(CCTest111catchRectView, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CCTest111catchRectView ����/����

CCTest111catchRectView::CCTest111catchRectView()
{
	// TODO: �ڴ˴���ӹ������
	p.SetPoint(150, 150);
	r.SetRect(p.x - 50, p.y - 50, p.x + 50, p.y + 50);
}

CCTest111catchRectView::~CCTest111catchRectView()
{
}

BOOL CCTest111catchRectView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest111catchRectView ����

void CCTest111catchRectView::OnDraw(CDC* pDC)
{
	CCTest111catchRectDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CBrush brush(RGB(114,200,134));
	pDC->FillRect(&r, &brush);
	//pDC->Rectangle(r);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest111catchRectView ���

#ifdef _DEBUG
void CCTest111catchRectView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest111catchRectView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest111catchRectDoc* CCTest111catchRectView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest111catchRectDoc)));
	return (CCTest111catchRectDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest111catchRectView ��Ϣ�������


void CCTest111catchRectView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	p = point;
	if (flag == 1)
	{
		r.SetRect(p.x - 50, p.y - 50, p.x + 50, p.y + 50);
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}


void CCTest111catchRectView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if(point.x>p.x-50&&point.x<p.x+50&&point.y>p.y-50&&point.y<p.y+50)
	   flag = 1;
	CView::OnLButtonDown(nFlags, point);
}


void CCTest111catchRectView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = 0;
	CView::OnLButtonUp(nFlags, point);
}
