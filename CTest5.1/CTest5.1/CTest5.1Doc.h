
// CTest5.1Doc.h : CCTest51Doc ��Ľӿ�
//


#pragma once


class CCTest51Doc : public CDocument
{
protected: // �������л�����
	CCTest51Doc();
	DECLARE_DYNCREATE(CCTest51Doc)

// ����
public:
	CPoint c1, c2;   //��������ֱ��¼�������ϽǺ����Ͻǵ�λ����Ϣ
	CPoint c;       //��¼����ƶ������еĵ���Ϣ
	CString s;  //��¼����������λ��
	CRect rect;
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
	virtual ~CCTest51Doc();
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
