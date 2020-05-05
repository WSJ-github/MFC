
// CTest16(ConnectTofile.xsl)Set.cpp : CCTest16ConnectTofilexslSet ���ʵ��
//

#include "stdafx.h"
#include "CTest16(ConnectTofile.xsl).h"
#include "CTest16(ConnectTofile.xsl)Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest16ConnectTofilexslSet ʵ��

// ���������� 2020��5��5��, 16:19

IMPLEMENT_DYNAMIC(CCTest16ConnectTofilexslSet, CRecordset)

CCTest16ConnectTofilexslSet::CCTest16ConnectTofilexslSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	column1 = L"";
	m_201812300010 = L"";
	m_F3 = 0.0;
	m_nFields = 3;
	m_nDefaultType = snapshot;
}
/*#error ��ȫ����: �����ַ������ܰ������롣*/
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CCTest16ConnectTofilexslSet::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x5b66\x751f\x4fe1\x606f\x8868;DBQ=D:\\\x5b66\x751f\x4fe1\x606f\x8868.xls;DefaultDir=D:;DriverId=790;FIL=excel 8.0;MaxBufferSize=2048;PageTimeout=5;");
}

CString CCTest16ConnectTofilexslSet::GetDefaultSQL()
{
	return _T("[Sheet1$]");
}

void CCTest16ConnectTofilexslSet::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Text(pFX, _T("[������]"), column1);
	RFX_Text(pFX, _T("[201812300010]"), m_201812300010);
	RFX_Double(pFX, _T("[F3]"), m_F3);

}
/////////////////////////////////////////////////////////////////////////////
// CCTest16ConnectTofilexslSet ���

#ifdef _DEBUG
void CCTest16ConnectTofilexslSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CCTest16ConnectTofilexslSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

