// работа со строками

#include<iostream>
#include<string>
//#include<cstring>

int main()
{
    using namespace std;

    cout << "Введите свое имя: ";
    string name;
    getline(cin, name);

    if (name.empty())
        cerr << "Ошибка: введенная строка пуста!\n";
    else
        cout << "Привет, " << name << "!\n";

    cout << "Введите класс: ";
    char cl;
    cin >> cl;
    cl = cl - 1;
    cout << cl << endl;
    int i = cl;
    cout.put(cl);

    return 0;
}