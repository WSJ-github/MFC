
// CTest9.1(singleEditor)View.cpp : CCTest91singleEditorView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest9.1(singleEditor).h"
#endif

#include "CTest9.1(singleEditor)Doc.h"
#include "CTest9.1(singleEditor)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest91singleEditorView

IMPLEMENT_DYNCREATE(CCTest91singleEditorView, CView)

BEGIN_MESSAGE_MAP(CCTest91singleEditorView, CView)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CCTest91singleEditorView ����/����

CCTest91singleEditorView::CCTest91singleEditorView()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest91singleEditorView::~CCTest91singleEditorView()
{
	s1 = "";
}

BOOL CCTest91singleEditorView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest91singleEditorView ����

void CCTest91singleEditorView::OnDraw(CDC* pDC)
{
	CCTest91singleEditorDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CPen pen(PS_SOLID, 1, RGB(255, 0, 0));
	CPen *p;
	p = pDC->SelectObject(&pen);
	r.SetRect(100,100,300,130);
	pDC->Rectangle(r);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest91singleEditorView ���

#ifdef _DEBUG
void CCTest91singleEditorView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest91singleEditorView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest91singleEditorDoc* CCTest91singleEditorView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest91singleEditorDoc)));
	return (CCTest91singleEditorDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest91singleEditorView ��Ϣ�������


void CCTest91singleEditorView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CCHAR a=(CCHAR)nChar;
	CClientDC dc(this);
	s1 = s1 + a;
	CSize textsize = dc.GetTextExtent(s1);
	if(textsize.cx<200)
	  dc.TextOutW(101, 105, s1);
	

	CView::OnChar(nChar, nRepCnt, nFlags);
}
