
// CTest17(studentshow2)Set.cpp : CCTest17studentshow2Set ���ʵ��
//

#include "stdafx.h"
#include "CTest17(studentshow2).h"
#include "CTest17(studentshow2)Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest17studentshow2Set ʵ��

// ���������� 2020��5��18��, 15:13

IMPLEMENT_DYNAMIC(CCTest17studentshow2Set, CRecordset)

CCTest17studentshow2Set::CCTest17studentshow2Set(CDatabase* pdb)
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
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CCTest17studentshow2Set::GetDefaultConnect()
{
	return _T("DSN=\x5b66\x751f;DBQ=D:\\\x5b66\x751f\x4fe1\x606f\x8868.xls;DefaultDir=D:;DriverId=790;FIL=excel 8.0;MaxBufferSize=2048;PageTimeout=5;");
}

CString CCTest17studentshow2Set::GetDefaultSQL()
{
	return _T("[Sheet1$]");
}

void CCTest17studentshow2Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Text(pFX, _T("[������]"), column1);
	RFX_Text(pFX, _T("[201812300010]"), m_201812300010);
	RFX_Text(pFX, _T("[����ѧԺ]"), column2);
	RFX_Double(pFX, _T("[F4]"), m_F4);
	RFX_Text(pFX, _T("[wsj#jpg]"), m_wsjjpg);

}
/////////////////////////////////////////////////////////////////////////////
// CCTest17studentshow2Set ���

#ifdef _DEBUG
void CCTest17studentshow2Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CCTest17studentshow2Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

