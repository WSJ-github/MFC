
// CTest5.2(control rect)View.cpp : CCTest52controlrectView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest5.2(control rect).h"
#endif

#include "CTest5.2(control rect)Doc.h"
#include "CTest5.2(control rect)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest52controlrectView

IMPLEMENT_DYNCREATE(CCTest52controlrectView, CView)

BEGIN_MESSAGE_MAP(CCTest52controlrectView, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CCTest52controlrectView ����/����

CCTest52controlrectView::CCTest52controlrectView()
{
	// TODO: �ڴ˴���ӹ������
	r.SetRect(200, 200, 300, 300);
}

CCTest52controlrectView::~CCTest52controlrectView()
{
}

BOOL CCTest52controlrectView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest52controlrectView ����

void CCTest52controlrectView::OnDraw(CDC* pDC)
{
	CCTest52controlrectDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(r);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest52controlrectView ���

#ifdef _DEBUG
void CCTest52controlrectView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest52controlrectView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest52controlrectDoc* CCTest52controlrectView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest52controlrectDoc)));
	return (CCTest52controlrectDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest52controlrectView ��Ϣ�������


void CCTest52controlrectView::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect clientrect;
	GetClientRect(&clientrect);
	switch (nChar)
	{
	case VK_LEFT:
		if (r.left > 0)
		{
			r.left -= 5;
			r.right -= 5;
		}
		break;
	case VK_RIGHT:
		if (r.right<=clientrect.right)
		{
			r.left += 5;
			r.right += 5;
		}
		break;
	case VK_UP:
		if (r.top >= clientrect.top)
		{
			r.top -= 5;
			r.bottom -= 5;
		}
		break;
	case VK_DOWN:
		if (r.bottom <= clientrect.bottom)
		{
			r.top += 5;
			r.bottom += 5;
		}
		break;
	case VK_HOME:
		if (r.top >= clientrect.top&&r.left > 0)
		{
			r.top -= 5;
			r.left -= 5;
		}
		break;
	case VK_END:
		if (r.bottom <= clientrect.bottom&&r.right <= clientrect.right)
		{
			r.bottom += 5;
			r.right += 5;
		}
		break;
	}
	
	Invalidate();
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CCTest52controlrectView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	r.SetRect(200, 200, 300, 300);
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
