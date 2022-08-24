/**     ����� 6, ����� 6
 * ����ன� �ணࠬ��, ����� ��᫥������ �����⢮����� � ����⢮ ����� ����⥫��� ���.
 * ��� ������ ����訢��� � ���짮��⥫� ������⢮ ��業�⮢, � ��⥬ �ਣ����� �������
 * �� ����� � �㬬� �����⢮����� �� �������. ���ଠ�� ������ ��࠭����� � �������᪨
 * �뤥�塞�� ���ᨢ� �������. ������ ������� ������ ����� ��� 童��: ᨬ����� ���ᨢ
 * (��� ��ꥪ� string) ��� �࠭���� ����� � ��६�����-童� ⨯� double ? ��� �࠭���� �㬬�
 * �����⢮�����. ��᫥ �⥭�� ��� ������ �ணࠬ�� ������ �⮡ࠦ��� ����� � �㬬� �����⢮�����
 * ��, �� �� ������� $10 000 � �����. ��� ᯨ᮪ ������ ���� ���������� ��⪮� ?Grand Patrons?.
 * ��᫥ �⮣� �ணࠬ�� ������ �뤠�� ᯨ᮪ ��⠫��� ���⢮��⥫��. �� ������ ���� ���������� ?Patrons?.
 * �᫨ � ����� �� ���� ��⥣�਩ �� �������� ������, �ணࠬ�� ������ �������� ?none?.
 * ������ �⮡ࠦ���� ���� ��⥣�਩, ������� ��㣮� ���஢�� ������ �� �㦭�.
 */
#include<iostream>
#include<string>
using namespace std;
const double Grand = 10000;
int Max;
struct maecenas { 
    string Name;
    double Summ;
};


int main(void)
{
    cout << "������ ������⢮ ��業�⮢: ";
    cin >> Max;
    maecenas *Donat = new maecenas [Max];

    // 横� ��� ���������� ���ᨢ� �������
    for (int i = 0; i < Max; i++)
    {
        cout << "��業�� �" << i + 1 << "\n���: ";
        cin.get();
        getline(cin, Donat[i].Name);
        cout << "�㬬�: ";
        cin >> Donat[i].Summ;
    }
    cout << endl;
    int GrPat = 0;           // ���� Grand Patrons
    cout    << "Grand Patrons:\n";
    for (int i = 0; i < Max; i++)
    {
        if (Donat[i].Summ >= Grand)
        {
            cout    << Donat[i].Name << "\t"
                    << Donat[i].Summ << endl;
            GrPat++;
        }
    }
    if ( GrPat < 1)
        cout << "none\n";

    cout << endl;
    int Pat = 0;           // ���� Patrons
    cout    << "Patrons:\n";
    for (int i = 0; i < Max; i++)
    {
        if (Donat[i].Summ < Grand)
        {
            cout    << Donat[i].Name << "\t"
                    << Donat[i].Summ << endl;
            Pat++;
        }
    }
    if ( Pat < 1)
        cout << "none\n";
delete [] Donat;
}
