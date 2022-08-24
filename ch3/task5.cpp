/** ������ �ணࠬ��, ����� ����訢��� �᫥������ ��ᥫ���� ����� � 
 *  ⥪���� �᫥������ ��ᥫ���� ��࠭�. � ����⢥ १����, �ணࠬ�� ������
 *  �⮡ࠦ��� ��業⭮� ᮮ⭮襭�� ��ᥫ���� ��࠭� � ��ᥫ���� �����.
 *  double percent = popCountry / long double (popEarth) * 100
 */

#include<iostream>

int main()
{
    using namespace std;

    // ����ᨬ � ���짮��⥫� �����
    cout << "������ �᫮ ��ᥫ���� �����: ";
    long long popEarth;
    cin >> popEarth;

    cout << "������ �᫮ ��ᥫ���� ��࠭�: ";
    long long popCountry;
    cin >> popCountry;

    // ������ ��業⭮� ᮮ⭮襭�� ��ᥫ���� ��࠭� � ��祫���� ���
    long double percent = popCountry / static_cast<long double>(popEarth) * 100;

    // �뢥��� १����
    cout << "��ᥫ���� ��࠭� ��⠢��� "
         << percent
         << "% �� ��ᥫ���� �����";

    return 0;
}