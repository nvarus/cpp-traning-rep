/**
 * Напишите программу, которая многократно запрашивает у пользователя пару чисел
 * до тех пор, пока хотя бы одно из этой пары не будет равно 0. С каждой парой
 * программа должна использовать функцию для вычисления среднего гармонического
 * этих чисел. Функция должна возвращать ответ main() для отображения результатов
 * среднее гармоническое = 2.0 * x * y / (x + y)
 */
#include<iostream>
using namespace std;
double m_harmonic(double, double);
int main(void) {
    cout  << "Введите два числа" << endl;
    double x;
    double y;
    while (x != 0 && y != 0) {
        cout << "Первое число: ";
        cin >> x;
        cout << "Второе число: ";
        cin >> y;
        if (x != 0 && y != 0)
            cout << "Среднее гармоническое = " << m_harmonic(x, y) << endl;
        else
            cout << "Buy";
    }
}

double m_harmonic(double x, double y) {
    return 2.0 * x * y / (x + y);
}
