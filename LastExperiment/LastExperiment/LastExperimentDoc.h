
// LastExperimentDoc.h : CLastExperimentDoc ��Ľӿ�
//


#pragma once
#include "LastExperimentSet.h"


class CLastExperimentDoc : public CDocument
{
protected: // �������л�����
	CLastExperimentDoc();
	DECLARE_DYNCREATE(CLastExperimentDoc)

// ����
public:
	CLastExperimentSet m_LastExperimentSet;

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
	virtual ~CLastExperimentDoc();
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
public:
	virtual void SetTitle(LPCTSTR lpszTitle);
};
