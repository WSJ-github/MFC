
// CTest20(Experiment4)View.h : CCTest20Experiment4View ��Ľӿ�
//

#pragma once

class CCTest20Experiment4Set;

class CCTest20Experiment4View : public CRecordView
{
protected: // �������л�����
	CCTest20Experiment4View();
	DECLARE_DYNCREATE(CCTest20Experiment4View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_CTEST20EXPERIMENT4_FORM };
#endif
	CCTest20Experiment4Set* m_pSet;

// ����
public:
	CCTest20Experiment4Doc* GetDocument() const;

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
	virtual ~CCTest20Experiment4View();
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
	long age;
	CString post;
	CString workno;
	long salary;
	CFont font; //���������С
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void road();
	afx_msg void OnPaint();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnSelect();
	afx_msg void OnSort();
	afx_msg void OnTraverse();
	afx_msg void OnReset();
};

#ifndef _DEBUG  // CTest20(Experiment4)View.cpp �еĵ��԰汾
inline CCTest20Experiment4Doc* CCTest20Experiment4View::GetDocument() const
   { return reinterpret_cast<CCTest20Experiment4Doc*>(m_pDocument); }
#endif

