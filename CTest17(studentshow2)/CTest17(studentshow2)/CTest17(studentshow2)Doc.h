
// CTest17(studentshow2)Doc.h : CCTest17studentshow2Doc ��Ľӿ�
//


#pragma once
#include "CTest17(studentshow2)Set.h"


class CCTest17studentshow2Doc : public CDocument
{
protected: // �������л�����
	CCTest17studentshow2Doc();
	DECLARE_DYNCREATE(CCTest17studentshow2Doc)

// ����
public:
	CCTest17studentshow2Set m_CTest17studentshow2Set;

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
	virtual ~CCTest17studentshow2Doc();
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
