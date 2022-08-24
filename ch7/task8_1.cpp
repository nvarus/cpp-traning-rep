/*************************************************************************
 *  Глава 7. Задача 8_1
 * 

 ************************************************************************/
#include<iostream>
using namespace std;
// константные данные
const int Seasons = 4;
const char *Snames[Seasons] = {"Весна", "Лето", "Осень", "Зима"};
struct aDate
{
    double expenses[Seasons];
};
// Функция для изменения массива double
void fill(aDate *pa);
// Функция, использующая массив double, но не изменяющая его
void show(aDate expen);
//=========================================================================
int main()
{   
    aDate expen = {10, 20, 30, 40};
    fill(&expen);
    show(expen);
    return 0;
}
//-------------------------------------------------------------------------
void fill(aDate *pa)
{
    for (int i = 0; i < Seasons; i++)
    {
        cout    << "Введите расходы за "
                << Snames[i] << ": ";
        cin >> pa->expenses[i];
    }
}
//-------------------------------------------------------------------------
void show(aDate expen)
{
    double total = 0.0;
    cout << endl << "*** Р А С Х О Д Ы ***" << endl;
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": " << expen.expenses[i] << endl;
        total += expen.expenses[i];
    }
    cout << "Общий расход за год: " << total;
}