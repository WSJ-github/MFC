
// CTest2.3View.cpp : CCTest23View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest2.3.h"
#endif

#include "CTest2.3Doc.h"
#include "CTest2.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest23View

IMPLEMENT_DYNCREATE(CCTest23View, CView)

BEGIN_MESSAGE_MAP(CCTest23View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest23View ����/����

CCTest23View::CCTest23View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest23View::~CCTest23View()
{
}

BOOL CCTest23View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest23View ����

void CCTest23View::OnDraw(CDC* /*pDC*/)
{
	CCTest23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest23View ���

#ifdef _DEBUG
void CCTest23View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest23View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest23Doc* CCTest23View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest23Doc)));
	return (CCTest23Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest23View ��Ϣ�������


void CCTest23View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CCTest23Doc* pDoc = GetDocument();
	pDoc->count= pDoc->count+1;
	CView::OnLButtonDown(nFlags, point);
}


void CCTest23View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	CView::OnLButtonUp(nFlags, point);
}


void CCTest23View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CCTest23Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s;
	s.Format(_T("count=%d"), pDoc->count);
	dc.TextOutW(200, 200, s);
	//Invalidate();
	CView::OnRButtonDown(nFlags, point);
}
