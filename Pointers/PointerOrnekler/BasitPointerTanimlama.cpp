#include <iostream>
using namespace std;

//?Bir int değişken tanımla. Bu değişkeni işaret eden bir pointer oluştur ve pointer üzerinden değişkenin değerini ekrana yazdır.

int main(){

    int sayi = 10;

    int *p = &sayi; // p, sayi'nin adresine; *p ise sayinin değerine eşit olur.

    cout << endl << *p << endl;

}