/*************************************************************************
 *  ����� 7. ����� 8_1
 * 

 ************************************************************************/
#include<iostream>
using namespace std;
// ����⠭�� �����
const int Seasons = 4;
const char *Snames[Seasons] = {"��᭠", "���", "�ᥭ�", "����"};
struct aDate
{
    double expenses[Seasons];
};
// �㭪�� ��� ��������� ���ᨢ� double
void fill(aDate *pa);
// �㭪��, �ᯮ������ ���ᨢ double, �� �� ��������� ���
void show(aDate expen);
//=========================================================================
int main()
{   
    aDate expen = {10, 20, 30, 40};
    fill(&expen);
    show(expen);
    return 0;
}
//-------------------------------------------------------------------------
void fill(aDate *pa)
{
    for (int i = 0; i < Seasons; i++)
    {
        cout    << "������ ��室� �� "
                << Snames[i] << ": ";
        cin >> pa->expenses[i];
    }
}
//-------------------------------------------------------------------------
void show(aDate expen)
{
    double total = 0.0;
    cout << endl << "*** � � � � � � � ***" << endl;
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": " << expen.expenses[i] << endl;
        total += expen.expenses[i];
    }
    cout << "��騩 ��室 �� ���: " << total;
}