#include<iostream>
long double probability(unsigned numbers, unsigned picks);
//=====================================================================================
int main(void)
{
    using namespace std;
    double total, choices;
    cout    << "������ ��饥 ������⢮ ����஢ � ����஢ ����� ���� 㣠����" << endl
            << "total choices: ";
    while ((cin >> total >> choices) && choices <= total)
    {
        cout << "��� 蠭� �� ������: ";
        cout << probability(total, choices);
        cout << "\n�������� ��� ���祭��� (q ��� ��室�): ";
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
