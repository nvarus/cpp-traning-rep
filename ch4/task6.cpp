 /** name     - �������� �����
 * weight   - ���
 * kall     - �᫮ �����਩
 * 
 * ����� ��������
 * ᮧ���� ���ᨢ ������� �� ��� ����⮢ 
 * ��������� ���祭�ﬨ � �뢥�� �� �࠭
 */
#include<iostream>
#include<string>
struct CandyBar     // ������� �������� CandyBar
{
    std::string name;
    double weight;
    int kall;
};

int main(void)
{
    using namespace std;
    CandyBar chocolate[3]      //� �⮩ ॠ����樨 ��������� ���� "=" ��易⥫��
    {
      {"��񭪠", 100, 370},
      {"���孮�����", 120.45, 420},
      {"��� �஭�", 95, 290}
   };

    
    cout    <<"�������: " << chocolate[0].name 
            << ", ���: " << chocolate[0].weight 
            << ", ����: " << chocolate[0].kall << endl;
             
    cout    <<"�������: " << chocolate[1].name 
            << ", ���: " << chocolate[1].weight 
            << ", ����: " << chocolate[1].kall << endl;
            
    cout    <<"�������: " << chocolate[2].name 
            << ", ���: " << chocolate[2].weight 
            << ", ����: " << chocolate[2].kall << endl;
}