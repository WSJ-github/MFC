
// CTest14.2(readPictureAndShow)View.cpp : CCTest142readPictureAndShowView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest14.2(readPictureAndShow).h"
#include"Dialog1.h"
#endif

#include "CTest14.2(readPictureAndShow)Doc.h"
#include "CTest14.2(readPictureAndShow)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest142readPictureAndShowView

IMPLEMENT_DYNCREATE(CCTest142readPictureAndShowView, CView)

BEGIN_MESSAGE_MAP(CCTest142readPictureAndShowView, CView)
	ON_COMMAND(ID_SELECTPIC, &CCTest142readPictureAndShowView::OnSelectpic)
	ON_COMMAND(ID_SHOWPIC, &CCTest142readPictureAndShowView::OnShowpic)
END_MESSAGE_MAP()

// CCTest142readPictureAndShowView ����/����

CCTest142readPictureAndShowView::CCTest142readPictureAndShowView()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest142readPictureAndShowView::~CCTest142readPictureAndShowView()
{
}

BOOL CCTest142readPictureAndShowView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest142readPictureAndShowView ����

void CCTest142readPictureAndShowView::OnDraw(CDC* pDC)
{
	CCTest142readPictureAndShowDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->TextOutW(100, 100, pDoc->filename);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest142readPictureAndShowView ���

#ifdef _DEBUG
void CCTest142readPictureAndShowView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest142readPictureAndShowView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest142readPictureAndShowDoc* CCTest142readPictureAndShowView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest142readPictureAndShowDoc)));
	return (CCTest142readPictureAndShowDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest142readPictureAndShowView ��Ϣ�������


void CCTest142readPictureAndShowView::OnSelectpic()
{
	CCTest142readPictureAndShowDoc* pDoc = GetDocument();
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		CString str = cfd.GetPathName();
		CClientDC dc(this);
		pDoc->filename = str;
		dc.TextOutW(100, 100, _T("��ѡ����ļ����ļ���Ϊ��") + str);
	}
	// TODO: �ڴ���������������
}


void CCTest142readPictureAndShowView::OnShowpic()
{
	CCTest142readPictureAndShowDoc* pDoc = GetDocument();
	if (pDoc->filename != _T(""))
	{
		Dialog1 dia;
		dia.name = pDoc->filename;
		int r=dia.DoModal();
	}
	if (pDoc->filename == _T(""))
	{
		AfxMessageBox(_T("��ѡ��ͼƬ·��"));
		OnSelectpic();
		if (pDoc->filename != _T(""))
		{
			Dialog1 dia;
			dia.name = pDoc->filename;
			int r = dia.DoModal();
		}
	}

	// TODO: �ڴ���������������
}
