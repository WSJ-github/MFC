
// CTest16(DynamicAndStaticLinkLibraries)Doc.h : CCTest16DynamicAndStaticLinkLibrariesDoc ��Ľӿ�
//


#pragma once


class CCTest16DynamicAndStaticLinkLibrariesDoc : public CDocument
{
protected: // �������л�����
	CCTest16DynamicAndStaticLinkLibrariesDoc();
	DECLARE_DYNCREATE(CCTest16DynamicAndStaticLinkLibrariesDoc)

// ����
public:

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CCTest16DynamicAndStaticLinkLibrariesDoc();
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
