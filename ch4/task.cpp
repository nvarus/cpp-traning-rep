// Напишите программу, которая запрашивает и отображает информацию:
//  Назовите ваше имя: Betty Sue
//  Назовите вашу фамилию: Yewe
//  Какой класс вы заслуживаете? B
//  Ваш возраст? 22
//  Имя: Yewe, Betty Sue
//  Класс: C
//  Возраст: 22

// Воспользумся функцией get()

#include <iostream>
using namespace std;

int main()
{
    const int ArSize = 20; // размер строкового массива
    char firstName[ArSize];
    char lastName[ArSize];
    char grade;
    int age;

    cout << "Назовите ваше имя: ";
    cin.get(firstName, ArSize).get();

    cout << "Назовите вашу фамилию: ";
    cin.get(lastName, ArSize).get();

    cout << "Какой класс вы заслуживаете? ";
    cin >> grade;
    grade = grade + 1;

    cout << "Ваш возраст? ";
    cin >> age;

    cout << "Вас зовут: " << lastName << ", " << firstName << endl
         << "Класс: " << grade << endl
         << "Возраст: " << age << endl;

    return 0;
}