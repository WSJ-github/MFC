
// CTest16(DynamicAndStaticLinkLibraries)Doc.cpp : CCTest16DynamicAndStaticLinkLibrariesDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest16(DynamicAndStaticLinkLibraries).h"
#endif

#include "CTest16(DynamicAndStaticLinkLibraries)Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CCTest16DynamicAndStaticLinkLibrariesDoc

IMPLEMENT_DYNCREATE(CCTest16DynamicAndStaticLinkLibrariesDoc, CDocument)

BEGIN_MESSAGE_MAP(CCTest16DynamicAndStaticLinkLibrariesDoc, CDocument)
END_MESSAGE_MAP()


// CCTest16DynamicAndStaticLinkLibrariesDoc ����/����

CCTest16DynamicAndStaticLinkLibrariesDoc::CCTest16DynamicAndStaticLinkLibrariesDoc()
{
	// TODO: �ڴ����һ���Թ������

}

CCTest16DynamicAndStaticLinkLibrariesDoc::~CCTest16DynamicAndStaticLinkLibrariesDoc()
{
}

BOOL CCTest16DynamicAndStaticLinkLibrariesDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CCTest16DynamicAndStaticLinkLibrariesDoc ���л�

void CCTest16DynamicAndStaticLinkLibrariesDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}

#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void CCTest16DynamicAndStaticLinkLibrariesDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void CCTest16DynamicAndStaticLinkLibrariesDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CCTest16DynamicAndStaticLinkLibrariesDoc::SetSearchContent(const CString& value)
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

// CCTest16DynamicAndStaticLinkLibrariesDoc ���

#ifdef _DEBUG
void CCTest16DynamicAndStaticLinkLibrariesDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCTest16DynamicAndStaticLinkLibrariesDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CCTest16DynamicAndStaticLinkLibrariesDoc ����
