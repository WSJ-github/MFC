
// CTest10.1(showDialogOut)View.cpp : CCTest101showDialogOutView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest10.1(showDialogOut).h"
#include"Dialog1.h"
#endif

#include "CTest10.1(showDialogOut)Doc.h"
#include "CTest10.1(showDialogOut)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest101showDialogOutView

IMPLEMENT_DYNCREATE(CCTest101showDialogOutView, CView)

BEGIN_MESSAGE_MAP(CCTest101showDialogOutView, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CCTest101showDialogOutView ����/����

CCTest101showDialogOutView::CCTest101showDialogOutView()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest101showDialogOutView::~CCTest101showDialogOutView()
{
}

BOOL CCTest101showDialogOutView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest101showDialogOutView ����

void CCTest101showDialogOutView::OnDraw(CDC* pDC)
{
	CCTest101showDialogOutDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest101showDialogOutView ���

#ifdef _DEBUG
void CCTest101showDialogOutView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest101showDialogOutView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest101showDialogOutDoc* CCTest101showDialogOutView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest101showDialogOutDoc)));
	return (CCTest101showDialogOutDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest101showDialogOutView ��Ϣ�������


void CCTest101showDialogOutView::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Dialog1 log;
	int t=log.DoModal();
	CClientDC dc(this);
	if (t=IDCLOSE)
	{
		CString s = _T("�����˳��Ի���");
		dc.TextOutW(rand()%500, rand()%500, s);
	}
	CView::OnLButtonDblClk(nFlags, point);
}
