/**
 * �믮���� �ࠦ����� 5, �� �ᯮ���� ��㬥�� ���ᨢ ��� ��࠭����� ������ � �������
 * �த���� �� �� ����. �뤠�� ����� �㬬� �த�� �� �� ����
 */
#include <iostream>
#include <string>
const int mt = 12;
const int yr = 3;

int main(void)
{
    using namespace std;
    string Mounts[mt] = {"������", "���ࠫ�", "����", "��५�", "���", "���", "���", "������", "�������", "������", "�����", "�������"}; // ���ᨢ ��ப � �������ﬨ ����楢
    int Store[yr][mt];
    int Summ[yr] = {0};     // �㬬� �த�� �� �����
    int SSumm = 0;          // �㬬� �த�� �� �� ����

    for (int i = 0; i < yr; i++)        // 横� ��� ����� ���祭�� �த��
    {
        for (int j = 0; j < mt; ++j)
        {
            cout << "������ �த��� �� " << i + 1 << " ���. " << Mounts[j] << ": ";
            cin >> Store[i][j];
            Summ[i] = Summ[i] + Store[i][j];
        }
    }

    for (int i = 0; i < yr; i++)        // 横� ��� �뢮�� �㬬 �த�� �� �����
    {
        cout << "�த��� �� " << i + 1 << " ���\t"
             << Summ[i] << " ����" << endl;

        SSumm = SSumm + Summ[i];
    }

    cout << "�㬬� �த�� �� �� ����: " << SSumm << " ����";
}