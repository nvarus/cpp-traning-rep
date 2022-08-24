/** Напишите программу, которая запрашивает численность населения Земли и 
 *  текущую численность населения страны. В качестве результата, программа должна
 *  отображать процентное соотношение населения страны к населению Земли.
 *  double percent = popCountry / long double (popEarth) * 100
 */

#include<iostream>

int main()
{
    using namespace std;

    // запросим у пользователя данные
    cout << "Введите число населения Земли: ";
    long long popEarth;
    cin >> popEarth;

    cout << "Введите число населения страны: ";
    long long popCountry;
    cin >> popCountry;

    // найдем процентное соотношение населения страны к начелению мира
    long double percent = popCountry / static_cast<long double>(popEarth) * 100;

    // выведем результат
    cout << "Население страны составляет "
         << percent
         << "% от населения Земли";

    return 0;
}