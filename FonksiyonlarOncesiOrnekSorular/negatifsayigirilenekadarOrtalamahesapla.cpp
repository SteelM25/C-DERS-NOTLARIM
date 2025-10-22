#include <iostream>
using namespace std;

/*Negatif Sayı Girilene Kadar Ortalama Hesaplama

Kullanıcıdan sürekli sayı al (`do-while` döngüsüyle).
Negatif sayı girilene kadar girilen tüm pozitif sayıların ortalamasını hesapla.

> Konular: do-while, aritmetik işlemler, koşullu sonlandırma*/

int main(){

    int sayi,adet = 0;
    double toplam = 0;

    do {
        cout << "\n\nLütfen sayi giriniz: ";
        cin >> sayi;

        if(sayi>=0){

            toplam+=sayi;
            adet++;
            cout << endl << "Ortalama: " << (toplam / adet);
        }

    }while (sayi>=0);

    if(adet == 0){ //? sayi<0 yazmadım çünkü zaten döngü negatif sayı girilince bitip buraya geliyor.
        cout << "Geçersiz işlem\n";
    }
    else //? eğer sayı girilmiş ama negatif ise direkt sonucu çıktı verir.
    {cout << endl << "Toplam Ortalama: " << (toplam/adet) << endl;}

}