// textin2.cpp -- �ᯮ�짮����� cin.get(char)
#include<iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cout << "������ ᨬ����; ������ # ��� ��室�:\n";
    cin.get(ch);
    while (ch != '#')
    {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl
         << count << " ᨬ����� ���⠭�\n";
    return 0;
}

