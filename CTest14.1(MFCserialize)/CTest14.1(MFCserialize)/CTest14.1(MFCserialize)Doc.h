
// CTest14.1(MFCserialize)Doc.h : CCTest141MFCserializeDoc ��Ľӿ�
//


#pragma once


class CCTest141MFCserializeDoc : public CDocument
{
protected: // �������л�����
	CCTest141MFCserializeDoc();
	DECLARE_DYNCREATE(CCTest141MFCserializeDoc)

// ����
public:
	CString s;

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
	virtual ~CCTest141MFCserializeDoc();
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
