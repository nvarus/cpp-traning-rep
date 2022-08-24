/** ������� �ணࠬ��, � ���ன �㭪�� main() ��뢠�� ��।��塞�� ���짮��⥫�� �㭪��, �ਭ�������
 * � ����⢥ ��㬥�� ���祭�� ⥬������� �� ������ � ��������� �������⭮� ���祭�� ⥬�������
 * �� ��७�����.
 * 
 *  Fahrenheit = (Celsius * 1.8) + 32;
 *  Celsius = (Fahrenheit - 32) / 1.8;
 */

#include<iostream>
int Temperature_Trans(int);     // ���⨯ ���짮��⥫�᪮� �㭪樨

int main()
{
    using namespace std;
    int Celsius;                // ���६����� ��� �࠭���� ⥬������� �� ������

    cout << "��������, ������ ���祭�� � �������: ";
    cin >> Celsius;                                         // ����訢��� � ���짮��⥫� �����

    cout << Celsius << " �ࠤ�ᮢ ������, �� " << Temperature_Trans(Celsius) << " �ࠤ�ᮢ ��७����";   // � �뤠�� १����

    return 0;
}

int Temperature_Trans(int Celsius)  // �㭪�� ��� ��ॢ��� ����ᨩ � ��७�����
{
    int Fahrenheit = (Celsius * 1.8) + 32;  // ���塞 ��६����� Fahrenheit � ��ᢠ����� �� ���祭�� ᮣ��᭮ ��㦥
    
    return Fahrenheit;                      // �����頥� �८�ࠧ������� ���祭�� � �㭪�� main()
}