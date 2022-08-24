/** Предложить пользователю ввести результаты забега на 40 метров,
 * а затем отобразить эти результаты и среднее.
 */
 
#include<iostream>
#include<array>
 
 int main(void)
 {
     using namespace std;
     array<int, 3> race;
     
    cout << "Введите результат первого забега: ";
    cin >> race[0];
    
    cout << "Введите результат второго забега: ";
    cin >> race[1];
    
    cout << "Введите результат третьего забега: ";
    cin >> race[2];
    
    double midd = (race[0] + race[1] + race[2]) / 3;
    
    cout << "Итого, результаты: "   << race[0] << ", " 
                                    << race[1] << " и " 
                                    << race[2] << ". Среднее значение: " 
                                    << midd;
    
 }
