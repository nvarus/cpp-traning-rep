/** Программа, которая выдает запрос на ввод часов и минут.
 * Фунуция main() должна передать это значение функции, имеющей
 * тип void, которая отобразит эти два значения.
 */

#include<iostream>
void Hours_Minutes(int, int);            // прототип

int main()
{
    using namespace std;    // в функции main() определяем пространство имен для всей функции
    int hours;
    int minutes;

    cout << "Введите часы: ";       // предложим пользователю ввести часы
    cin >> hours;                   // и сохраним в переменной
    cout << "Введите минуты: ";     // то же с минутами
    cin >> minutes;

    Hours_Minutes(hours, minutes);  // вызовем функцию

    return 0;
}

void Hours_Minutes(int hours,int minutes)       // тело функции / указываем пространсво имен отдельно для каждой функции <iostrean> с помощью std::
{
    std::cout << "Введенное значение часов: "
         << hours << std::endl
         << "Введенное значение минут: "
         << minutes << std::endl
         << "Время: "
         << hours << ":" << minutes << std::endl;
}