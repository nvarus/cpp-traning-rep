/**
 * ����� ������� ������� �㦡�� ������� �뭪� �����.
 * � ������ ���� �� �����뢠�� ᫥������ ���ଠ��:
 *      - ������������ ���������
 *      - ������� �����
 *      - ��� �����
 * ���ࠡ�⠩� ��������, ����� ᬮ��� ᮤ�ঠ�� ��� ��� ���ଠ��, � ������ �ணࠬ��,
 * �ᯮ������� ��������� ��६����� �⮣� ⨯�. �ணࠬ�� ������ ����訢��� � ���짮��⥫�
 * ����� �� ����᫥���� ������⥫�� � ��⥬ �⮡ࠦ��� ��������� ���ଠ��.
 *      � ���������� �������� new ��� ࠧ��饭�� �������� � ᢮������ �࠭����, ����� �������
 *      ������୮� ��६�����.
 *      �ணࠬ�� ᭠砫� ������ ����訢��� �������, ��⥬ �������� ��������
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
     pizza *p_frash = new pizza;               //㪠��⥫� ��  struct pizza

     cout << "������� �����: ";
     cin >> p_frash->diameter;
     
    cin.get();
    cout << "������ �������� ��������: ";
    getline(cin, p_frash->company);

    cout << "��� �����: ";
    cin >> p_frash->weight;

    cout    << "Company: "  <<"\""    << p_frash->company    << "\""     
            << "| Diameter: "         << p_frash->diameter               
            << "| Weight: "           << p_frash->weight                 << endl;

     delete p_frash;
     
     
 }
   