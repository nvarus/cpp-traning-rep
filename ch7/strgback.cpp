#include<iostream>
using namespace std;
char * buildstr(char c, int n);
//=====================================================
int main(void) 
{
    int times;
    char ch;
    cout << "������ ᨬ���: ";
    cin >> ch;
    cout << "������ 楫�� �᫮: ";
    cin >> times;
    char * ps = buildstr(ch, times);
    cout << ps << endl;
    delete[] ps;
    ps = buildstr('+', 20);
    cout << ps << "-DONE-" << ps << endl;
    delete[] ps;   
}
//-----------------------------------------------------
// ��ந� ��ப� �� 'n' ᨬ����� 'n'
char * buildstr(char c, int n) 
{
    char *pstr = new char(n + 1);
    pstr[n] = '\0';
    for (int i = 0; i < n; i++)
    {
        pstr[i] = c;
    }
    return pstr;
}
