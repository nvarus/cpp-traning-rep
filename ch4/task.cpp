// ������ �ணࠬ��, ����� ����訢��� � �⮡ࠦ��� ���ଠ��:
//  ������� ��� ���: Betty Sue
//  ������� ���� 䠬����: Yewe
//  ����� ����� �� ���㦨����? B
//  ��� ������? 22
//  ���: Yewe, Betty Sue
//  �����: C
//  ������: 22

// ��ᯮ����� �㭪樥� get()

#include <iostream>
using namespace std;

int main()
{
    const int ArSize = 20; // ࠧ��� ��ப����� ���ᨢ�
    char firstName[ArSize];
    char lastName[ArSize];
    char grade;
    int age;

    cout << "������� ��� ���: ";
    cin.get(firstName, ArSize).get();

    cout << "������� ���� 䠬����: ";
    cin.get(lastName, ArSize).get();

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