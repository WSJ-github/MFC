
// CTest8.2(showCenteralJPG)View.cpp : CCTest82showCenteralJPGView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest8.2(showCenteralJPG).h"
#endif

#include "CTest8.2(showCenteralJPG)Doc.h"
#include "CTest8.2(showCenteralJPG)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest82showCenteralJPGView

IMPLEMENT_DYNCREATE(CCTest82showCenteralJPGView, CView)

BEGIN_MESSAGE_MAP(CCTest82showCenteralJPGView, CView)
	ON_COMMAND(ID_FILE_OPEN, &CCTest82showCenteralJPGView::OnFileOpen)
END_MESSAGE_MAP()

// CCTest82showCenteralJPGView ����/����

CCTest82showCenteralJPGView::CCTest82showCenteralJPGView()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest82showCenteralJPGView::~CCTest82showCenteralJPGView()
{
}

BOOL CCTest82showCenteralJPGView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest82showCenteralJPGView ����

void CCTest82showCenteralJPGView::OnDraw(CDC* /*pDC*/)
{
	CCTest82showCenteralJPGDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest82showCenteralJPGView ���

#ifdef _DEBUG
void CCTest82showCenteralJPGView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest82showCenteralJPGView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest82showCenteralJPGDoc* CCTest82showCenteralJPGView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest82showCenteralJPGDoc)));
	return (CCTest82showCenteralJPGDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest82showCenteralJPGView ��Ϣ�������


void CCTest82showCenteralJPGView::OnFileOpen()
{
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	CRect rect;
	int sx, sy,w,h; //sx,sy��ͼƬ���ϽǶϵ磻w��h��ͼƬ�Ŀ��
	float jpg, client;
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		CImage img;
		img.Load(filename);
		GetClientRect(&rect);
		client = rect.Width() / rect.Height();   //�ͻ����Ŀ�߱�
		jpg = img.GetWidth() / img.GetHeight();  //ͼƬ�Ŀ�߱�
		if (client > jpg)   //˵���ͻ������ͼƬ�Ͽ�
		{
			h= rect.Height();  //��ʱͼƬ�ĸ߶�Ӧ����Ӧ�ͻ����ĸ߶�
			w = img.GetWidth();  //ͼƬ�Ŀ���
			sx = (rect.right - img.GetWidth()) / 2;
			sy = 0;
		}
		else 
		{
			h= img.GetHeight();
			w = rect.Width();
			sx = 0;
			sy= (rect.bottom - img.GetHeight()) / 2;
		}
		img.Draw(dc.m_hDC, sx, sy, w, h);
	}
	// TODO: �ڴ���������������
}
