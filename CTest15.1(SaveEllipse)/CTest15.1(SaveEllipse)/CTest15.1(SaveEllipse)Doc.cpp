
// CTest15.1(SaveEllipse)Doc.cpp : CCTest151SaveEllipseDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest15.1(SaveEllipse).h"
#endif

#include "CTest15.1(SaveEllipse)Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CCTest151SaveEllipseDoc

IMPLEMENT_DYNCREATE(CCTest151SaveEllipseDoc, CDocument)

BEGIN_MESSAGE_MAP(CCTest151SaveEllipseDoc, CDocument)
END_MESSAGE_MAP()


// CCTest151SaveEllipseDoc ����/����

CCTest151SaveEllipseDoc::CCTest151SaveEllipseDoc()
{
	// TODO: �ڴ����һ���Թ������
	
}

CCTest151SaveEllipseDoc::~CCTest151SaveEllipseDoc()
{
}

BOOL CCTest151SaveEllipseDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CCTest151SaveEllipseDoc ���л�

void CCTest151SaveEllipseDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
	ary.Serialize(ar);
}

#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void CCTest151SaveEllipseDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// �޸Ĵ˴����Ի����ĵ�����
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// ������������֧��
void CCTest151SaveEllipseDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CCTest151SaveEllipseDoc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// CCTest151SaveEllipseDoc ���

#ifdef _DEBUG
void CCTest151SaveEllipseDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCTest151SaveEllipseDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CCTest151SaveEllipseDoc ����
