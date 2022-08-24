/** Напишите программу, которая запрашивает широту в градусах, минутах и секундах,
 *  после чего отображает широту в десятичном формате.
 */

#include<iostream>

int main()
{
    using namespace std;
    const double Min_degrees = 60;      // константа для преобразования минут в градусы
    const double Sec_degrees = 3600;    // константа для преобразования секунд в градусы

    cout << "Введите широту в градусах, минутах и секундах:" << endl;   // запрашиваем у пользователя значение
        cout << "Вначале ведите градусы: ";
    int degrees;
    cin >> degrees;

    cout << "Теперь введите минуты: ";
    int minutes;
    cin >> minutes;

    cout << "И наконец введите секунды: ";
    int seconds;
    cin >> seconds;

    double degrees_Dec = (seconds / Sec_degrees) + (minutes / Min_degrees) + degrees;   // Sec_degrees и Min_degrees имеют тип double, это позволяет
                                                                                        // получить результат в double

    cout << degrees << " градусов, "    // выводим результат
         << minutes << " минут, "
         << seconds << " секунд = "
         << degrees_Dec << " градусов";

    return 0;
}