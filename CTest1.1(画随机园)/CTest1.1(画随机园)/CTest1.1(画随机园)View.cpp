
// CTest1.1(�����԰)View.cpp : CCTest11�����԰View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest1.1(�����԰).h"
#endif

#include "CTest1.1(�����԰)Doc.h"
#include "CTest1.1(�����԰)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest11�����԰View

IMPLEMENT_DYNCREATE(CCTest11�����԰View, CView)

BEGIN_MESSAGE_MAP(CCTest11�����԰View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest11�����԰View ����/����

CCTest11�����԰View::CCTest11�����԰View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest11�����԰View::~CCTest11�����԰View()
{
}

BOOL CCTest11�����԰View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest11�����԰View ����

void CCTest11�����԰View::OnDraw(CDC* pDC)
{
	CCTest11�����԰Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	for (int i = 0; i < pDoc->c.GetSize(); i++)
	{
		pDC->Ellipse(pDoc->c.GetAt(i));
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest11�����԰View ���

#ifdef _DEBUG
void CCTest11�����԰View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest11�����԰View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest11�����԰Doc* CCTest11�����԰View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest11�����԰Doc)));
	return (CCTest11�����԰Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest11�����԰View ��Ϣ�������


void CCTest11�����԰View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CCTest11�����԰Doc* pDoc = GetDocument();
	int a = rand() % 100 + 5;
	CRect r1;
	r1.SetRect(point.x - a, point.y - a, point.x + a, point.y + a);
	pDoc->c.Add(r1);
	Invalidate();

	CView::OnLButtonDown(nFlags, point);
}
