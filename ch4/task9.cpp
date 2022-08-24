/** name     - название конфет
 * weight   - вес
 * kall     - число каллорий
 * 
 * объявить структуру
 * создать массив структур из трех элементов 
 * заполнить значениями и вывести на экран
 *      ВМЕСТО объявления массива из трех структур используйте операцию new
 */
 
 #include<iostream>
#include<string>
struct CandyBar     // Обьявление структуры CandyBar
{
    std::string name;
    double weight;
    int kall;
};

int main(void)
{
    using namespace std;
    CandyBar *p_choco = new CandyBar [3];      //в этой реализации компилятора знак "=" обязателен
 
    p_choco[0].name = "Алёнка";
    p_choco[0].weight = 100;
    p_choco[0].kall = 370;
    
    p_choco[1].name = "Вдохновение";
    p_choco[1].weight = 120.45;
    p_choco[1].kall = 420;

    p_choco[2].name = "Рот Фронт";
    p_choco[2].weight = 95;
    p_choco[2].kall = 290;
  
    cout    <<"Шоколад: " << p_choco[0].name
            << ", вес: "  << p_choco[0].weight 
            << ", калл: " << p_choco[0].kall    << endl;
             
    cout    <<"Шоколад: " << p_choco[1].name 
            << ", вес: "  << p_choco[1].weight 
            << ", калл: " << p_choco[1].kall    << endl;
            
    cout    <<"Шоколад: " << p_choco[2].name 
            << ", вес: "  << p_choco[2].weight 
            << ", калл: " << p_choco[2].kall    << endl;
    delete [] p_choco;
}