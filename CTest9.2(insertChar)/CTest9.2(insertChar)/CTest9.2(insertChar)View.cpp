
// CTest9.2(insertChar)View.cpp : CCTest92insertCharView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest9.2(insertChar).h"
#endif

#include "CTest9.2(insertChar)Doc.h"
#include "CTest9.2(insertChar)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest92insertCharView

IMPLEMENT_DYNCREATE(CCTest92insertCharView, CView)

BEGIN_MESSAGE_MAP(CCTest92insertCharView, CView)
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest92insertCharView ����/����

CCTest92insertCharView::CCTest92insertCharView()
{
	// TODO: �ڴ˴���ӹ����	s1 = "asgdvasad";
}

CCTest92insertCharView::~CCTest92insertCharView()
{
}

BOOL CCTest92insertCharView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest92insertCharView ����

void CCTest92insertCharView::OnDraw(CDC* pDC)
{
	CCTest92insertCharDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CPen pen(PS_SOLID, 1, RGB(255, 0, 0));
	CPen *p;
	p = pDC->SelectObject(&pen);
	r.SetRect(100, 100, 300, 130);
	s1 = "asgdvasad";
	pDC->Rectangle(r);
	pDC->TextOutW(101, 105, s1);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest92insertCharView ���

#ifdef _DEBUG
void CCTest92insertCharView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest92insertCharView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest92insertCharDoc* CCTest92insertCharView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest92insertCharDoc)));
	return (CCTest92insertCharDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest92insertCharView ��Ϣ�������


void CCTest92insertCharView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CCHAR a = (CCHAR)nChar;
	CClientDC dc(this);
	if (p.x > 100 && p.x < 300 && p.y>100 && p.y < 130)
	{
		int x = p.x - 100;   
		CSize textsize = dc.GetTextExtent(s1);
		int pointSize = textsize.cx / s1.GetLength();
		int index = x / pointSize;
		if (textsize.cx < 200) {
			s1.Insert(index, a);
			dc.TextOutW(101, 105, s1);
		}
	}
	CView::OnChar(nChar, nRepCnt, nFlags);
}


void CCTest92insertCharView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	p = point;
	CView::OnLButtonDown(nFlags, point);
}
