/**
 * ����� ������� ������� �㦡�� ������� �뭪� �����.
 * � ������ ���� �� �����뢠�� ᫥������ ���ଠ��:
 *      - ������������ ���������
 *      - ������� �����
 *      - ��� �����
 * ���ࠡ�⠩� ��������, ����� ᬮ��� ᮤ�ঠ�� ��� ��� ���ଠ��, � ������ �ணࠬ��,
 * �ᯮ������� ��������� ��६����� �⮣� ⨯�. �ணࠬ�� ������ ����訢��� � ���짮��⥫�
 * ����� �� ����᫥���� ������⥫�� � ��⥬ �⮡ࠦ��� ��������� ���ଠ��.
 */
 #include<iostream>
 #include<string>
 
 struct pizza
 {
     std::string company;
     int diameter;
     double weight;
 };
 
 int main(void)
 {
    using namespace std;
    pizza fresh = {};    // ���樠�����㥬 �������� fresh
    
    cout << "������ ��ࠬ���� ����� \n������ �������� ��������: ";
    getline(cin, fresh.company);
    
    cout << "������� �����: ";
    cin >> fresh.diameter;
    
    cout << "��� �����: ";
    cin >> fresh.weight;
    
    cout    << "Company: "  <<"\""  << fresh.company    << "\""     
            << "| Diameter: "         << fresh.diameter               
            << "| Weight: "           << fresh.weight                 << endl;
 }