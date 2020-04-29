
// CTest14.1(MFCserialize)View.cpp : CCTest141MFCserializeView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest14.1(MFCserialize).h"
#endif

#include "CTest14.1(MFCserialize)Doc.h"
#include "CTest14.1(MFCserialize)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest141MFCserializeView

IMPLEMENT_DYNCREATE(CCTest141MFCserializeView, CView)

BEGIN_MESSAGE_MAP(CCTest141MFCserializeView, CView)
	ON_COMMAND(ID_READFILE, &CCTest141MFCserializeView::OnReadfile)
END_MESSAGE_MAP()

// CCTest141MFCserializeView ����/����

CCTest141MFCserializeView::CCTest141MFCserializeView()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest141MFCserializeView::~CCTest141MFCserializeView()
{
}

BOOL CCTest141MFCserializeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest141MFCserializeView ����

void CCTest141MFCserializeView::OnDraw(CDC* pDC)
{
	CCTest141MFCserializeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->TextOutW(200, 200, pDoc->s);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest141MFCserializeView ���

#ifdef _DEBUG
void CCTest141MFCserializeView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest141MFCserializeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest141MFCserializeDoc* CCTest141MFCserializeView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest141MFCserializeDoc)));
	return (CCTest141MFCserializeDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest141MFCserializeView ��Ϣ�������


void CCTest141MFCserializeView::OnReadfile()
{
	CCTest141MFCserializeDoc* pDoc = GetDocument();
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		CString str = cfd.GetPathName();
		CClientDC dc(this);
		pDoc->s = str;
		dc.TextOutW(100, 100, _T("��ѡ����ļ����ļ���Ϊ��") + str);
	}
	// TODO: �ڴ���������������
}
