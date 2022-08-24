/** Программа, в которой функция main() вызывает функцию, принимающую в качестве аргумента
 *  расстояние в световых годах (LightYears) и возвращающая растояние в
 *  астрономических единицах (AstroUnits)
 *  
 *  AstroUnits = LightYears * 63240
 */

#include<iostream>
double Astro_Trans(double);     // Прототип функции, переводящей световые годы в а.е.

int main()
{
    using namespace std;
    double LightYears;

    cout << "Введите значение в световых годах: ";
    cin >> LightYears;
    cout << LightYears << " световых года = " << Astro_Trans(LightYears) << " астрономическим единицам.";

    return 0;
}

double Astro_Trans(double LightYears)       // тело функции Astro_Trans
{
    int AstroUnits = LightYears * 63240;

    return AstroUnits;
}