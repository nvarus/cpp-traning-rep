// strgfun.cpp -- �㭪�� � ��ப��� ��㬥�⮬
#include<iostream>
unsigned int c_in_str(const char *str, char ch);
//=================================================================
int main(void)
{
    using namespace std;
    char mmm[15] = "minimum";           // ��ப� � ���ᨢ�
    char *wail = "ululate";             // wail 㪠�뢠�� �� ��ப�
    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');
    cout << ms << " ᨬ����� \'m\' � " << mmm << endl;
    cout << us << " ᨬ����� \'u\' � " << wail << endl;
}
//-----------------------------------------------------------------
unsigned int c_in_str(const char *str, char ch)
{
    unsigned int count = 0;
    while (*str)
    {
        if (*str == ch)
        {
            count++;
        }
        str++;
    }
    return count;
}
