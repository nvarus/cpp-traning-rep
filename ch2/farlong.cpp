/** Напишем программу, выдающую запрос на ввод расстояния в фарлонгах
 *  и преобразует его в ярды.
 *  1 Фарлонг = 220 ярдов = 201168 см
 */

#include<iostream>
using namespace std; // определим пространсво имен в самом начале
float yard_farlong(float); // прототип

int main()
{
    float farlong; // Определим переменную в которой будем хранить значение в фарлонгах

    cout << "Введите значение в фарлонгах: ";
    cin >> farlong;

    cout << "Это "
         << yard_farlong(farlong) // вызовем функцию yard_farlong и передадим ей значение farlong
         << " ярда(ов)";

    return 0;
}

float yard_farlong(float farlong) // функция, переводящая фарлонги в ярды
{
    float yard = farlong * 220;

    return yard;
}