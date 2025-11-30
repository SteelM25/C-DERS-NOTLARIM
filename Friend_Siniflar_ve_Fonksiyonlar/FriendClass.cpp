#include <iostream>
#include "ogrenci.h"
using namespace std;

class Hesaplayici {
public:
    void ortalamaHesapla(Ogrenci ogrenci){ // Ogrenci sınıfındaki değerlere ulaşabilmek için o sınıftan bir nesne ürettik.
        int ortalama = (ogrenci.not1 + ogrenci.not2) / 2; // Bu sınıfı friend class olarak eklediğimiz için private değerleri alabiliyoruz.
        cout << ogrenci.ad << " isimli öğrencinin not ortalaması: " << ortalama << endl;
    };
};

int main(){
    Ogrenci ogrenci1("Ahmed",89,99);

    Hesaplayici hesaplayici;
    hesaplayici.ortalamaHesapla(ogrenci1);
}
