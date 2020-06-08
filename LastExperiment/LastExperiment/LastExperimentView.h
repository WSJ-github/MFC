
// LastExperimentView.h : CLastExperimentView ��Ľӿ�
//

#pragma once

class CLastExperimentSet;

class CLastExperimentView : public CRecordView
{
protected: // �������л�����
	CLastExperimentView();
	DECLARE_DYNCREATE(CLastExperimentView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_LASTEXPERIMENT_FORM };
#endif
	CLastExperimentSet* m_pSet;

// ����
public:
	CLastExperimentDoc* GetDocument() const;

// ����
public:
	CString absolutePath;
	CString filename;
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
	virtual ~CLastExperimentView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedResetButton();
	CString name;
	CString nameno;
	CString major;
	CString sex;
	CString birth;
	CString phone;
	CString home;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void road();
	afx_msg void OnPaint();
	afx_msg void ClickBig();
	afx_msg void OnBnclickedAddButton();
	afx_msg void OnBnClickedRemoveButton();
	afx_msg void OnBnClickedSortButton();
	afx_msg void OnBnClickedFindButton();
	afx_msg void OnBnClickedButton4();
};

#ifndef _DEBUG  // LastExperimentView.cpp �еĵ��԰汾
inline CLastExperimentDoc* CLastExperimentView::GetDocument() const
   { return reinterpret_cast<CLastExperimentDoc*>(m_pDocument); }
#endif

