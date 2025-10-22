#include <iostream>
using namespace std;

/*Çift ve 3’ün Katı Olan Sayıları Bul

1’den 100’e kadar sayıları sırayla yazan bir `while` döngüsü kur.
Sadece **hem çift hem de 3’ün katı olan** sayıları ekrana yazdır.

> Konular: while, aritmetik işlemler, mantıksal operatörler*/

int main(){

    int sayi = 1;

    while(sayi<=100){
        while(sayi%2==0 && sayi%3==0){
            cout << " " << sayi;
            break; //? kırmazsak aynı işlemi sürekli tekrarlar, sonsuz döngüye girer.
        }
        sayi++;
    }

}