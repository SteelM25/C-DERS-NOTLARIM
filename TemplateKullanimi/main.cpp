#include <iostream>
using namespace std;

//Template, C++'ta farklı veri tipleriyle çalışabilen fonksiyonlar veya sınıflar yazmanızı sağlar. Yani aynı kodu tekrar yazmadan, hem int, hem double, hem string gibi farklı tipler için kullanabiliriz.

//Okey taşı gibi her taşın yerine geçer:)
// Ama bir template değerleri aynı türden olmalı.


template <typename T>
T topla(T a, T b){
    return a + b;
}

int main()
{
    // Dikkat et tüm değer çiftleri aynı türdendir!!
    cout << topla(4.9, 9.3) << endl;
    cout << topla(4, 9) << endl;
    cout << topla(string("Merhaba ") , string("Musa")) << endl;

}
