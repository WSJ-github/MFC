
// CTest18(Experiment3)Doc.h : CCTest18Experiment3Doc ��Ľӿ�
//


#pragma once
#include "CTest18(Experiment3)Set.h"


class CCTest18Experiment3Doc : public CDocument
{
protected: // �������л�����
	CCTest18Experiment3Doc();
	DECLARE_DYNCREATE(CCTest18Experiment3Doc)

// ����
public:
	CCTest18Experiment3Set m_CTest18Experiment3Set;

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
	virtual ~CCTest18Experiment3Doc();
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
