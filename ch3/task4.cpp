/** напишите программу, которая запршивает количество секунд в в виде целого значения
 *  и затем отображает эквивалентное значение в сутках, часах минутах и секундах
 */

#include<iostream>

int main()
{
    using namespace std;

    const int secPerDays = 86400;       // количество секунд в сутках
    const int secPerHours = 3600;       // количество секунд в часе
    const int secPerMinutes = 60;       // количество секунд в минуте

    // запросим у пользователя количесво секунд
    cout << "Введите количество секунд: ";
    long long seconds;
    cin >> seconds;
    cout << seconds << " секунд = ";

    // преобразуем секунды в сутки
    long days = seconds / secPerDays;
    long rem = seconds % secPerDays;    // найдем остаток секунд от деления

    // преобразуем остаток секунд в часы
    long hours = rem / secPerHours; 
    rem = rem % secPerHours;

    // преобразуем остаток секунд в минуты
    long minutes = rem / secPerMinutes;
    rem = rem % secPerMinutes;          // rem равно остатку секунд

    // выведем результат
    cout << days << " дней, "
         << hours << " часов, "
         << minutes << " минут, "
         << rem << " секунд";

    return 0;
}