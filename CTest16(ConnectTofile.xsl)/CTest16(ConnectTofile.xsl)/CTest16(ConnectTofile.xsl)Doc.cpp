
// CTest16(ConnectTofile.xsl)Doc.cpp : CCTest16ConnectTofilexslDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest16(ConnectTofile.xsl).h"
#endif

#include "CTest16(ConnectTofile.xsl)Set.h"
#include "CTest16(ConnectTofile.xsl)Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CCTest16ConnectTofilexslDoc

IMPLEMENT_DYNCREATE(CCTest16ConnectTofilexslDoc, CDocument)

BEGIN_MESSAGE_MAP(CCTest16ConnectTofilexslDoc, CDocument)
END_MESSAGE_MAP()


// CCTest16ConnectTofilexslDoc ����/����

CCTest16ConnectTofilexslDoc::CCTest16ConnectTofilexslDoc()
{
	// TODO: �ڴ����һ���Թ������

}

CCTest16ConnectTofilexslDoc::~CCTest16ConnectTofilexslDoc()
{
}

BOOL CCTest16ConnectTofilexslDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}



#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void CCTest16ConnectTofilexslDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void CCTest16ConnectTofilexslDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CCTest16ConnectTofilexslDoc::SetSearchContent(const CString& value)
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

// CCTest16ConnectTofilexslDoc ���

#ifdef _DEBUG
void CCTest16ConnectTofilexslDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCTest16ConnectTofilexslDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CCTest16ConnectTofilexslDoc ����
