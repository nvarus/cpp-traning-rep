// Напишите программу, которая запрашивает и отображает информацию:
//  Назовите ваше имя: Betty Sue
//  Назовите вашу фамилию: Yewe
//  Какой класс вы заслуживаете? B
//  Ваш возраст? 22
//  Имя: Yewe, Betty Sue
//  Класс: C
//  Возраст: 22

// Воспользумся классом string

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstName;
    string lastName;
    char grade;
    int age;

    cout << "Назовите ваше имя: ";
    getline(cin, firstName);

    cout << "Назовите вашу фамилию: ";
    getline(cin, lastName);

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