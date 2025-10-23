#include <iostream>
using namespace std;

//? Bir fonksiyonun aynı isimle, aynı dönüş tipinde (int, void ..) farklı parametrelerle(veya parametre tipi farklı olmalı - yani biri string almışsa diğeri başka tipte parametre almalı) birden fazla kez çağırılmasına fonksiyon aşırı yüklenmesi (function overloading) denir. Bu KOD OKUNABİLİRLİĞİNİ VE İŞLEVSELLİĞİNİ ARTTIRIR.

void ekranaHataMesajiYaz(){ //! void olduğu için return olmayacak, sadece çağıracağız.
    cout << "\n\nOtomatik hata mesajı" << endl;
}

//* Şimdi aynı isimle başka bir fonksiyon oluşturuyorum.
void ekranaHataMesajiYaz(string mesaj){
    cout << mesaj << endl;
}

//* şimdi aynı fonksiyonu farklı bir parametre ile oluşturuyorum.(aynı parametre ile oluşturulmaz.)
void ekranaHataMesajiYaz(int hataKodu){
    cout << "Hata kodu: " << hataKodu << endl;
}


int main(){

    ekranaHataMesajiYaz();
    ekranaHataMesajiYaz("Manuel hata mesajı");
    ekranaHataMesajiYaz(1333223232);


}