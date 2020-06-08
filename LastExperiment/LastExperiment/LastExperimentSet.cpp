
// LastExperimentSet.cpp : CLastExperimentSet ���ʵ��
//

#include "stdafx.h"
#include "LastExperiment.h"
#include "LastExperimentSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CLastExperimentSet ʵ��

// ���������� 2020��6��1��, 20:13

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
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
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
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[����]"), column1);
	RFX_Text(pFX, _T("[ѧ��]"), column2);
	RFX_Text(pFX, _T("[רҵ]"), column3);
	RFX_Text(pFX, _T("[�Ա�]"), column4);
	RFX_Text(pFX, _T("[��������]"), column5);
	RFX_Text(pFX, _T("[�ֻ�����]"), column6);
	RFX_Text(pFX, _T("[��ͥסַ]"), column7);
	RFX_Text(pFX, _T("[��Ƭ�ļ���]"), column8);

}
/////////////////////////////////////////////////////////////////////////////
// CLastExperimentSet ���

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

