// ������ �ணࠬ��, ����� ����訢��� � ���짮��⥫� ��� � 䠬����, � ��⥬ ����������, ��࠭�� � �⮡ࠦ��� ����� ��ப�
// ������� �� 䠬����, ����⮩, �஡��� � �����.
// �ᯮ���� ��ꥪ�� ����� string

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fsName;   // ���
    string lsName;   // 䠬����
    string fullName; // ������ ���
    string x = ", ";   // ࠧ����⥫�

    // ����ᨬ ����� � ���짮��⥫�
    cout << "������ ���: ";
    getline(cin, fsName);
    cout << "������ 䠬����: ";
    getline(cin, lsName);

    // ��������㥬 ����� ��ப� � ������� ��⮤�� sting
    fullName = lsName + x + fsName;
    
    // �뢮��� १���� �� �࠭
    cout << "��� ������ ���: "
         << fullName << endl;

    return 0;
}