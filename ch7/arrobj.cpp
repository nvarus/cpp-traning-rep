/*************************************************************************
 * arrobj.cpp -- функция с объектами array
 ************************************************************************/
#include<iostream>
#include<array>
#include<string>
using namespace std;
// константные данные
const int Seasons = 4;
const array <string, Seasons> Snames = {"Весна", "Лето", "Осень", "Зима"};
// Функция для изменения объекта array
void fill(array <double, Seasons> *pa);
// Функция, использующая объект array, но не изменяющая его
void show(array <double, Seasons> da);
//=========================================================================
int main()
{
    array <double, Seasons> expenses;
    fill(&expenses);
    show(expenses);
    return 0;
}
//-------------------------------------------------------------------------
void fill(array <double, Seasons> *pa)
{
    for (int i = 0; i < Seasons; i++)
    {
        cout    << "Введите расходы за "
                << Snames[i] << ": ";
        cin >> (*pa)[i];
    }
}
//-------------------------------------------------------------------------
void show(array <double, Seasons> da)
{
    double total = 0.0;
    cout << endl << "*** Р А С Х О Д Ы ***" << endl;
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": " << da[i] << endl;
        total += da[i];
    }
    cout << "Общий расход за год: " << total;
}