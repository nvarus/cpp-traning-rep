// ������ �ணࠬ��, ����� ����訢��� � �⮡ࠦ��� ���ଠ��:
//  ������� ��� ���: Betty Sue
//  ������� ���� 䠬����: Yewe
//  ����� ����� �� ���㦨����? B
//  ��� ������? 22
//  ���: Yewe, Betty Sue
//  �����: C
//  ������: 22

// ��ᯮ����� ����ᮬ string

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstName;
    string lastName;
    char grade;
    int age;

    cout << "������� ��� ���: ";
    getline(cin, firstName);

    cout << "������� ���� 䠬����: ";
    getline(cin, lastName);

    cout << "����� ����� �� ���㦨����? ";
    cin >> grade;
    grade = grade + 1;

    cout << "��� ������? ";
    cin >> age;

    cout << "��� �����: " << lastName << ", " << firstName << endl
         << "�����: " << grade << endl
         << "������: " << age << endl;

    return 0;
}