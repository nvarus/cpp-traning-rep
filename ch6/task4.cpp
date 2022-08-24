/**     ����� 6, ����� 4
 * ����� �� ���㯨� � �����⢮�⥫�� �थ� �ணࠬ���⮢ (���),
 * � ��� ����� �������� �� ��ᥤ����� ��� �� ��襬� ॠ�쭮�� �����,
 * �� �������� ���� ᥪ�⭮�� ����� ���. ������ �ணࠬ��, ����� �����
 * �뢮���� ᯨ᪨ 童��� �� ॠ��� ������, ���������, ᥪ��� ������ ����
 * �� �।���⥭�� ᠬ��� 童��. � �᭮�� ������� ᫥������ ��������:
 * // ������� ���� �����⢮�⥫쭮�� �थ�� �ணࠬ���⮢ (���) 
 *      struct bop {
 *      char fullname[strsize];	// ॠ�쭮� ���
 *      char title[strsize];	// ���������
 *      char bopname[strsize];	// ᥪ�⭮� ��� ���
 *      int preference;	        // 0 = ������ ���, 1 = ���, 2 = ��� ���
*/
#include<iostream>
#include<string>
using namespace std;
void showmenu();
void FullList();
void FullName();
void Title();
void BopName();
void Preference();
const int Max = 6;

struct bop {            // ������� ���
    string fullname;	// ॠ�쭮� ���
    string title;	// ���������
    string bopname;	// ᥪ�⭮� ��� ���
    int preference;	        // 0 = ������ ���, 1 = ���, 2 = ��� ���
} Name[Max] =           // ���樠������ ���ᨢ� ������� Name
    {
        {"��窮� ����਩ ��쥢��", "������� �������", "������", 1},
        {"�㪮� ���� ����ᠭ�஢��", "�������", "���� ����", 2},
        {"������� ����", "�����", "���ਪ", 0},
        {"���� ����� ���஢��", "��㦥����", "�����ᮢ��", 0},
        {"���� ���� ��⠫쥢��", "��������", "�������", 1},
        {"����娭 ����ᥩ ������쥢��", "������", "nvaru", 4}
    };

int main(void)          // �롮� �㭪� ����
{
    char letter;
    showmenu();
    cin >> letter;

    while(letter != 'Q' && letter != 'q')
    {
        switch(letter)
        {
            case 'f':
            case 'F': FullList();   // ����� ᯨ᮪
                    break;
            case 'n': 
            case 'N': FullName();   // �� �����
                    break;
            case 't': 
            case 'T': Title();      // �� ��������
                    break;
            case 'b': 
            case 'B': BopName();    // �� ᥪ�⭮�� �����
                    break;
            case 'p': 
            case 'P': Preference(); // �� �।���⥭��
                    break;
            default : cout << "��������, ������ ⮫쪮 : f, n, t, b, p � g\n";       
        }
    showmenu();
    cin >> letter;
    }
 }

void showmenu()         // ������� ����
{
    cout    << "�뢥�� ᯨ᮪ 童��� ���:\n"
                "f) ����� ᯨ᮪   n) �� �����   t) �� ��������   b) �� ᥪ�⭮�� �����   p) �� �।���⥭��   q) ��室\n";
}

void FullList()         // ����� ᯨ᮪
{
    cout << "����� ᯨ᮪ 童��� �थ��: \n";
    for (int i; i < Max; i++)
        cout    << Name[i].fullname     << endl
                << Name[i].title        << endl
                << Name[i].bopname      << endl << endl;
}

void FullName()             // �� �����
{
    cout << "�� �����: \n";
    for (int i = 0; i < Max; i++)
        cout << Name[i].fullname << endl;
    cout << endl;
}

void Title()                // �� ��������
{
    cout << "�� ������: \n";
    for (int i = 0; i < Max; i++)
        cout << Name[i].title << endl;
    cout << endl;
}
void BopName()              // �� ᥪ�⭮�� �����
{
    cout << "�� ᥪ�⭮�� ����� ���: \n";
    for (int i = 0; i < Max; i++)
        cout << Name[i].bopname << endl;
    cout << endl;
}
void Preference()           // �� �।���⥭��
{
    cout << "�� �।���⥭��: \n";
    for (int i = 0; i < Max; i++)
    {
        if      (Name[i].preference < 1)
                    cout << Name[i].fullname << endl;
        else if (Name[i].preference > 1)
                    cout << Name[i].bopname << endl;
        else    cout << Name[i].title << endl;
    }
    cout << endl;
}
