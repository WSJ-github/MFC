
// CTest6.1(changed ellipse)View.cpp : CCTest61changedellipseView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest6.1(changed ellipse).h"
#endif

#include "CTest6.1(changed ellipse)Doc.h"
#include "CTest6.1(changed ellipse)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest61changedellipseView

IMPLEMENT_DYNCREATE(CCTest61changedellipseView, CView)

BEGIN_MESSAGE_MAP(CCTest61changedellipseView, CView)
	ON_COMMAND(ID_CIRCULAR1, &CCTest61changedellipseView::OnCircular1)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CCTest61changedellipseView ����/����

CCTest61changedellipseView::CCTest61changedellipseView()
{
	// TODO: �ڴ˴���ӹ������
	/*GetClientRect(&clientrect);   //���ܷ��ڹ��캯������
	//centerx = (clientrect.right) /2;
	//centery =(clientrect.bottom) / 2;
	center = clientrect.CenterPoint();
	r.SetRect((center.x - 100), (center.y - 100),( center.x + 100), (center.y + 100));*/
	set = true;
	flag = 0;
}

CCTest61changedellipseView::~CCTest61changedellipseView()
{
}

BOOL CCTest61changedellipseView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest61changedellipseView ����

void CCTest61changedellipseView::OnDraw(CDC* pDC)
{
	CCTest61changedellipseDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (flag == 1) {
		if (set)
		{
			GetClientRect(&clientrect);
			center = clientrect.CenterPoint();
			r.SetRect((center.x - 100), (center.y - 100), (center.x + 100), (center.y + 100));
			SetTimer(1, 50, NULL);
			set = false;
		}
		CPen pen(PS_SOLID, 5, RGB(rand() % 255, rand() % 255, rand() % 255));
		CPen *p;
		p = pDC->SelectObject(&pen);
		pDC->Ellipse(r);
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest61changedellipseView ���

#ifdef _DEBUG
void CCTest61changedellipseView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest61changedellipseView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest61changedellipseDoc* CCTest61changedellipseView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest61changedellipseDoc)));
	return (CCTest61changedellipseDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest61changedellipseView ��Ϣ�������


void CCTest61changedellipseView::OnCircular1()
{
	// ����ǲ˵��н����С԰�ĳ���
	flag = 1;
	Invalidate();
	set = true;
}


void CCTest61changedellipseView::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int i = nIDEvent;
	CClientDC dc(this);
	if (r.bottom <= clientrect.bottom&&r.left>=0)
	{
		r.top -= 10;
		r.left -= 10;
		r.bottom += 10;
		r.right += 10;
		/*CPen pen(PS_SOLID, 5, RGB(rand() % 255, rand() % 255, rand() % 255));
		CPen *p;
		p = dc.SelectObject(&pen);
		dc.Ellipse(r);*/
		Invalidate();
	}
	else 
	{
		flag = 0;
		KillTimer(i);
		r.SetRect((center.x - 100), (center.y - 100), (center.x + 100), (center.y + 100));
	}
	CView::OnTimer(nIDEvent);
}
