
// CTest19(Experiment2.1)View.h : CCTest19Experiment21View ��Ľӿ�
//

#pragma once

class CCTest19Experiment21Set;

class CCTest19Experiment21View : public CRecordView
{
protected: // �������л�����
	CCTest19Experiment21View();
	DECLARE_DYNCREATE(CCTest19Experiment21View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_CTEST19EXPERIMENT21_FORM };
#endif
	CCTest19Experiment21Set* m_pSet;

// ����
public:
	CCTest19Experiment21Doc* GetDocument() const;

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
	virtual ~CCTest19Experiment21View();
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
	CString institute;
	double age;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void load();
	afx_msg void OnPaint();
	afx_msg void OnBnClickedButton2();
};

#ifndef _DEBUG  // CTest19(Experiment2.1)View.cpp �еĵ��԰汾
inline CCTest19Experiment21Doc* CCTest19Experiment21View::GetDocument() const
   { return reinterpret_cast<CCTest19Experiment21Doc*>(m_pDocument); }
#endif

