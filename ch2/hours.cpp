/** �ணࠬ��, ����� �뤠�� ����� �� ���� �ᮢ � �����.
 * ����� main() ������ ��।��� �� ���祭�� �㭪樨, ����饩
 * ⨯ void, ����� �⮡ࠧ�� �� ��� ���祭��.
 */

#include<iostream>
void Hours_Minutes(int, int);            // ���⨯

int main()
{
    using namespace std;    // � �㭪樨 main() ��।��塞 ����࠭�⢮ ���� ��� �ᥩ �㭪樨
    int hours;
    int minutes;

    cout << "������ ���: ";       // �।����� ���짮��⥫� ����� ���
    cin >> hours;                   // � ��࠭�� � ��६�����
    cout << "������ ������: ";     // � �� � ����⠬�
    cin >> minutes;

    Hours_Minutes(hours, minutes);  // �맮��� �㭪��

    return 0;
}

void Hours_Minutes(int hours,int minutes)       // ⥫� �㭪樨 / 㪠�뢠�� ����࠭᢮ ���� �⤥�쭮 ��� ������ �㭪樨 <iostrean> � ������� std::
{
    std::cout << "��������� ���祭�� �ᮢ: "
         << hours << std::endl
         << "��������� ���祭�� �����: "
         << minutes << std::endl
         << "�६�: "
         << hours << ":" << minutes << std::endl;
}