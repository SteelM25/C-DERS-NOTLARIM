#include <iostream>
using namespace std;

/*İki fonksiyon yaz:
1️⃣ int kare(int x) → sayının karesini döndürür.
2️⃣ int farkKareleri(int a, int b) → iki sayının karelerinin farkını döndürür.
(örnek: a=5, b=3 → sonuç 25 - 9 = 16)

🧩 Amaç: Bir fonksiyonun içinde başka bir fonksiyon çağırmayı öğrenmek.*/


int kare (int x){
    int kare = x * x;
    return kare;
}

int farkKareleri (int a, int b){
    int fark = kare(a) - kare(b);
    return fark;
}


int main(){

    int sayi1,sayi2;

    cout << "\n\n Birinci sayıyı giriniz: ";
    cin >> sayi1;

    cout << "\n\n İkinci sayıyı giriniz: ";
    cin >> sayi2;

    cout << "\n\n Sayıların karelerinin farkı: " << farkKareleri(sayi1, sayi2) << endl;


}