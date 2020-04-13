
// CTest11.3(ClickEllipseMove)View.cpp : CCTest113ClickEllipseMoveView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest11.3(ClickEllipseMove).h"
#endif

#include "CTest11.3(ClickEllipseMove)Doc.h"
#include "CTest11.3(ClickEllipseMove)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest113ClickEllipseMoveView

IMPLEMENT_DYNCREATE(CCTest113ClickEllipseMoveView, CView)

BEGIN_MESSAGE_MAP(CCTest113ClickEllipseMoveView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_TIMER()
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CCTest113ClickEllipseMoveView ����/����

CCTest113ClickEllipseMoveView::CCTest113ClickEllipseMoveView()
{
	// TODO: �ڴ˴���ӹ������
	r.SetRect(100,300,150,350);
}

CCTest113ClickEllipseMoveView::~CCTest113ClickEllipseMoveView()
{
}

BOOL CCTest113ClickEllipseMoveView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest113ClickEllipseMoveView ����

void CCTest113ClickEllipseMoveView::OnDraw(CDC* pDC)
{
	CCTest113ClickEllipseMoveDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (set == 1)
	{
		SetTimer(1, 50, NULL);
		set = 0;
		this->GetClientRect(&clientRect);
	}
	CRgn rgn;
	rgn.CreateEllipticRgn(r.left,r.top,r.right,r.bottom);
	CBrush brush(RGB(100,100,100));
	pDC->FillRgn(&rgn,&brush);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest113ClickEllipseMoveView ���

#ifdef _DEBUG
void CCTest113ClickEllipseMoveView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest113ClickEllipseMoveView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest113ClickEllipseMoveDoc* CCTest113ClickEllipseMoveView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest113ClickEllipseMoveDoc)));
	return (CCTest113ClickEllipseMoveDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest113ClickEllipseMoveView ��Ϣ�������


void CCTest113ClickEllipseMoveView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = 1;
	CView::OnLButtonDown(nFlags, point);
}


void CCTest113ClickEllipseMoveView::OnTimer(UINT_PTR nIDEvent)
{
	int i = nIDEvent;
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (flag == 1)
	{
		if (r.right >=clientRect.right)
		{
			control = 2;   //2���������˶�
		}
		if (r.left <= clientRect.left)
		{
			control = 1;  //1���������˶�
		}
		if (control == 1)
		{
			r.left += 10;
			r.right += 10;
			Invalidate();
		}
		if (control == 2)
		{
			r.left -= 10;
			r.right -= 10;
			Invalidate();
		}
	}
	CView::OnTimer(nIDEvent);
}


void CCTest113ClickEllipseMoveView::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = 0;
	CView::OnLButtonDblClk(nFlags, point);
}
