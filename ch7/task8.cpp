/*************************************************************************
 *  ����� 7. ����� 8
 * 

 ************************************************************************/
#include<iostream>
using namespace std;
// ����⠭�� �����
const int Seasons = 4;
const char *Snames[Seasons] = {"��᭠", "���", "�ᥭ�", "����"};
// �㭪�� ��� ��������� ���ᨢ� double
void fill(double expenses[]);
// �㭪��, �ᯮ������ ���ᨢ double, �� �� ��������� ���
void show(double expenses[]);
//=========================================================================
int main()
{   
    double expenses[Seasons];
    fill(expenses);
    show(expenses);
    return 0;
}
//-------------------------------------------------------------------------
void fill(double expenses[])
{
    for (int i = 0; i < Seasons; i++)
    {
        cout    << "������ ��室� �� "
                << Snames[i] << ": ";
        cin >> expenses[i];
    }
}
//-------------------------------------------------------------------------
void show(double expenses[])
{
    double total = 0.0;
    cout << endl << "*** � � � � � � � ***" << endl;
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": " << expenses[i] << endl;
        total += expenses[i];
    }
    cout << "��騩 ��室 �� ���: " << total;
}