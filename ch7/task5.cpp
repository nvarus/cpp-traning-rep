#include<iostream>
using namespace std;
long double factor(int n);
//======================================================
int main()
{
    int number;
    cout << "������ �᫮: ";
    cin >> number;
    cout << "����ਠ� " << number << " = ";
    cout << factor(number);
    return 0;
}
//------------------------------------------------------
long double factor(int n)
{
    long double total = n;
    while (n > 1)
    {
        total = total * (n - 1);
        n--;
    }
    return total;
}