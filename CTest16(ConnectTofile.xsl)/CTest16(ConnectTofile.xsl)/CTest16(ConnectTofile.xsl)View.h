
// CTest16(ConnectTofile.xsl)View.h : CCTest16ConnectTofilexslView ��Ľӿ�
//

#pragma once

class CCTest16ConnectTofilexslSet;

class CCTest16ConnectTofilexslView : public CRecordView
{
protected: // �������л�����
	CCTest16ConnectTofilexslView();
	DECLARE_DYNCREATE(CCTest16ConnectTofilexslView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_CTEST16CONNECTTOFILEXSL_FORM };
#endif
	CCTest16ConnectTofilexslSet* m_pSet;

// ����
public:
	CCTest16ConnectTofilexslDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CCTest16ConnectTofilexslView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString name;
	CString nameno;
	double phone;
};

#ifndef _DEBUG  // CTest16(ConnectTofile.xsl)View.cpp �еĵ��԰汾
inline CCTest16ConnectTofilexslDoc* CCTest16ConnectTofilexslView::GetDocument() const
   { return reinterpret_cast<CCTest16ConnectTofilexslDoc*>(m_pDocument); }
#endif

