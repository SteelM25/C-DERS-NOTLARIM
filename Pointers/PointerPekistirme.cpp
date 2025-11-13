#include <iostream>
using namespace std;

//uzun yol
int ucaginYonunuHesapla(int a){
    a = 34;
    return a;
}

//kısa yol
void ucaginYonunuHesapla(int *p){
    *p = 29;
}

int main(){

    int x = 10;

    // int *ptr; // *ptr'yi çağırırsak x'in DEĞERİNİ alırız.
    // ptr = &x; // ptr x'in adresini tuttu.

    // cout << ptr << endl; // x değişkeninin adresi. Olduğu gibi yazarsam adres çıktı verir.

    // cout << *ptr << endl; // x değişkeninin DEĞERİ. *ile yazarsam tuttuğu değeri çıktı verir.



    //?uzun yol (Memory açısından)
    x = ucaginYonunuHesapla(x);
    cout << "Yeni yön bilgisi: " << x << endl;

    //? kısa yol (pointer ile)
    int *p = &x; //! Bu yöntem memory açısından çok daha performanslıdır. Binlerce kez tekrar edecek işlemler için tekrar tekrar Bellek işgal etmez.
    ucaginYonunuHesapla(p); // otomatik olarak *p olarak alır. Yani değeri alır.

    cout << "Yeni yön bilgisi: " << *p << endl;



}