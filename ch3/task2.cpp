/** �ணࠬ��, ����� ����訢��� ��� � ���� � ��� � ��� � ����.
 *  �ணࠬ�� ������ �뤠�� ������ ����� ⥫�(BMI)
 *  ����⠭��:  
 *              int Foot_Inch = 12
 *              double Inch_Meter = 0.0254
 *              double Lb_Kg = 2.2
 * 
 *  ��६����: 
 *              int foot               
 *              int inch                // ���� � ���� � ���
 *              double lb               // ��� � ����
 *              int growth_in           // ���� � ���
 *              double growth_mt        // ���� � �����
 *              double weight_kg        // ��� � �����ࠬ���
 *  
 * ����: 
 *              growth_in = (foot * Foot_Inch) + inch;      - �८�ࠧ������ ��⮢ � ��� � ��
 *              growth_mt = growth_in * Inch_Meter;            - �८�ࠧ������ ��� � �����
 *              weight_kg = lb / lb_kg;                     - �८�ࠧ������ ��⮢ � �����ࠬ��             
 *              BMI = weight_kg / (growth_mt * growth_mt);  - ��㫠 ���᫥��� BMI
 */

#include<iostream>

double BMI(int, int, double);        // ���⨯ �㭪樨

int main()
{
    using namespace std;

    cout << "������ ᢮� ���!" << endl << "����: ";  // ����ᨬ � ���짮��⥫� ��� � ���� � ���
    int foot;
    cin >> foot;
    cout << "��: ";
    int inch;
    cin >> inch;

    cout << "������ ��� � ����: ";                   // ����ᨬ ��� � ����
    double lb;
    cin >> lb;

    cout << "BMI = " << BMI(foot, inch, lb);            // �맮��� �㭪�� ��� ������ BMI � ��।���� �� ��㬥���

    return 0;
}

double BMI(int foot, int inch, double lb)
{
    const int Foot_Inch = 12;
    const double Inch_Meter = 0.0254;
    const double Lb_Kg = 2.2;

    int growth_in = (foot * Foot_Inch) + inch;          // �८�ࠧ㥬 ���� � �� � ��
    double growth_mt = growth_in * Inch_Meter;          // �८�ࠧ㥬 �� � �����
    double weight_kg = lb / Lb_Kg;                      // �८�ࠧ㥬 ���� � �����ࠬ��
    double BMI = weight_kg / (growth_mt * growth_mt);   // ���᫨� ���祭�� BMI

    return BMI;
}