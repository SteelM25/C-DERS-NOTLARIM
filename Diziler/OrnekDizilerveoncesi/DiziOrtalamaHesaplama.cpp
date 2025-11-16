#include <iostream>
using namespace std;

/*Kullanıcıdan 5 adet tam sayı alın.
Bu sayıları bir **diziye** kaydedin ve:

* Dizi elemanlarının ortalamasını bulun.
* Ortalamadan büyük olan elemanları ekrana yazdırın.*/

int main(){

    int dizi[5]; //?5 elemanlı olacak boş bir dizi oluşturdum.
    double ortalama,toplam;//* dizideki sayıların toplam ve ortalamasını barındıracak değişkenler

    //?dizi içini kullanıcının gireceği değerlerle dolduruyoruz.
    for(int i = 0; i < 5; i++){
        cout << i + 1 << ". sayıyı giriniz: ";
        cin >> dizi[i];

        cout << endl;
    }


    //todo: dizi içindeki sayıları toplam değişkeninde biriktiriyoruz/topluyoruz.
    for(int i = 0; i < 5; i++){
        toplam += dizi[i];
    }

    ortalama = toplam / 5; //? ortalama değişkeninin değerini yukarıda toplam değeri oluştuktan sonra burada atıyoruz.

    cout << "\n\nDizideki sayıların ortalaması: " << ortalama << endl;


}