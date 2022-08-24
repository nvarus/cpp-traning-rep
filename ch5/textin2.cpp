// textin2.cpp -- использование cin.get(char)
#include<iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cout << "Введите символы; Введите # для выхода:\n";
    cin.get(ch);
    while (ch != '#')
    {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl
         << count << " символов прочитано\n";
    return 0;
}

