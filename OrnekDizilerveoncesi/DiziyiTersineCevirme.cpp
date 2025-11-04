#include <iostream>
using namespace std;

/*Bir fonksiyon tanımlayın:

```cpp
void reverseArray(int dizi[], int boyut);
```

Fonksiyon, diziyi **yerinde (in-place)** tersine çevirsin.
Kullanıcıdan 6 elemanlı bir dizi alın, fonksiyonu çağırın ve sonucu ekrana yazdırın.*/

void reverseArray(int dizi[],int boyut){

    for(int i = boyut - 1; i>-1; i--){
        cout << dizi[i] << " ";
    }

}


int main(){

    int dizi[6];

    //? Dizi içeriğini kullanıcıdan aldığımız değerlerle doldurduk.
    for(int i = 0; i < 6; i++){
        cout << i + 1 << ". değeri giriniz: ";
        cin >> dizi[i];
    }

    reverseArray(dizi, 6);

}