/**
 * ������ �ணࠬ��, ᮮ⢥�������� ���ᠭ�� �ணࠬ�� �� �ࠦ����� 8, �� � �ᯮ�짮������ ��ꥪ� string
 * ����� ᨬ���쭮�� ���ᨢ�.������ ���������� 䠩� string � �ਬ���� ����樨 �⭮襭�� ��� �믮������ �஢�ન.
 */

#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string Done = "done";
    string Word;
    int i = 0;

    cout << "������ ᫮�� (��� �����襭�� ������ ᫮�� done): ";
    do
    {
        cin >> Word;
        i++;
    } while (Done != Word);

    cout << "�� ����� " << i - 1 << " ᫮�";
    return 0;
}
