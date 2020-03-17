
// CTest5.1(movemoseTime)View.cpp : CCTest51movemoseTimeView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest5.1(movemoseTime).h"
#endif

#include "CTest5.1(movemoseTime)Doc.h"
#include "CTest5.1(movemoseTime)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest51movemoseTimeView

IMPLEMENT_DYNCREATE(CCTest51movemoseTimeView, CView)

BEGIN_MESSAGE_MAP(CCTest51movemoseTimeView, CView)
//	ON_WM_MBUTTONDOWN()
//	ON_WM_MBUTTONUP()
ON_WM_LBUTTONUP()
ON_WM_LBUTTONDOWN()
ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CCTest51movemoseTimeView ����/����

CCTest51movemoseTimeView::CCTest51movemoseTimeView()
{
	// TODO: �ڴ˴���ӹ������
	flag = 0;
	time = 0;
	crosswiseTime = 0;  //�����ƶ����ٸ����ط���һ��mosemove
}

CCTest51movemoseTimeView::~CCTest51movemoseTimeView()
{
}

BOOL CCTest51movemoseTimeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest51movemoseTimeView ����

void CCTest51movemoseTimeView::OnDraw(CDC* pDC)
{
	CCTest51movemoseTimeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CString s;
	s.Format(_T("Time=%d"), time);
	pDC->TextOutW(200,200,s);
	CString t;
	t.Format(_T("�����ƶ�%d�����ص㴥��һ��mosemove"), crosswiseTime);
	pDC->TextOutW(200, 300, t);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest51movemoseTimeView ���

#ifdef _DEBUG
void CCTest51movemoseTimeView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest51movemoseTimeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest51movemoseTimeDoc* CCTest51movemoseTimeView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest51movemoseTimeDoc)));
	return (CCTest51movemoseTimeDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest51movemoseTimeView ��Ϣ�������


//void CCTest51movemoseTimeView::OnMButtonDown(UINT nFlags, CPoint point)
//{
//	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
//
//	CView::OnMButtonDown(nFlags, point);
//}


//void CCTest51movemoseTimeView::OnMButtonUp(UINT nFlags, CPoint point)
//{
//	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
//
//	CView::OnMButtonUp(nFlags, point);
//}


void CCTest51movemoseTimeView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	p2 = point;
	crosswiseTime=(int)(p2.x-p1.x)/time;
	flag = 0;
	Invalidate();
	CView::OnLButtonUp(nFlags, point);
}


void CCTest51movemoseTimeView::OnLButtonDown(UINT nFlags, CPoint point)
{	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	flag = 1;
	time = 0;
	p1 = point;

	//Invalidate();
	CView::OnLButtonDown(nFlags, point);
}


void CCTest51movemoseTimeView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (flag == 1)
	{
		time++;
	}
	CView::OnMouseMove(nFlags, point);
}
