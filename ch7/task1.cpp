/**
 * ������ �ணࠬ��, ����� �������⭮ ����訢��� � ���짮��⥫� ���� �ᥫ
 * �� �� ���, ���� ��� �� ���� �� �⮩ ���� �� �㤥� ࠢ�� 0. � ������ ��ன
 * �ணࠬ�� ������ �ᯮ�짮���� �㭪�� ��� ���᫥��� �।���� ��ମ���᪮��
 * ��� �ᥫ. �㭪�� ������ �������� �⢥� main() ��� �⮡ࠦ���� १���⮢
 * �।��� ��ମ���᪮� = 2.0 * x * y / (x + y)
 */
#include<iostream>
using namespace std;
double m_harmonic(double, double);
int main(void) {
    cout  << "������ ��� �᫠" << endl;
    double x;
    double y;
    while (x != 0 && y != 0) {
        cout << "��ࢮ� �᫮: ";
        cin >> x;
        cout << "��஥ �᫮: ";
        cin >> y;
        if (x != 0 && y != 0)
            cout << "�।��� ��ମ���᪮� = " << m_harmonic(x, y) << endl;
        else
            cout << "Buy";
    }
}

double m_harmonic(double x, double y) {
    return 2.0 * x * y / (x + y);
}
