
// CTest19(Experiment2.1)Doc.h : CCTest19Experiment21Doc ��Ľӿ�
//


#pragma once
#include "CTest19(Experiment2.1)Set.h"


class CCTest19Experiment21Doc : public CDocument
{
protected: // �������л�����
	CCTest19Experiment21Doc();
	DECLARE_DYNCREATE(CCTest19Experiment21Doc)

// ����
public:
	CCTest19Experiment21Set m_CTest19Experiment21Set;

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
	virtual ~CCTest19Experiment21Doc();
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
