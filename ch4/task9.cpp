/** name     - �������� �����
 * weight   - ���
 * kall     - �᫮ �����਩
 * 
 * ����� ��������
 * ᮧ���� ���ᨢ ������� �� ��� ����⮢ 
 * ��������� ���祭�ﬨ � �뢥�� �� �࠭
 *      ������ ������� ���ᨢ� �� ��� ������� �ᯮ���� ������ new
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
    CandyBar *p_choco = new CandyBar [3];      //� �⮩ ॠ����樨 ��������� ���� "=" ��易⥫��
 
    p_choco[0].name = "��񭪠";
    p_choco[0].weight = 100;
    p_choco[0].kall = 370;
    
    p_choco[1].name = "���孮�����";
    p_choco[1].weight = 120.45;
    p_choco[1].kall = 420;

    p_choco[2].name = "��� �஭�";
    p_choco[2].weight = 95;
    p_choco[2].kall = 290;
  
    cout    <<"�������: " << p_choco[0].name
            << ", ���: "  << p_choco[0].weight 
            << ", ����: " << p_choco[0].kall    << endl;
             
    cout    <<"�������: " << p_choco[1].name 
            << ", ���: "  << p_choco[1].weight 
            << ", ����: " << p_choco[1].kall    << endl;
            
    cout    <<"�������: " << p_choco[2].name 
            << ", ���: "  << p_choco[2].weight 
            << ", ����: " << p_choco[2].kall    << endl;
    delete [] p_choco;
}