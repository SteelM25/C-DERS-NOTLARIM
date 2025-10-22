#include <iostream>
using namespace std;

/*Yaş ve Boy Uygunluğu

Kullanıcıdan yaş ve boy bilgisi al.
Eğer yaş 18’den büyük **ve** boy 160’tan uzunsa “Uygun”,
sadece biri tutuyorsa “Sınırda”,
hiçbiri tutmuyorsa “Uygun değil” yazdır.

> Konular: if-else, mantıksal operatörler*/

int main(){

    int yas,boy;

    cout << "\n Kaç yaşındasınız: ";
    cin >> yas;

    cout << "\n Boyunuz kaç cm: ";
    cin >> boy;

    if(yas > 18 && boy > 160){
        cout << "\n Uygun";
    }
    else if(yas > 18 || boy > 160){
        cout << "\n Sınırda";
    }
    else{cout << "\n Uygun değil";}

}