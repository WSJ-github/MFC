
// CTest12.1(ClientShowFilename)View.cpp : CCTest121ClientShowFilenameView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest12.1(ClientShowFilename).h"
#endif

#include "CTest12.1(ClientShowFilename)Doc.h"
#include "CTest12.1(ClientShowFilename)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"editDialog.h"
#include"listDialog.h"

// CCTest121ClientShowFilenameView

IMPLEMENT_DYNCREATE(CCTest121ClientShowFilenameView, CView)

BEGIN_MESSAGE_MAP(CCTest121ClientShowFilenameView, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_EDITSHOW, &CCTest121ClientShowFilenameView::OnEditshow)
	ON_COMMAND(ID_LISTSHOW, &CCTest121ClientShowFilenameView::OnListshow)
END_MESSAGE_MAP()

// CCTest121ClientShowFilenameView ����/����

CCTest121ClientShowFilenameView::CCTest121ClientShowFilenameView()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest121ClientShowFilenameView::~CCTest121ClientShowFilenameView()
{
}

BOOL CCTest121ClientShowFilenameView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest121ClientShowFilenameView ����

void CCTest121ClientShowFilenameView::OnDraw(CDC* pDC)
{
	CCTest121ClientShowFilenameDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->TextOutW(10, 10, _T("���˫�����ļ��Ի���"));
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest121ClientShowFilenameView ���

#ifdef _DEBUG
void CCTest121ClientShowFilenameView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest121ClientShowFilenameView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest121ClientShowFilenameDoc* CCTest121ClientShowFilenameView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest121ClientShowFilenameDoc)));
	return (CCTest121ClientShowFilenameDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest121ClientShowFilenameView ��Ϣ�������


void CCTest121ClientShowFilenameView::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CFileDialog cdf(true);
	int  r = cdf.DoModal();
	if (r == IDOK)
	{
		filename = cdf.GetFileName();
		CClientDC dc(this);
		dc.TextOutW(200, 200, filename);
	}
	CView::OnLButtonDblClk(nFlags, point);
}


void CCTest121ClientShowFilenameView::OnEditshow()
{
	editDialog log;
	log.editS = filename;
	log.DoModal();
	// TODO: �ڴ���������������
}


void CCTest121ClientShowFilenameView::OnListshow()
{
	listDialog listlog;
	listlog.ls = filename;
	listlog.DoModal();
	// TODO: �ڴ���������������
}
