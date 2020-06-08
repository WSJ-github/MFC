
// LastExperimentSet.cpp : CLastExperimentSet 类的实现
//

#include "stdafx.h"
#include "LastExperiment.h"
#include "LastExperimentSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CLastExperimentSet 实现

// 代码生成在 2020年6月1日, 20:13

IMPLEMENT_DYNAMIC(CLastExperimentSet, CRecordset)

CLastExperimentSet::CLastExperimentSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	column1 = L"";
	column2 = L"";
	column3 = L"";
	column4 = L"";
	column5 = L"";
	column6 = L"";
	column7 = L"";
	column8 = L"";
	m_nFields = 9;
	m_nDefaultType = dynaset;
}
//#error 安全问题: 连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
CString CLastExperimentSet::GetDefaultConnect()
{
	return _T("DSN=lastExperment_\x6570\x636e\x6e90;DBQ=D:\\LastStudent.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CLastExperimentSet::GetDefaultSQL()
{
	return _T("[LastStudent]");
}

void CLastExperimentSet::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[姓名]"), column1);
	RFX_Text(pFX, _T("[学号]"), column2);
	RFX_Text(pFX, _T("[专业]"), column3);
	RFX_Text(pFX, _T("[性别]"), column4);
	RFX_Text(pFX, _T("[出生年月]"), column5);
	RFX_Text(pFX, _T("[手机号码]"), column6);
	RFX_Text(pFX, _T("[家庭住址]"), column7);
	RFX_Text(pFX, _T("[相片文件名]"), column8);

}
/////////////////////////////////////////////////////////////////////////////
// CLastExperimentSet 诊断

#ifdef _DEBUG
void CLastExperimentSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CLastExperimentSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

