
// CTest20(Experiment4)Doc.h : CCTest20Experiment4Doc ��Ľӿ�
//


#pragma once
#include "CTest20(Experiment4)Set.h"


class CCTest20Experiment4Doc : public CDocument
{
protected: // �������л�����
	CCTest20Experiment4Doc();
	DECLARE_DYNCREATE(CCTest20Experiment4Doc)

// ����
public:
	CCTest20Experiment4Set m_CTest20Experiment4Set;

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
	virtual ~CCTest20Experiment4Doc();
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
