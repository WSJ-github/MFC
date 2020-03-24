
// CTest7.1(show.NameAndGraph)View.cpp : CCTest71showNameAndGraphView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest7.1(show.NameAndGraph).h"
#endif

#include "CTest7.1(show.NameAndGraph)Doc.h"
#include "CTest7.1(show.NameAndGraph)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest71showNameAndGraphView

IMPLEMENT_DYNCREATE(CCTest71showNameAndGraphView, CView)

BEGIN_MESSAGE_MAP(CCTest71showNameAndGraphView, CView)
	ON_COMMAND(ID_showName, &CCTest71showNameAndGraphView::Onshowname)
	ON_COMMAND(ID_showLine, &CCTest71showNameAndGraphView::Onshowline)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_COMMAND(ID_showRectangle, &CCTest71showNameAndGraphView::Onshowrectangle)
	ON_COMMAND(ID_showEllipse, &CCTest71showNameAndGraphView::Onshowellipse)
END_MESSAGE_MAP()

// CCTest71showNameAndGraphView ����/����

CCTest71showNameAndGraphView::CCTest71showNameAndGraphView()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest71showNameAndGraphView::~CCTest71showNameAndGraphView()
{
	flag1 = 0;
	flag2 = 0;
	flag3 = 0;
}

BOOL CCTest71showNameAndGraphView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest71showNameAndGraphView ����

void CCTest71showNameAndGraphView::OnDraw(CDC* pDC)
{
	CCTest71showNameAndGraphDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;


	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest71showNameAndGraphView ���

#ifdef _DEBUG
void CCTest71showNameAndGraphView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest71showNameAndGraphView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest71showNameAndGraphDoc* CCTest71showNameAndGraphView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest71showNameAndGraphDoc)));
	return (CCTest71showNameAndGraphDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest71showNameAndGraphView ��Ϣ�������


void CCTest71showNameAndGraphView::Onshowname()
{
	CClientDC dc(this);
	CString s = _T("������");
	dc.TextOutW(200,200,s);
	// TODO: �ڴ���������������
}


void CCTest71showNameAndGraphView::Onshowline()
{
	flag1 = 1;
	flag2 = 0;
	flag3 = 0;
	// TODO: �ڴ���������������
}


void CCTest71showNameAndGraphView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (flag1 == 1||flag2==1||flag3==1)
	{
		p1 = point;
	}
	CView::OnLButtonDown(nFlags, point);
}


void CCTest71showNameAndGraphView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	if (flag1 == 1)
	{
		p2 = point;
		dc.MoveTo(p1);
		dc.LineTo(p2);
	}
	if (flag2 == 1)
	{
		p2 = point;
		CRect r;
		r.SetRect(p1,p2);
		dc.Rectangle(r);
	}
	if (flag3 == 1)
	{
		p2 = point;
		CRect r;
		r.SetRect(p1, p2);
		dc.Ellipse(r);
	}
	CView::OnLButtonUp(nFlags, point);
}


void CCTest71showNameAndGraphView::Onshowrectangle()
{
	flag2 = 1;
	flag1 = 0;
	flag3 = 0;
	// TODO: �ڴ���������������
}


void CCTest71showNameAndGraphView::Onshowellipse()
{
	flag3 = 1;
	flag1 = 0;
	flag2 = 0;

	// TODO: �ڴ���������������
}
