
// CTest20(Experiment4)Set.cpp : CCTest20Experiment4Set 类的实现
//

#include "stdafx.h"
#include "CTest20(Experiment4).h"
#include "CTest20(Experiment4)Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest20Experiment4Set 实现

// 代码生成在 2020年5月25日, 15:45

IMPLEMENT_DYNAMIC(CCTest20Experiment4Set, CRecordset)

CCTest20Experiment4Set::CCTest20Experiment4Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	column1 = L"";
	column2 = 0;
	column3 = L"";
	column4 = L"";
	column5 = L"";
	m_1 = 0;
	m_nFields = 7;
	m_nDefaultType = dynaset;
}
//#error 安全问题: 连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
CString CCTest20Experiment4Set::GetDefaultConnect()
{
	return _T("DSN=work_\x6570\x636e\x6e90;DBQ=D:\\work.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CCTest20Experiment4Set::GetDefaultSQL()
{
	return _T("[work]");
}

void CCTest20Experiment4Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[姓名]"), column1);
	RFX_Long(pFX, _T("[年龄]"), column2);
	RFX_Text(pFX, _T("[岗位]"), column3);
	RFX_Text(pFX, _T("[照片]"), column4);
	RFX_Text(pFX, _T("[工号]"), column5);
	RFX_Long(pFX, _T("[年薪]"), m_1);

}
/////////////////////////////////////////////////////////////////////////////
// CCTest20Experiment4Set 诊断

#ifdef _DEBUG
void CCTest20Experiment4Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CCTest20Experiment4Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

