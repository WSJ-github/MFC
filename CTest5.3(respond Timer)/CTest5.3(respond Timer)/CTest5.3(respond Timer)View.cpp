
// CTest5.3(respond Timer)View.cpp : CCTest53respondTimerView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest5.3(respond Timer).h"
#endif

#include "CTest5.3(respond Timer)Doc.h"
#include "CTest5.3(respond Timer)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest53respondTimerView

IMPLEMENT_DYNCREATE(CCTest53respondTimerView, CView)

BEGIN_MESSAGE_MAP(CCTest53respondTimerView, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CCTest53respondTimerView ����/����

CCTest53respondTimerView::CCTest53respondTimerView()
{
	// TODO: �ڴ˴���ӹ������
	set = 1;
	flag = 1;
	r.SetRect(100, 0, 200, 100);
}

CCTest53respondTimerView::~CCTest53respondTimerView()
{
}

BOOL CCTest53respondTimerView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest53respondTimerView ����

void CCTest53respondTimerView::OnDraw(CDC* pDC)
{
	CCTest53respondTimerDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	pDC->Ellipse(r);
	if (set == 1)
	{
		SetTimer(1, 50, NULL);
		set = 0;
	}
}


// CCTest53respondTimerView ���

#ifdef _DEBUG
void CCTest53respondTimerView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest53respondTimerView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest53respondTimerDoc* CCTest53respondTimerView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest53respondTimerDoc)));
	return (CCTest53respondTimerDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest53respondTimerView ��Ϣ�������


void CCTest53respondTimerView::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect clientrect;
	GetClientRect(&clientrect);
	int i = nIDEvent;
	if (r.bottom <= clientrect.bottom&&flag ==1)
	{
		r.top += 5;
		r.bottom += 5;
		if (r.bottom > clientrect.bottom) flag = 0;
	}
	else if (flag==0&&r.top>0)
	{
		r.top -= 5;
		r.bottom -= 5;
		if (r.top <= 0) flag = 1;
	}
	Invalidate();
	CView::OnTimer(nIDEvent);
}
