#include <iostream>
using namespace std;

/*Saat Ücreti Hesaplayıcı

Kullanıcıdan günlük çalışma saati ve saatlik ücret bilgisi al.

* Eğer çalışma süresi 8 saati geçerse, fazla mesai için her saat %50 zamlı ücret uygula.
* Negatif veya 24’ten fazla giriş yapılırsa “Geçersiz veri” uyarısı ver.

> Konular: if-else, mantıksal operatörler, aritmetik işlemler*/

int main(){

    int saat,ucret,maas;

    cout << "\n Günlük çalışma saatini giriniz: ";
    cin >> saat;

    cout << "\n Saatlik ücret giriniz: ";
    cin >> ucret;


    //? 0-8 saat arası çalışma
    if(saat <= 8 && saat > 0){
        maas = saat * ucret;
        cout << "\n\n Toplam Maaşınız: " << maas;
    }

    //? 8-24 saat arası çalışma
    else if(saat > 8 && saat <=24){
        maas = saat * (ucret + (ucret * 50 / 100));
        cout << "\n\n Toplam Maaşınız: " << maas;
    }
    else{cout << "\n\n Geçersiz veri";}

}