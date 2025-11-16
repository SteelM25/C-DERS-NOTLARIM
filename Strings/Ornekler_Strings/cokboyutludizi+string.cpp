#include <iostream>
using namespace std;

/*Bir 2x2 tablo oluştur (örnek: şehir isimleri).
Kullanıcıdan şehir adlarını alıp tabloya yerleştir.
Sonra tabloyu düzenli biçimde ekrana yazdır.*/

int main(){

    string dizi[2][2];

    //? Kullanıcıdan değerleri aldık.
    for(int i = 0; i < 2; i++){
        for(int a = 0; a < 2; a++){
            cout << "\nDeğer giriniz: ";
            cin >> dizi[i][a];
        }
    }
    cout << endl;

    for(int i = 0; i < 2; i++){
        for(int a = 0; a < 2; a++){
            cout << dizi[i][a] << " ";
        }
    }


}