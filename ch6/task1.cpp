/** 
 * ������ �ணࠬ��, ����� �⠥� ���������� ���� �� ᨬ���� @ � ������� ���, �� �᪫�祭��� �������� ���,
 * �८�ࠧ�� ������ �㪢� ���孥�� ॣ���� � �㪢� ������� ॣ���� � �������.
 * (�� ������ � ᥬ���⢥ �㭪権 cctype.)
 */

#include<iostream>
#include<cctype>
int main(void)
{
    using namespace std;
    char ch;
    cout << "������ ᨬ���� � ᫮�� � ������ � ���孥� ॣ����. ��� ��室� ������ @" << endl << "::";
    cin.get(ch);
    while (ch != '@')
    {
        if (isalpha(ch) and islower(ch))        // �᫨ ᨬ��� �㪢� � ���筠� �㪢�
            cout << (char)toupper(ch);          // ������ ���������
        else if (isalpha(ch) and isupper(ch))   // �᫨ ᨬ��� �㪢� � ��������� �㪢�
            cout << (char)tolower(ch);          // ������ ������
        else if (ispunct(ch) or iscntrl(ch))    // ᨬ��� ���� �ਯ������ ��� �ࠢ���騩 ᨬ���
            cout << ch;
        cin.get(ch);
    }
}