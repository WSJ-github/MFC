
// CTest9.3(moreLineEditor)View.cpp : CCTest93moreLineEditorView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest9.3(moreLineEditor).h"
#endif

#include "CTest9.3(moreLineEditor)Doc.h"
#include "CTest9.3(moreLineEditor)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest93moreLineEditorView

IMPLEMENT_DYNCREATE(CCTest93moreLineEditorView, CView)

BEGIN_MESSAGE_MAP(CCTest93moreLineEditorView, CView)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CCTest93moreLineEditorView ����/����

CCTest93moreLineEditorView::CCTest93moreLineEditorView()
{
	// TODO: �ڴ˴���ӹ������
}

CCTest93moreLineEditorView::~CCTest93moreLineEditorView()
{
}

BOOL CCTest93moreLineEditorView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest93moreLineEditorView ����

void CCTest93moreLineEditorView::OnDraw(CDC* pDC)
{
	CCTest93moreLineEditorDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CPen pen(PS_SOLID, 1, RGB(255, 0, 0));
	CPen *p;
	p = pDC->SelectObject(&pen);
	r.SetRect(100, 100, 300, 150);
	pDC->Rectangle(r);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest93moreLineEditorView ���

#ifdef _DEBUG
void CCTest93moreLineEditorView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest93moreLineEditorView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest93moreLineEditorDoc* CCTest93moreLineEditorView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest93moreLineEditorDoc)));
	return (CCTest93moreLineEditorDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest93moreLineEditorView ��Ϣ�������


void CCTest93moreLineEditorView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CCHAR a = (CCHAR)nChar;
	CClientDC dc(this);
	s1 = s1 + a;
	CSize textsize = dc.GetTextExtent(s1);
	//s1.Format(_T("%d"), (int)textsize.cy);    //��ʼ�ַ�����cyΪ20
	if (textsize.cx<195)
		dc.TextOutW(101, y, s1);
	else if (textsize.cx >= 195&&cy<40)
	{
		s1 = "";
		y = y + 20;
		dc.TextOutW(101, y, s1);
		cy =cy + 20;
	}
	CView::OnChar(nChar, nRepCnt, nFlags);
}
