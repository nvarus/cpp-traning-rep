#include<iostream>
using namespace std;


int main(void) {
    const int max = 11;
   // cout << '\xC9' << '\xCD' << '\xCD' << '\xCD' << '\xCD' << '\xCD' << '\xCD' << '\xCD' << '\xCD' << '\xBB';
    for (int i = 0; i < max; i++) {
        for (int j = 0; j < max; j++) {     
            if ((i * j) != 0) 
                cout << i * j << "\t";
        }
    cout << endl << endl;
    }
}