/** ������ �ணࠬ��, ����� ����訢��� ������⢮ ᥪ㭤 � � ���� 楫��� ���祭��
 *  � ��⥬ �⮡ࠦ��� �������⭮� ���祭�� � ��⪠�, ��� ������ � ᥪ㭤��
 */

#include<iostream>

int main()
{
    using namespace std;

    const int secPerDays = 86400;       // ������⢮ ᥪ㭤 � ��⪠�
    const int secPerHours = 3600;       // ������⢮ ᥪ㭤 � ��
    const int secPerMinutes = 60;       // ������⢮ ᥪ㭤 � �����

    // ����ᨬ � ���짮��⥫� �����᢮ ᥪ㭤
    cout << "������ ������⢮ ᥪ㭤: ";
    long long seconds;
    cin >> seconds;
    cout << seconds << " ᥪ㭤 = ";

    // �८�ࠧ㥬 ᥪ㭤� � ��⪨
    long days = seconds / secPerDays;
    long rem = seconds % secPerDays;    // ������ ���⮪ ᥪ㭤 �� �������

    // �८�ࠧ㥬 ���⮪ ᥪ㭤 � ���
    long hours = rem / secPerHours; 
    rem = rem % secPerHours;

    // �८�ࠧ㥬 ���⮪ ᥪ㭤 � ������
    long minutes = rem / secPerMinutes;
    rem = rem % secPerMinutes;          // rem ࠢ�� ����� ᥪ㭤

    // �뢥��� १����
    cout << days << " ����, "
         << hours << " �ᮢ, "
         << minutes << " �����, "
         << rem << " ᥪ㭤";

    return 0;
}