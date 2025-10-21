#include <iostream>
using namespace std;

int main(){

    // //bool sicakMi = true;
    // int sicaklik;
    // cout << "Sıcaklık bilgisini giriniz: ";
    // cin >> sicaklik;

    // //? if varsayılan olarak true değer aldığı için sicakmi==true yazmaya gerek yok
    // if (sicaklik >= 35){

    //     cout << "\nOrtam sıcak\n\n";
    // }
    // else {

    //         cout << "\nOrtam sıcak değil\n\n";
    // }

    int kayitliSifre = 1234;
    int kullaniciGirdisi;

    cout << "Şifre Giriniz: ";
    cin >> kullaniciGirdisi;

    if (kayitliSifre == kullaniciGirdisi){
        cout << "\nGiriş Başarılı\n\n";
    }
    else{
        cout << "\nTekrar Deneyiniz\n\n";
    }

}