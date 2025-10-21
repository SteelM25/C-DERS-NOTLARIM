#include <iostream>
#include <cmath> //! Matematiksel işlemleri içeren kütüphanedir.

using namespace std;

int main(){

    /*
    int sonuc,x,y;

    cout << "Lütfen üssünü almak istediğiniz sayıyı giriniz: ";
    cin >> x;

    cout << x << " sayısının kaçıncı kuvvetini bulmak istiyorsunuz: ";
    cin >> y;

    //? Değerler alındıktan sonra işlemler yapılır.

    sonuc = pow(x,y); //? x'in y. üssünü alıyor.

    cout << "İşleminizin sonucu: " << sonuc << endl;
    */

    //! YUVARLAMA
    //* floor, aşağı tam sayıya yuvarlar. yani 2.7'yi 2'ye yuvarlar.
    //* ceil, yukarı tam sayıya yuvarlar. yani 2.1'i 3'ye yuvarlar.
    //* round, en yakın tam sayıya yuvarlar.

    int sonuc;

    sonuc = round(2.5);

    //cout << "Sonuç: " << sonuc << endl;
    cout << "Sonuç: " << round(sonuc) << endl;

}