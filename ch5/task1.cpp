/**
 * ������ �ணࠬ��, ����訢����� � ���짮��⥫� ���� ���� 楫�� �ᥫ.
 * ��⥬ �ணࠬ�� ������ ����᫨�� � �뤠�� �㬬� ��� 楫�� �ᥫ, ������
 * ����� �⨬� ���� 楫묨. �।����������, �� ��ࢮ� �᫮ �������� ����.
 */
 
 #include<iostream>
 
 int main(void)
 {
     using namespace std;
     int Min;
     int Max;
     
    cout    << "������ ��� 楫�� �᫠." << endl
            << "������ ����襥 �᫮: ";
    cin     >> Min;
    
    cout    << "������ ����襥 �᫮: ";
    cin     >> Max;
    int Summ = 0;
    for (int i = (Min + 1); i < Max; i++)
            Summ = Summ + i;
    
    cout    << "�㬬� ��� 楫�� �ᥫ �� " << Min << " �� " << Max << " ࠢ�� " << Summ;
 }
 