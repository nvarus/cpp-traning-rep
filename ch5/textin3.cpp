// textin3.cpp -- �⥭�� ᨬ����� �� ���� 䠩��
#include<iostream>
int main(void)
{
    using namespace std;

    char ch;
    int count = 0;
    cin.get(ch);
    while (cin.fail() == false)
    {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl
         << count << " ᨬ����� ��⠭�\n";
}