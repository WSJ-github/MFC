
// CTest4.1View.cpp : CCTest41View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest4.1.h"
#endif

#include "CTest4.1Doc.h"
#include "CTest4.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest41View

IMPLEMENT_DYNCREATE(CCTest41View, CView)

BEGIN_MESSAGE_MAP(CCTest41View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CCTest41View ����/����

CCTest41View::CCTest41View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest41View::~CCTest41View()
{
}

BOOL CCTest41View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest41View ����

void CCTest41View::OnDraw(CDC* /*pDC*/)
{
	CCTest41Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest41View ���

#ifdef _DEBUG
void CCTest41View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest41View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest41Doc* CCTest41View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest41Doc)));
	return (CCTest41Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest41View ��Ϣ�������


void CCTest41View::OnLButtonDown(UINT nFlags, CPoint point)
{
	CClientDC dc(this);
	CString s;
	s = "���������ڱ�����";
	dc.TextOutW(200, 300, s);

	CView::OnLButtonDown(nFlags, point);
}


void CCTest41View::OnLButtonUp(UINT nFlags, CPoint point)
{
	CClientDC dc(this);
	CString s;
	s = "���������ڱ�̧��";
	dc.TextOutW(200, 300, s);
	s = "";
	dc.TextOutW(200, 300, s);

	CView::OnLButtonUp(nFlags, point);
}
