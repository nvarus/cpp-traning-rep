/** �।������ ���짮��⥫� ����� १����� ������ �� 40 ���஢,
 * � ��⥬ �⮡ࠧ��� �� १����� � �।���.
 */
 
#include<iostream>
#include<array>
 
 int main(void)
 {
     using namespace std;
     array<int, 3> race;
     
    cout << "������ १���� ��ࢮ�� ������: ";
    cin >> race[0];
    
    cout << "������ १���� ��ண� ������: ";
    cin >> race[1];
    
    cout << "������ १���� ���쥣� ������: ";
    cin >> race[2];
    
    double midd = (race[0] + race[1] + race[2]) / 3;
    
    cout << "�⮣�, १�����: "   << race[0] << ", " 
                                    << race[1] << " � " 
                                    << race[2] << ". �।��� ���祭��: " 
                                    << midd;
    
 }
