#include <iostream>
using namespace std;

/*Tek–Çift Kontrolü (bool dönüş)

Soru:
Bir fonksiyon yaz: bool tekMi(int sayi)

Sayı tekse true, çiftse false döndürsün.

main() içinde 1–20 arası sayıları döngüyle yazdır, yanında “tek” veya “çift” olarak belirt.*/

bool tekMi(int sayi){
    bool sonuc;
    if(sayi % 2 == 0){
        sonuc = false; // false = çift
        return sonuc;
    }
    else{
        sonuc = true; // true = tek
        return sonuc;
    }
}

int main(){

    for (int i = 1 ; i <= 20; i++){
        if(tekMi(i)){
            cout << endl << i << ": tek"; 
        }
        else{
            cout << endl << i << ": çift";
        }
    }
    cout << "\n\n";

}