
// CTest17(studentshow)Doc.h : CCTest17studentshowDoc ��Ľӿ�
//


#pragma once
#include "CTest17(studentshow)Set.h"


class CCTest17studentshowDoc : public CDocument
{
protected: // �������л�����
	CCTest17studentshowDoc();
	DECLARE_DYNCREATE(CCTest17studentshowDoc)

// ����
public:
	CCTest17studentshowSet m_CTest17studentshowSet;

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
	virtual ~CCTest17studentshowDoc();
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
