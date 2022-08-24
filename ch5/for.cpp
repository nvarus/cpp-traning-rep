// демонстрация цикла for

#include<iostream>

int main(void)
{
    using namespace std;
    cout << "Введите стартовое число: ";
    int limits;
    cin >> limits;
    cout << "Начальное число: " << limits << endl;
    int i;
    for (i = limits; i; i--)
        cout << "i= " << i << endl;
    cout << "Финальное значение i = " << i;
    
}