
// CTest17(studentshow2)View.h : CCTest17studentshow2View ��Ľӿ�
//

#pragma once

class CCTest17studentshow2Set;

class CCTest17studentshow2View : public CRecordView
{
protected: // �������л�����
	CCTest17studentshow2View();
	DECLARE_DYNCREATE(CCTest17studentshow2View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_CTEST17STUDENTSHOW2_FORM };
#endif
	CCTest17studentshow2Set* m_pSet;

// ����
public:
	CCTest17studentshow2Doc* GetDocument() const;

// ����
public:
	CString str; //����·��
	CString filename;   //�����ļ���
	int flag;

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CCTest17studentshow2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit3();
	CString name;
	CString nameno;
	CString institute;
	double age;
	afx_msg void OnEnChangeEdit5();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void load();
	afx_msg void OnPaint();
};

#ifndef _DEBUG  // CTest17(studentshow2)View.cpp �еĵ��԰汾
inline CCTest17studentshow2Doc* CCTest17studentshow2View::GetDocument() const
   { return reinterpret_cast<CCTest17studentshow2Doc*>(m_pDocument); }
#endif

