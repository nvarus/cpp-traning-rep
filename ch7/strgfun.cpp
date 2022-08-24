// strgfun.cpp -- функция со строковым аргументом
#include<iostream>
unsigned int c_in_str(const char *str, char ch);
//=================================================================
int main(void)
{
    using namespace std;
    char mmm[15] = "minimum";           // строка в массиве
    char *wail = "ululate";             // wail указывает на строку
    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');
    cout << ms << " символов \'m\' в " << mmm << endl;
    cout << us << " символов \'u\' в " << wail << endl;
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
