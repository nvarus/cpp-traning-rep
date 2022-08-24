/**     ����� 6, ����� 4   + �뢮� � 䠩�
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
#include<fstream>                       // ��� 䠩������ �����-�뢮��
const char filename[] = "task4f_file_out.txt";     // ����⠭�, ᮤ�ঠ�� ��� 䠩��
using namespace std;
ofstream outFile;           // ᮧ����� ��ꥪ� ��� �뢮�� � 䠩�
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
    outFile.open(filename);   // ���樨஢���� ��ꥪ� � 䠩���
    char letter;
    showmenu();
    cin >> letter;
    outFile << letter << endl;
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
    outFile << letter << endl;

    }
    cout << "*** �ᯥ譮 �����襭� ࠡ�� �ணࠬ�� ***";
    outFile << "*** �ᯥ譮 �����襭� ࠡ�� �ணࠬ�� ***";
    outFile.close();        // �������� ࠡ��� � 䠩���

}

void showmenu()         // ������� ����
{
    cout    << "�뢥�� ᯨ᮪ 童��� ���:\n"
                "f) ����� ᯨ᮪   n) �� �����   t) �� ��������   b) �� ᥪ�⭮�� �����   p) �� �।���⥭��   q) ��室\n";
    outFile << "�뢥�� ᯨ᮪ 童��� ���:\n"
                "f) ����� ᯨ᮪   n) �� �����   t) �� ��������   b) �� ᥪ�⭮�� �����   p) �� �।���⥭��   q) ��室\n";
}

void FullList()         // ����� ᯨ᮪
{
    cout << "����� ᯨ᮪ 童��� �थ��: \n";
    outFile << "����� ᯨ᮪ 童��� �थ��: \n";

    for (int i; i < Max; i++)
    {
        cout    << Name[i].fullname     << endl
                << Name[i].title        << endl
                << Name[i].bopname      << endl << endl;
        outFile << Name[i].fullname     << endl
                << Name[i].title        << endl
                << Name[i].bopname      << endl << endl;
    }
}

void FullName()             // �� �����
{
    cout << "�� �����: \n";
    outFile << "�� �����: \n";
    for (int i = 0; i < Max; i++) {
        cout << Name[i].fullname << endl;
        outFile << Name[i].fullname << endl;
    }
    cout << endl;
    outFile << endl;
}

void Title()                // �� ��������
{
    cout << "�� ������: \n";
    outFile << "�� ������: \n";
    for (int i = 0; i < Max; i++) {
        cout << Name[i].title << endl;
        outFile << Name[i].title << endl;
    }
    cout << endl;
    outFile << endl;
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
        if      (Name[i].preference < 1) {
                    cout << Name[i].fullname << endl;
                    outFile << Name[i].fullname << endl;
        }
        else if (Name[i].preference > 1) {
                    cout << Name[i].bopname << endl;
                    outFile << Name[i].bopname << endl;
        }
        else {
            cout << Name[i].title << endl;
            outFile << Name[i].title << endl;
        }
    }
    cout << endl;
    outFile << endl;
}
