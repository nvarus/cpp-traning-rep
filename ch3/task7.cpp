//  �ணࠬ�� ����� ����訢��� ��室 ⮯���� � ��ய��᪮� �⨫�: ������⢮ ���஢ �� 100 �������஢,
//  � �८�ࠧ�� ��� � �⨫� �ਭ��� � ���: �᫮ ���� �� ������.

#include<iostream>

int main()
{
    using namespace std;

    const double LiterInGallon = 3.875; // ����� � �������
    const double MilePer100km = 62.14;  // ���� � 100 ��

    // ����ᨬ ��室 ������� � ����� �� 100 �������஢
    cout << "������ ��室 � ����� / 100 ��: ";
    double liter_100Km;
    cin >> liter_100Km;

    // ����뢠�� ����ﭨ� �ன������ �� ����� �������
    double gallons_1liter = MilePer100km / (liter_100Km / LiterInGallon);

    cout << "���室 ⮯���� ��⠢���: "
         << gallons_1liter
         << " ���� �� ������";

    return 0;
}