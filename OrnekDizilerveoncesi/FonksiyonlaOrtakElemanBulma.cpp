#include <iostream>
using namespace std;

/*İki farklı diziyi (5 elemanlı) kullanıcıdan alın.
Bir fonksiyon tanımlayın:

```cpp
void ortakElemanlar(int d1[], int d2[], int boyut);
```

Fonksiyon, her iki dizide de bulunan ortak elemanları ekrana yazdırsın.
Eğer hiç ortak eleman yoksa “Ortak eleman yok” yazsın.*/

void ortakElemanlar(int d1[], int d2[], int boyut){

    int ortak;

    for(int i = 0; i < boyut; i++){ //? dizi1 içinde dönsün

        for(int a = 0; a < boyut; a++){ //! dizi2 içinde dönsün
            if(d1[i] == d2[a]){
                cout << d1[i] << " elemanı ortaktır." << endl;
                ortak++;
            }
        }
        
    }
    if(ortak == 0){
        cout << "\n\n Ortak eleman yok\n\n";
    }
}
    


int main(){

    int dizi1[5], dizi2[5];

    //* Dizi1 elemanları alındı
    for(int i = 0; i < 5; i++){
        cout << "Dizi1 " << i+1 << ". elemanı giriniz: ";
        cin >> dizi1[i];
    }

    //* Dizi2 elemanları alındı
    for(int i = 0; i < 5; i++){
        cout << "Dizi2 " << i+1 << ". elemanı giriniz: ";
        cin >> dizi2[i];
    }

    ortakElemanlar(dizi1, dizi2, 5);

}