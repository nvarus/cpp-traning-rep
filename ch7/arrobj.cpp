/*************************************************************************
 * arrobj.cpp -- �㭪�� � ��ꥪ⠬� array
 ************************************************************************/
#include<iostream>
#include<array>
#include<string>
using namespace std;
// ����⠭�� �����
const int Seasons = 4;
const array <string, Seasons> Snames = {"��᭠", "���", "�ᥭ�", "����"};
// �㭪�� ��� ��������� ��ꥪ� array
void fill(array <double, Seasons> *pa);
// �㭪��, �ᯮ������ ��ꥪ� array, �� �� ��������� ���
void show(array <double, Seasons> da);
//=========================================================================
int main()
{
    array <double, Seasons> expenses;
    fill(&expenses);
    show(expenses);
    return 0;
}
//-------------------------------------------------------------------------
void fill(array <double, Seasons> *pa)
{
    for (int i = 0; i < Seasons; i++)
    {
        cout    << "������ ��室� �� "
                << Snames[i] << ": ";
        cin >> (*pa)[i];
    }
}
//-------------------------------------------------------------------------
void show(array <double, Seasons> da)
{
    double total = 0.0;
    cout << endl << "*** � � � � � � � ***" << endl;
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": " << da[i] << endl;
        total += da[i];
    }
    cout << "��騩 ��室 �� ���: " << total;
}