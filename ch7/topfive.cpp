/****************************************************************************
 * topfive.cpp -- обработка массива объектов string
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
    cout    << "Введите ваши " << SIZE 
            << " лучших астрономических объекта:" << endl;
    // Ввод астрономических объектов
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
    cout << endl << "Ваш лист:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout    << i + 1 << ": "
                << sa[i] << endl;
    }
}
