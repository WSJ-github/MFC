
// CTest8.2(showCenteralJPG)Doc.h : CCTest82showCenteralJPGDoc ��Ľӿ�
//


#pragma once


class CCTest82showCenteralJPGDoc : public CDocument
{
protected: // �������л�����
	CCTest82showCenteralJPGDoc();
	DECLARE_DYNCREATE(CCTest82showCenteralJPGDoc)

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
	virtual ~CCTest82showCenteralJPGDoc();
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
