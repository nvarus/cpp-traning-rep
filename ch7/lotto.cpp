#include<iostream>
long double probability(unsigned numbers, unsigned picks);
//=====================================================================================
int main(void)
{
    using namespace std;
    double total, choices;
    cout    << "Введите общее количество номеров и номеров которые надо угадать" << endl
            << "total choices: ";
    while ((cin >> total >> choices) && choices <= total)
    {
        cout << "Ваш шанс на победу: ";
        cout << probability(total, choices);
        cout << "\nСледующая пара значенией (q для выхода): ";
    }
    cout << "Bye !";
}
//-------------------------------------------------------------------------------------
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
