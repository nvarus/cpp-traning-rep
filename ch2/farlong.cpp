/** ����襬 �ணࠬ��, �뤠���� ����� �� ���� ����ﭨ� � �૮����
 *  � �८�ࠧ�� ��� � ���.
 *  1 ��૮�� = 220 �म� = 201168 �
 */

#include<iostream>
using namespace std; // ��।���� ����࠭᢮ ���� � ᠬ�� ��砫�
float yard_farlong(float); // ���⨯

int main()
{
    float farlong; // ��।���� ��६����� � ���ன �㤥� �࠭��� ���祭�� � �૮����

    cout << "������ ���祭�� � �૮����: ";
    cin >> farlong;

    cout << "�� "
         << yard_farlong(farlong) // �맮��� �㭪�� yard_farlong � ��।���� �� ���祭�� farlong
         << " �ठ(��)";

    return 0;
}

float yard_farlong(float farlong) // �㭪��, ��ॢ����� �૮��� � ���
{
    float yard = farlong * 220;

    return yard;
}