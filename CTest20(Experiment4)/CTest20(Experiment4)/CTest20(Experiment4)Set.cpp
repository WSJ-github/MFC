
// CTest20(Experiment4)Set.cpp : CCTest20Experiment4Set ���ʵ��
//

#include "stdafx.h"
#include "CTest20(Experiment4).h"
#include "CTest20(Experiment4)Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest20Experiment4Set ʵ��

// ���������� 2020��5��25��, 15:45

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
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
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
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[����]"), column1);
	RFX_Long(pFX, _T("[����]"), column2);
	RFX_Text(pFX, _T("[��λ]"), column3);
	RFX_Text(pFX, _T("[��Ƭ]"), column4);
	RFX_Text(pFX, _T("[����]"), column5);
	RFX_Long(pFX, _T("[��н]"), m_1);

}
/////////////////////////////////////////////////////////////////////////////
// CCTest20Experiment4Set ���

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

