// �㭪�� � ���� ��㬥�⠬�
#include<iostream>
using namespace std;
void n_chars(char, int);
//============================================================================
int main(void)
{
    int times;
    char ch;
    cout << "������ ᨬ���: ";                 // ���� ᨬ����
    cin >> ch;
    while (ch != 'q')
    {
        cout << "������ �᫮: ";              // ���� 楫��� �᫠
        cin >> times;
        n_chars(ch, times);
        cout << "\n������ ��㣮� ᨬ���. q ��� ��室� �� �ணࠬ��\n������: ";
        cin >> ch;
    }
    cout << "���祭�� times: " << times << endl;
    cout << "Bye !!!";
}
//----------------------------------------------------------------------------
void n_chars(char c, int n)
{
    while (n-- > 0)
        cout << c;
}