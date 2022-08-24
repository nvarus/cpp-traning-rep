// функция с двумя аргументами
#include<iostream>
using namespace std;
void n_chars(char, int);
//============================================================================
int main(void)
{
    int times;
    char ch;
    cout << "Введите символ: ";                 // Ввод символа
    cin >> ch;
    while (ch != 'q')
    {
        cout << "Введите число: ";              // Ввод целого числа
        cin >> times;
        n_chars(ch, times);
        cout << "\nВведите другой символ. q для выхода из программы\nСимвол: ";
        cin >> ch;
    }
    cout << "Значение times: " << times << endl;
    cout << "Bye !!!";
}
//----------------------------------------------------------------------------
void n_chars(char c, int n)
{
    while (n-- > 0)
        cout << c;
}