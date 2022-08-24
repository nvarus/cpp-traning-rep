/** ������� ��� �㭪樨 �뢮��騥 �� �࠭ ��ப�
 *  Three blind mice
 *  Three blind mice
 *  See how they run
 *  See how they run
 */

#include<iostream>
void string_1();    // ���⨯� �㭪権: void 㪠�뢠�� �� �, �� �㭪樨 �� �������� ���祭��,
void string_2();    // � () - ����� ᪮���, �� � �� ��� �� �ਭ����� ��㬥�⮢

int main()
{
    std::cout << std::endl;     // ������� ����� ��ப� � ����� ��஭ c ������� endl �� � �뤥���� �뢮���� �� �࠭ ⥪��
    string_1();     // ��뢠�� �㭪樨 �� ��� ࠧ� ������
    string_1();
    string_2();
    string_2();
    std::cout << std::endl;
}

void string_1()     // ⥫� ��ࢮ� �㭪樨
{
    std::cout << "Three blind mice" 
              << std::endl;
}                   // ��� void �㭪樨, ������ return 0; �� �ॡ����

void string_2()     // ⥫� ��ன �㭪樨
{
    std::cout << "See how they run"
              << std::endl;
}

/** � �⮩ �ணࠬ�� � �� �ᯮ�짮��� ����࠭�⢮ ���� using namespace,
 *  � ��।���� std:: ��� ������ �㭪樨 <iostream> �� �⤥�쭮��,
 *  ⮫쪮 ��� ⮣� �� �� ���७�஢����� � ��।������ ����࠭�⢠ ����.
 */
