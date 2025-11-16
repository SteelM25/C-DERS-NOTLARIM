#include <iostream>
using namespace std;

/*Kargo Ücreti Hesaplama

Kullanıcıdan paketin ağırlığını ve mesafe (km) değerini al.

* İlk 5 kg için taban ücret 20 TL.
* Her ek kg için +5 TL, her 100 km için +3 TL ekle.
  Eğer mesafe 1000 km’den fazlaysa %10 indirim uygula.

> Konular: if-else, aritmetik işlemler, mantıksal operatörler*/

int main(){

    double kg, km,tutar;

    cout << "\n\n Tevhid Kargo'ya Hoşgeldiniz\n\n";

    cout << "\n Paket ağırlığını giriniz: ";
    cin >> kg;

    cout << "\n Mesafeyi kilometre cinsinden giriniz: ";
    cin >> km;

    if(kg <= 5 && kg > 0){
        if(km <= 1000){
            tutar = 20 + ((km / 100.0) * 3);
            cout << "\n Toplam tutar: " << tutar;
        }
        else if(km > 1000){
            tutar = (20 + (km / 100.0) * 3);
            cout << "\n Toplam tutar: " << tutar - (tutar * 10 / 100);
        }
    }
    else if(kg > 5){
        if(km <= 1000){
            tutar = (20 + ((kg - 5)*5) + (km / 100.0) * 3);
            cout << "\n Toplam tutar: " << tutar;
        }
        else if(km > 1000){
            tutar = (20 + ((kg - 5)*5) + (km / 100.0) * 3);
            cout << "\n Toplam tutar: " << tutar - (tutar * 10 / 100);
        }
    }
    else{cout << "\n Geçerli bir değer giriniz.";}

}