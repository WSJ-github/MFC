
// CTest16(ConnectTofile.xsl)View.h : CCTest16ConnectTofilexslView 类的接口
//

#pragma once

class CCTest16ConnectTofilexslSet;

class CCTest16ConnectTofilexslView : public CRecordView
{
protected: // 仅从序列化创建
	CCTest16ConnectTofilexslView();
	DECLARE_DYNCREATE(CCTest16ConnectTofilexslView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_CTEST16CONNECTTOFILEXSL_FORM };
#endif
	CCTest16ConnectTofilexslSet* m_pSet;

// 特性
public:
	CCTest16ConnectTofilexslDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~CCTest16ConnectTofilexslView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString name;
	CString nameno;
	double phone;
};

#ifndef _DEBUG  // CTest16(ConnectTofile.xsl)View.cpp 中的调试版本
inline CCTest16ConnectTofilexslDoc* CCTest16ConnectTofilexslView::GetDocument() const
   { return reinterpret_cast<CCTest16ConnectTofilexslDoc*>(m_pDocument); }
#endif

