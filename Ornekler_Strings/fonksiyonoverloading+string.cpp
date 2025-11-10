#include <iostream>
using namespace std;

/*Aynı isimde iki fonksiyon tanımla:

void bilgiYaz(std::string kelime);
void bilgiYaz(std::string kelime, int tekrar);


İlki sadece kelimeyi bir kez yazsın.

İkincisi kelimeyi tekrar kadar ekrana bastırsın.
Main’de her ikisini çağırarak farkı göster*/


void bilgiYaz(string kelime){
    cout << "\nKelimeyi bir kez yazdıran fonksiyon: "<<kelime << endl;
}
void bilgiYaz(string kelime, int tekrar){
    if(tekrar > 0){
        for(int i = 0; i < tekrar; i++){
            cout << i+1 << ". tekrar: " << kelime << endl;
        }
    }
}

int main(){

    string metin;
    int defa;

    cout << "\nEkrana yazdırmak istedğinizi kelime: ";
    cin >> metin;

    cout << "\nKaç kere ekrana yazdırmak istersiniz: ";
    cin >> defa;

    bilgiYaz(metin);
    bilgiYaz(metin,defa);



}