// ������ � 䠩�
#include<iostream>
#include<fstream>                       // ��� 䠩������ �����-�뢮��
const char filename[] = "outF.txt";     // ����⠭�, ᮤ�ঠ�� ��� 䠩��
int main(void)
{
    using namespace std;
    ofstream outFile;           // ᮧ����� ��ꥪ� ��� �뢮�� � 䠩�
    outFile.open(filename);   // ���樨஢���� ��ꥪ� � 䠩���

    outFile << "�ணࠬ��, �뢮���� ⥪�� � 䠩�" << endl;

    outFile.close();        // �������� ࠡ��� � 䠩���
}