/**
 * ������ �ணࠬ��, ����� �ᯮ���� ���ᨢ char � 横� ��� �⥭�� �� ������ ᫮�� �� ࠧ �� �� ���, ���� �� �㤥� ������� ᫮�� done.
 * ��⥬ �ணࠬ�� ������ ᮮ���� ������⢮ ��������� ᫮� (�᪫��� done). �ਬ�� ����᪠ ������ ���� ⠪��:
 * ������ ᫮�� (��� �����襭�� ������ ᫮�� done): anteater birthday category dumpster envy finagle geometry done for sure
 * �� ����� 7 ᫮�.
 * �� ������ ������� ���������� 䠩� cstring � �ਬ����� �㭪�� strcmp () ��� �믮������ �஢�ન.
 */
#include<iostream>
#include<cstring>

int main()
{
    char Done[] = "done";
    char word[80];
    int i = 0;

    std::cout << "������ ᫮�� (��� �����襭�� ������ ᫮�� done): ";
    do
    {
        std::cin >> word;
        i++;
    } while ( strcmp(Done, word) != 0);

    std::cout << "�� ����� " << i - 1 << " ᫮�";
    return 0;
}
