
// CTest16(ConnectTofile.xsl)Doc.h : CCTest16ConnectTofilexslDoc ��Ľӿ�
//


#pragma once
#include "CTest16(ConnectTofile.xsl)Set.h"


class CCTest16ConnectTofilexslDoc : public CDocument
{
protected: // �������л�����
	CCTest16ConnectTofilexslDoc();
	DECLARE_DYNCREATE(CCTest16ConnectTofilexslDoc)

// ����
public:
	CCTest16ConnectTofilexslSet m_CTest16ConnectTofilexslSet;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CCTest16ConnectTofilexslDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
