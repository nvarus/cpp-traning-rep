/**     ����� 6, ����� 5
 * ��஫���⢮ ����஭��, ��� �������� �����楩 �㦨� ⢠�, �ᯮ���� ᫥������ 誠�� ���������������:
 *     x < 5001 -  0%
 *     5000 < x < 15001 - 10%
 *     15000 < x < 35001 - 15%
 *     � > 35000 - 20%
 * ���� 5 000 ⢠௮� ? ����� 0% ᫥���騥 10 000 ⢠௮� ? ����� 10%
 * ᫥���騥 20 000 ⢠௮� ? ����� 15% ��� 35 000 ⢠௮� ? ����� 20%
 * ���ਬ��, �᫨ ���� ��ࠡ��뢠�� 38 000 ⢠௮�, � �� ������ �������� �������
 * 5000 � 0,00 + 10000 � 0,10 + 20000 � 0,15 + 3000 � 0,20, ��� 4 600 ⢠௮�.
 * ������ �ணࠬ��, ����� �ᯮ���� 横� ��� ����� ��室�� � �뤠� �������饣� � �믫�� ������.
 * ���� ������ ����������, ����� ���짮��⥫� ������ ����⥫쭮� ��� ���᫮��� ���祭��.
 */

#include<iostream>
double income = 0;
double NeutroniaTax(double);
int main(void)
{
    using namespace std;
    cout << "������ �㬬� ��室� � ⢠௠�: ";
    while (cin >> income && income >= 0) 
        cout    << "����� � ��襣� ��室� ��⠢��: " << NeutroniaTax(income) << endl
                << "�������� �㬬�: ";
}

double NeutroniaTax(double income) {
    const int t5 = 5000;
    const int t15 = 15000;
    const int t35 = 35000;
    double TotalTax = 0;
    const double p5_15 = 0.10;      // (t15 - t5) * p5_15
    const double p15_35 = 0.15;     // (t35 - t15) * p15_35
    const double p35 = 0.20;        // * p35
    if (income > t35)
        TotalTax = ((income - t35) * p35 + ((t15 - t5) * p5_15) + ((t35 - t15) * p15_35));       // (����� 35) * 0,20 + (�� 15 �� 35) * 0,15 + (�� 5 �� 15) * 0,10
    else if (t15 < income && income <= t35)
        TotalTax = (income - t15) * p15_35 + ((t15 - t5) * p5_15);
    else if (t5 < income && income <= t15)
        TotalTax = (income -t5) * p5_15;
    return TotalTax;
}

