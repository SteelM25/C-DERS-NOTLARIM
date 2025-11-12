#include <iostream>
using namespace std;

int main(){

    int bolunen, bolen;

    cout << "Bolunen: ";
    cin >> bolunen;
    cout << "Bolen: ";
    cin >> bolen;

    int sonuc;

    //? hata olabilecek işlemi try-catch blokları arasına alarak programın çökmesini engelleriz.
    try {
         if(bolen == 0){ //! Hata ihtimali
            throw 9; //* fırlatılan bu sayının bir önemi yok, catch kısmında yakalanır ve orada komut verilir.
         }
         else{ //? Doğru ihtimal
            sonuc = bolunen / bolen;
            cout << "Sonuc: " << sonuc;
         }
    } catch (int hataKodu) {
        cout << "Bolen 0 olmamalı";
    }

}