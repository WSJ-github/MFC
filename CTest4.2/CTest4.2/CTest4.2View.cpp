
// CTest4.2View.cpp : CCTest42View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest4.2.h"
#endif

#include "CTest4.2Doc.h"
#include "CTest4.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest42View

IMPLEMENT_DYNCREATE(CCTest42View, CView)

BEGIN_MESSAGE_MAP(CCTest42View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest42View ����/����

CCTest42View::CCTest42View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest42View::~CCTest42View()
{
}

BOOL CCTest42View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest42View ����

void CCTest42View::OnDraw(CDC* /*pDC*/)
{
	CCTest42Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest42View ���

#ifdef _DEBUG
void CCTest42View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest42View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest42Doc* CCTest42View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest42Doc)));
	return (CCTest42Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest42View ��Ϣ�������


void CCTest42View::OnLButtonDown(UINT nFlags, CPoint point)
{
	CCTest42Doc* pDoc = GetDocument();
	CString s1, s2, s3;
	int C = pDoc->A + pDoc->B;
	s1.Format(_T("%d"), pDoc->A);
	s2.Format(_T("%d"), pDoc->B);
	s3.Format(_T("%d"), C);
	CClientDC dc(this);
	dc.TextOutW(200, 300, s1 + "+" + s2 + "=" + s3);

	CView::OnLButtonDown(nFlags, point);
}
