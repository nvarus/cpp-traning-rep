#include<iostream>
long double probability(unsigned numbers, unsigned picks);
//=====================================================================================
int main(void)
{
    using namespace std;
    double total, choices, mega;
    cout    << "������ ��饥 ������⢮ ����஢, ����஢ ����� ���� 㣠���� � ������⢮ ����஢ ��� 㣠�뢠��� ���� �����." << endl
            << "total choices mega: ";
    while ((cin >> total >> choices >> mega) && choices <= total)
    {
        cout << "��� 蠭� �� ������: ";
        cout << probability(total, choices) * (probability(mega, 1));
        cout << "\n�������� ��� ���祭��� (q ��� ��室�): ";
    }
    cout << "Bye !";
}
//-------------------------------------------------------------------------------------
// ����⭮��� 㣠���� �� ���� ����஢
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

