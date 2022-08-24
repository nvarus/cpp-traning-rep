/************************************************************************************* 
 * Глава 7, задача 3
 * a) Напишите функцию, принимающую структуру по значению и отображающую все ее члены
 * б) Напишите функцию, принимающую адрес структуры и устанавливающую значение члена
 *    volume равным произведению остальных трех членов.
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
    box wardrobe = {"Шкаф", 190, 40, 80, 0};
    by_value(wardrobe);
    // присвоить адрес структуры указателю *p_wardrobe
    box *p_wardrobe = &wardrobe;
    // вызов функции через указатель                
    wardrobe.volume = by_pointer(p_wardrobe);           
    cout << "Объем: " << wardrobe.volume;
    
}
//-------------------------------------------------------------------------------------
// передача структуры функции по значению
void by_value(box wardrobe)
{                           
    cout    << "Название: " << wardrobe.maker   << endl
            << "Высота: "   << wardrobe.height  << endl
            << "Ширина: "   << wardrobe.widht   << endl
            << "Длина: "    << wardrobe.lenght  << endl;
}
//-------------------------------------------------------------------------------------
// передача структуры функции через указатель
float by_pointer(box *p_wardrobe)
{                     
    return p_wardrobe->height * p_wardrobe->lenght * p_wardrobe->widht;
}