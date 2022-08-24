#include<iostream>

int main(void)
{
    using namespace std;
    int summ = 0;
    
    for (int i = 1; i; )
        {
            cout << "Число: ";
            cin >> i;
            summ = summ + i;
            cout << "Промежуточная сумма = " << summ << "  Для выхода введите: 0" << endl;
        };
    cout << "Сумма = " << summ << endl;
}