/** ������ �ணࠬ��, ����� ����訢��� ���� � �ࠤ���, ������ � ᥪ㭤��,
 *  ��᫥ 祣� �⮡ࠦ��� ���� � �����筮� �ଠ�.
 */

#include<iostream>

int main()
{
    using namespace std;
    const double Min_degrees = 60;      // ����⠭� ��� �८�ࠧ������ ����� � �ࠤ���
    const double Sec_degrees = 3600;    // ����⠭� ��� �८�ࠧ������ ᥪ㭤 � �ࠤ���

    cout << "������ ���� � �ࠤ���, ������ � ᥪ㭤��:" << endl;   // ����訢��� � ���짮��⥫� ���祭��
        cout << "���砫� ����� �ࠤ���: ";
    int degrees;
    cin >> degrees;

    cout << "������ ������ ������: ";
    int minutes;
    cin >> minutes;

    cout << "� ������� ������ ᥪ㭤�: ";
    int seconds;
    cin >> seconds;

    double degrees_Dec = (seconds / Sec_degrees) + (minutes / Min_degrees) + degrees;   // Sec_degrees � Min_degrees ����� ⨯ double, �� ��������
                                                                                        // ������� १���� � double

    cout << degrees << " �ࠤ�ᮢ, "    // �뢮��� १����
         << minutes << " �����, "
         << seconds << " ᥪ㭤 = "
         << degrees_Dec << " �ࠤ�ᮢ";

    return 0;
}