//  Программа которая запрашивает расход топлива в европейском стиле: количество литров на 100 километров,
//  и преобразует его в стиль принятый в США: число миль на галлон.

#include<iostream>

int main()
{
    using namespace std;

    const double LiterInGallon = 3.875; // литры в галлоны
    const double MilePer100km = 62.14;  // миль в 100 км

    // запросим расход бензина в литрах на 100 километров
    cout << "Введите расход в литрах / 100 км: ";
    double liter_100Km;
    cin >> liter_100Km;

    // расчитываем расстояние пройденное на одном галлоне
    double gallons_1liter = MilePer100km / (liter_100Km / LiterInGallon);

    cout << "Расход топлива составляет: "
         << gallons_1liter
         << " миль на галлон";

    return 0;
}