// structur.cpp -- простая структура
#include<iostream>
struct inflatable           // обьявление структуры
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable quest =
        {
            "Glorious Gloria", // значение name
            1.88,              // значение volume
            29.99              // значение price
        };  // quest - структурная переменная типа inflatable

        // инициализация указанными значениями

    inflatable pal =
        {
            "Audacious Arthur",
            3.12,
            32.99
        }; // pal - вторая переменная типа inflatable

// некоторые реализации требуют использования 
// static inflatable quest =

    cout << "Expand your quest list with " << quest.name;
    cout << " and " << pal.name << endl;
    cout << "You can have both for $";
    cout << quest.price + pal.price << endl;
    return 0;
}