
// CTest17(studentshow)Set.cpp : CCTest17studentshowSet 类的实现
//

#include "stdafx.h"
#include "CTest17(studentshow).h"
#include "CTest17(studentshow)Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest17studentshowSet 实现

// 代码生成在 2020年5月13日, 0:12

IMPLEMENT_DYNAMIC(CCTest17studentshowSet, CRecordset)

CCTest17studentshowSet::CCTest17studentshowSet(CDatabase* pdb)
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
CString CCTest17studentshowSet::GetDefaultConnect()
{
	return _T("DSN=student;DBQ=D:\\\x5b66\x751f\x8868.xls;DefaultDir=D:;DriverId=790;FIL=excel 8.0;MaxBufferSize=2048;PageTimeout=5;");
}

CString CCTest17studentshowSet::GetDefaultSQL()
{
	return _T("[Sheet1$]");
}

void CCTest17studentshowSet::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
//C:\\\\Users\\\\杰哥\\\\Pictures\\\\Camera Roll\\\\wsj#
	RFX_Text(pFX, _T("[姓名]"), column1);
	RFX_Text(pFX, _T("[学号]"), m_201812300010);
	RFX_Text(pFX, _T("[学院]"), column2);
	RFX_Double(pFX, _T("[年龄]"), m_F4);
	RFX_Text(pFX, _T("[图片路径]"), m_wsjjpg);

}
/////////////////////////////////////////////////////////////////////////////
// CCTest17studentshowSet 诊断

#ifdef _DEBUG
void CCTest17studentshowSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CCTest17studentshowSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

