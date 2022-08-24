/*******************************************************************************
 * fun_ptr.cpp -- �ணࠬ�� ������������� �ᯮ�짮����� 㪠��⥫�� �� �㭪��
 * estimate() - �㭪��, ����� �業����� ������ �६���, ����室����� ���
 * ����ᠭ�� ����. � ����⢥ ��㬥��, ��� �ਭ����� 㪠��⥫� �� �㭪��,
 * �।�⠢������ ᮡ�� ������ �業�� ᫮����� ����.
 ******************************************************************************/
#include<iostream>
double betsy(int);
double pam(int);
double alx(int lns);
// ��ன ��㬥�� - 㪠��⥫� �� �㭪�� double,
// ����� �ਭ����� ��㬥�� ⨯� int
void estimate(int lines, double (*pf)(int));
//=============================================================================
int main()
{
    using namespace std;
    int code;
    cout << "������ ������⢮ ��ப ����: ";
    cin >> code;
    cout << "�業�� Betsy �����⬮�:" << endl;
    estimate(code, betsy);
    cout << "�業�� Pam �����⬮�:" << endl;
    estimate(code, pam);
    cout << "�業�� Alx �����⬮�:" << endl;
    estimate(code, alx);
    return 0;
}
//------------------------------------------------------------------------------
// �ਭ����� 㪠��⥫� �� �㭪��, � ��뢠�� ��� �㭪��
void estimate(int lines, double (*pf)(int))
{
    using namespace std;
    cout    << lines << " ��ப ���ॡ��� "
            << (*pf)(lines) << " �ᮢ ࠡ���." << endl;
}
//------------------------------------------------------------------------------
// ������ betsy
double betsy(int lns)
{
    return 0.05 * lns;
}
//------------------------------------------------------------------------------
// ������ pam
double pam(int lns)
{
    return 0.03 * lns + 0.0004 * lns * lns;
}
//-------------------------------------------------------------------------------
// ������ alx
double alx(int lns)
{
    const double figur = 0.05;
    const double rest = 0.005;
    double total = lns * lns * rest * figur;
    return total;
}
