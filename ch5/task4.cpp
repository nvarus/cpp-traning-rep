/**
 * ��䭠 ������஢��� $100 ��� ����� 10%. ��������� �ਡ�� = 0.10 * ��室�� ������.
 * ���� ������஢��� $100 ��� ᫮��� 10%. ��������� �ਡ�� = 0.05 * ⥪�騩 ������.
 * ����쪮 ������������ ���, �� �� �㬬� ������ ���� �ॢ�ᨫ� �㬬� ������ ����
 */
#include<iostream>

int main(void)
{
    using namespace std;
    int first_b;
    
    cout << "��ࢮ��砫�� �����: ";
    cin  >> first_b;
    
    double Cleo_b = first_b;    // ��室�� ������ ����
    double Daphna_b = first_b;  // ��室�� ������ ����

    for (int i = 1; Daphna_b >= Cleo_b; i++)    // 横� �த�������� �� �� ���, ���� �ਡ�� 
                                                // ���� �� �ॢ��� �ਡ�� ����                
        {
            Daphna_b = Daphna_b + (0.10 * first_b);
            Cleo_b = Cleo_b + (0.05 * Cleo_b);

            cout    << "���: " << i << "    " 
                    << "�ਡ�� ����: $ " << Daphna_b << "    "
                    << "�ਡ�� ����: $ " << Cleo_b << endl;
        };

}

