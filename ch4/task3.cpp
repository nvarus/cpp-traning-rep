// ������ �ணࠬ��, ����� ����訢��� � ���짮��⥫� ��� � 䠬����, � ��⥬ ����������, ��࠭�� � �⮡ࠦ��� ����� ��ப�
// ������� �� 䠬����, ����⮩, �஡��� � �����.
// �ᯮ���� ���ᨢ char � �㭪樨 �� ��������筮�� 䠩�� cstring.

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    const int Ar = 20;
    char fsName[Ar];    // ���
    char lsName[Ar];    // 䠬����
    char fullName[Ar];  // ������ ���
    char x[] = ", ";    // ࠧ����⥫�

    // ����ᨬ ����� � ���짮��⥫�
    cout << "������ ���: ";
    cin.get(fsName, Ar).get();
    cout << "������ 䠬����: ";
    cin.get(lsName, Ar).get();

    // ��������㥬 ����� ��ப� � ������� �㭪権 csting
    strcpy(fullName, lsName);   // �����㥬 ���ᨢ lsName[] � ���ᨢ fullName[]
    strcat(fullName, x);        // � ���ᨢ� fullName[] ������塞 ���ᨢ x[]
    strcat(fullName, fsName);   // � ���ᨢ� fullName[] ������塞 ���ᨢ fsName[]

    // �뢮��� १���� �� �࠭

    cout << "��� ������ ���: "
         << fullName << endl;

    return 0;
}