/** Программа, которая запрашивает вес в футах и дюймах и вес в фунтах.
 *  Программа должна выдать индекс массы тела(BMI)
 *  константы:  
 *              int Foot_Inch = 12
 *              double Inch_Meter = 0.0254
 *              double Lb_Kg = 2.2
 * 
 *  переменные: 
 *              int foot               
 *              int inch                // Рост в футах и дюймах
 *              double lb               // Вес в фунтах
 *              int growth_in           // Рост в дюймах
 *              double growth_mt        // Рост в метрах
 *              double weight_kg        // Вес в килограммах
 *  
 * формулы: 
 *              growth_in = (foot * Foot_Inch) + inch;      - преобразование футов и дюймов в дюймы
 *              growth_mt = growth_in * Inch_Meter;            - преобразование дюймов в метры
 *              weight_kg = lb / lb_kg;                     - преобразование фунтов в килограммы             
 *              BMI = weight_kg / (growth_mt * growth_mt);  - формула вычисления BMI
 */

#include<iostream>

double BMI(int, int, double);        // прототип функции

int main()
{
    using namespace std;

    cout << "Введите свой рост!" << endl << "Футы: ";  // запросим у пользователя рост в футах и дюймах
    int foot;
    cin >> foot;
    cout << "Дюймы: ";
    int inch;
    cin >> inch;

    cout << "Введите вес в фунтах: ";                   // запросим вес в фунтах
    double lb;
    cin >> lb;

    cout << "BMI = " << BMI(foot, inch, lb);            // вызовем функцию для подсчета BMI и передадим ей аргументы

    return 0;
}

double BMI(int foot, int inch, double lb)
{
    const int Foot_Inch = 12;
    const double Inch_Meter = 0.0254;
    const double Lb_Kg = 2.2;

    int growth_in = (foot * Foot_Inch) + inch;          // преобразуем футы и дюймы в дюймы
    double growth_mt = growth_in * Inch_Meter;          // преобразуем дюймы в метры
    double weight_kg = lb / Lb_Kg;                      // преобразуем фунты в килограммы
    double BMI = weight_kg / (growth_mt * growth_mt);   // вычислим значение BMI

    return BMI;
}