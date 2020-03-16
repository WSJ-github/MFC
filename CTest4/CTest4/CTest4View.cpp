
// CTest4View.cpp : CCTest4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest4.h"
#endif

#include "CTest4Doc.h"
#include "CTest4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest4View

IMPLEMENT_DYNCREATE(CCTest4View, CView)

BEGIN_MESSAGE_MAP(CCTest4View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CCTest4View ����/����

CCTest4View::CCTest4View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest4View::~CCTest4View()
{
}

BOOL CCTest4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest4View ����

void CCTest4View::OnDraw(CDC* pDC)
{
	CCTest4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	CRect c1(500, 500, 600, 600);
	CRect c2(300,300,400,400);
	CRect c3(100, 100, 200, 200);
	pDC->Rectangle(&c1);
	pDC->Rectangle(&c2);
	pDC->Rectangle(&c3);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest4View ���

#ifdef _DEBUG
void CCTest4View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest4Doc* CCTest4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest4Doc)));
	return (CCTest4Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest4View ��Ϣ�������


void CCTest4View::OnLButtonDown(UINT nFlags, CPoint point)
{

	CClientDC dc(this);
	CString s1;
	int t1 = rand()%100;
	s1.Format(_T("%d"), t1);
	if(point.x>500&&point.x<600&&point.y>500&&point.y<600)
		dc.TextOutW(point.x, point.y,s1);
	else if(point.x>300 && point.x<400 && point.y>300 && point.y<400)
		dc.TextOutW(point.x, point.y, s1);
	else if (point.x>100 && point.x<200 && point.y>100 && point.y<200)
		dc.TextOutW(point.x, point.y, s1);
	else {
		s1 = "��Ч";
		dc.TextOutW(point.x, point.y, s1);
	    }
		CView::OnLButtonDown(nFlags, point);
}


void CCTest4View::OnLButtonUp(UINT nFlags, CPoint point)
{
	CView::OnLButtonUp(nFlags, point);
}
