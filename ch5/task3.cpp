#include<iostream>

int main(void)
{
    using namespace std;
    int summ = 0;
    
    for (int i = 1; i; )
        {
            cout << "��᫮: ";
            cin >> i;
            summ = summ + i;
            cout << "�஬����筠� �㬬� = " << summ << "  ��� ��室� ������: 0" << endl;
        };
    cout << "�㬬� = " << summ << endl;
}