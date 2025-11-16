#include <iostream>
using namespace std;

//?Bir int pointer oluştur. Bu pointer’ın işaret ettiği değişkene sadece pointerı kullanarak 25 değerini ata ve ekrana yazdır.

int main(){

    int x = 10;

    int *p = &x;

    *p = 25;    // tanımladığımız *p pointer değişkeninin değerini yeniden atamış olduk(x'in değerini değiştirdik)

    cout << endl << "\nYeni Değer: " << x << endl;



}