/**
 * Вильям Вингейт заведует службой анализа рынка пиццы.
 * О каждой пицце он записывает следующую информацию:
 *      - наименование комппании
 *      - диаметр пиццы
 *      - вес пиццы
 * Разработайте структуру, которая сможет содержать всю эту информацию, и напишите программу,
 * использующую структурную переменную этого типа. Программа должна запрашивать у пользователя
 * каждый из перечисленных показателей и затем отображать введенную информацию.
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
    pizza fresh = {};    // инициализируем структуру fresh
    
    cout << "Укажите параметры пиццы \nВВедите название компании: ";
    getline(cin, fresh.company);
    
    cout << "Диаметр пиццы: ";
    cin >> fresh.diameter;
    
    cout << "Вес пиццы: ";
    cin >> fresh.weight;
    
    cout    << "Company: "  <<"\""  << fresh.company    << "\""     
            << "| Diameter: "         << fresh.diameter               
            << "| Weight: "           << fresh.weight                 << endl;
 }