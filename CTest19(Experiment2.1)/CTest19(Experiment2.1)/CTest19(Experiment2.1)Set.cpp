
// CTest19(Experiment2.1)Set.cpp : CCTest19Experiment21Set 类的实现
//

#include "stdafx.h"
#include "CTest19(Experiment2.1).h"
#include "CTest19(Experiment2.1)Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest19Experiment21Set 实现

// 代码生成在 2020年5月21日, 10:45

IMPLEMENT_DYNAMIC(CCTest19Experiment21Set, CRecordset)

CCTest19Experiment21Set::CCTest19Experiment21Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	column1 = L"";
	m_201812300010 = L"";
	column2 = L"";
	m_F4 = 0.0;
	m_wsjjpg = L"";
	m_nFields = 5;
	m_nDefaultType = snapshot;
}
//#error 安全问题: 连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
CString CCTest19Experiment21Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x5b66\x751f\x4fe1\x606f\x8868;DBQ=D:\\\x5b66\x751f\x4fe1\x606f\x8868.xls;DefaultDir=D:;DriverId=790;FIL=excel 8.0;MaxBufferSize=2048;PageTimeout=5;");
}

CString CCTest19Experiment21Set::GetDefaultSQL()
{
	return _T("[Sheet1$]");
}

void CCTest19Experiment21Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Text(pFX, _T("[吴世杰]"), column1);
	RFX_Text(pFX, _T("[201812300010]"), m_201812300010);
	RFX_Text(pFX, _T("[计信学院]"), column2);
	RFX_Double(pFX, _T("[F4]"), m_F4);
	RFX_Text(pFX, _T("[wsj#jpg]"), m_wsjjpg);

}
/////////////////////////////////////////////////////////////////////////////
// CCTest19Experiment21Set 诊断

#ifdef _DEBUG
void CCTest19Experiment21Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CCTest19Experiment21Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

