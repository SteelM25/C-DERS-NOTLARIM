#include <algorithm>
#include <iostream>
using namespace std;

/*Bir fonksiyon yazın:

```cpp
void findMinMax(int dizi[], int boyut);
```

Fonksiyon, dizideki en küçük ve en büyük değeri yazsın.
Ana programda kullanıcıdan 7 sayı alarak diziyi oluşturun ve bu fonksiyonu çağırın.*/

void findMinMax(int dizi[], int boyut){

    //! ilk eleman başlangıç değeri olarak ayarlandı, tüm diziyi taramaya başlangıç değerinden itibaren başlar.
    int enkucuk = dizi[0];
    int enbuyuk = dizi[0];

    //?her seferinde en küçük değer hesaplanır ve en küçük ve en büyük değerler belli olur.
    for(int i = 0; i < boyut; i++){
        enkucuk = min(enkucuk,dizi[i]);
        enbuyuk = std::max(enkucuk,dizi[i]);
    }

    cout << "\nEn küçük değer: " << enkucuk;
    cout << "\nEn büyük değer: " << enbuyuk << endl;

}

int main(){

    int dizi[7];

    for(int i = 0; i < 7; i++){
        cout << i + 1 << ". değeri giriniz: ";
        cin >> dizi[i];
        cout << endl;
    }

    findMinMax(dizi, 7);

}