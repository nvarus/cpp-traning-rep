/************************************************************************************* 
 * ����� 7, ����� 3
 * a) ������ �㭪��, �ਭ������� �������� �� ���祭�� � �⮡ࠦ����� �� �� 童��
 * �) ������ �㭪��, �ਭ������� ���� �������� � ��⠭���������� ���祭�� 童��
 *    volume ࠢ�� �ந�������� ��⠫��� ��� 童���.
 *************************************************************************************/
#include<iostream>
using namespace std;
struct box
{
    char maker[40];
    float height;
    float widht;
    float lenght;
    float volume;
};
void by_value(box wardrobe);
float by_pointer(box *p_wardrobe);
//=====================================================================================
int main(void)
{
    box wardrobe = {"����", 190, 40, 80, 0};
    by_value(wardrobe);
    // ��᢮��� ���� �������� 㪠��⥫� *p_wardrobe
    box *p_wardrobe = &wardrobe;
    // �맮� �㭪樨 �१ 㪠��⥫�                
    wardrobe.volume = by_pointer(p_wardrobe);           
    cout << "��ꥬ: " << wardrobe.volume;
    
}
//-------------------------------------------------------------------------------------
// ��।�� �������� �㭪樨 �� ���祭��
void by_value(box wardrobe)
{                           
    cout    << "��������: " << wardrobe.maker   << endl
            << "����: "   << wardrobe.height  << endl
            << "��ਭ�: "   << wardrobe.widht   << endl
            << "�����: "    << wardrobe.lenght  << endl;
}
//-------------------------------------------------------------------------------------
// ��।�� �������� �㭪樨 �१ 㪠��⥫�
float by_pointer(box *p_wardrobe)
{                     
    return p_wardrobe->height * p_wardrobe->lenght * p_wardrobe->widht;
}