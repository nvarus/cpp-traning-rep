/*************************************************************************
 *  Глава 7. Задача 8
 * 

 ************************************************************************/
#include<iostream>
using namespace std;
// константные данные
const int Seasons = 4;
const char *Snames[Seasons] = {"Весна", "Лето", "Осень", "Зима"};
// Функция для изменения массива double
void fill(double expenses[]);
// Функция, использующая массив double, но не изменяющая его
void show(double expenses[]);
//=========================================================================
int main()
{   
    double expenses[Seasons];
    fill(expenses);
    show(expenses);
    return 0;
}
//-------------------------------------------------------------------------
void fill(double expenses[])
{
    for (int i = 0; i < Seasons; i++)
    {
        cout    << "Введите расходы за "
                << Snames[i] << ": ";
        cin >> expenses[i];
    }
}
//-------------------------------------------------------------------------
void show(double expenses[])
{
    double total = 0.0;
    cout << endl << "*** Р А С Х О Д Ы ***" << endl;
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": " << expenses[i] << endl;
        total += expenses[i];
    }
    cout << "Общий расход за год: " << total;
}