#include <iostream>
#include <cmath> // ! abs metodu için gerekli.
using namespace std;

/*2. Sayı Tahmin Oyunu (Basit Versiyon)

Kullanıcı 1–10 arası bir sayı girsin.
Program rastgele bir sayı belirlesin (örneğin `rand()` kullanmadan sabit tut).
Eğer sayılar eşitse “Tebrikler”, değilse fark 2’den küçükse “Yaklaştın!”, aksi halde “Uzak kaldın” yazdır.

> Konular: if-else, mantıksal operatörler, aritmetik işlemler*/


int main(){

    int girdi, rastgele = 13; //? rand() metodunu görmediğimiz için sayıyı belirledim.

    cout << "\n Sayı Giriniz: ";
    cin >> girdi;

    if(girdi==rastgele){
        cout << "\n Tebrikler";
    }
    else if(abs(girdi - rastgele) <= 2){ //? sonucun mutlak değerini aldım ki sabit 2 olsun
        cout << "\n Yaklaştın!";
    }
    else{cout << "\n Uzak kaldın";}

}