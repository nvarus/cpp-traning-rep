/****************************************************************************
 * topfive.cpp -- ��ࠡ�⪠ ���ᨢ� ��ꥪ⮢ string
 * 
 ****************************************************************************/
#include<iostream>
#include<string>
using namespace std;
const int SIZE = 5;
void display(const string sa[], int n);
//===========================================================================
int main(void)
{
    string list [SIZE];
    cout    << "������ ��� " << SIZE 
            << " ����� ���஭����᪨� ��ꥪ�:" << endl;
    // ���� ���஭����᪨� ��ꥪ⮢
    for (int i = 0; i < SIZE; i++)
    {
        cout << i + 1 << ": ";
        getline(cin, list[i]);
    }
    display(list, SIZE);
}
//----------------------------------------------------------------------------
void display(const string sa[], int n)
{
    cout << endl << "��� ����:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout    << i + 1 << ": "
                << sa[i] << endl;
    }
}
