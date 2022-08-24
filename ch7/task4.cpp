#include<iostream>
long double probability(unsigned numbers, unsigned picks);
//=====================================================================================
int main(void)
{
    using namespace std;
    double total, choices, mega;
    cout    << "Введите общее количество номеров, номеров которые надо угадать и количество номеров для угадывания мега номера." << endl
            << "total choices mega: ";
    while ((cin >> total >> choices >> mega) && choices <= total)
    {
        cout << "Ваш шанс на победу: ";
        cout << probability(total, choices) * (probability(mega, 1));
        cout << "\nСледующая пара значенией (q для выхода): ";
    }
    cout << "Bye !";
}
//-------------------------------------------------------------------------------------
// вероятность угадать из поля номеров
long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
    {
        result = result * n / p;
    }
    return result;
}

