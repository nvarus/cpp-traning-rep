 /** name     - название конфет
 * weight   - вес
 * kall     - число каллорий
 * 
 * объявить структуру
 * создать массив структур из трех элементов 
 * заполнить значениями и вывести на экран
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
    CandyBar chocolate[3]      //в этой реализации компилятора знак "=" обязателен
    {
      {"Алёнка", 100, 370},
      {"Вдохновение", 120.45, 420},
      {"Рот Фронт", 95, 290}
   };

    
    cout    <<"Шоколад: " << chocolate[0].name 
            << ", вес: " << chocolate[0].weight 
            << ", калл: " << chocolate[0].kall << endl;
             
    cout    <<"Шоколад: " << chocolate[1].name 
            << ", вес: " << chocolate[1].weight 
            << ", калл: " << chocolate[1].kall << endl;
            
    cout    <<"Шоколад: " << chocolate[2].name 
            << ", вес: " << chocolate[2].weight 
            << ", калл: " << chocolate[2].kall << endl;
}