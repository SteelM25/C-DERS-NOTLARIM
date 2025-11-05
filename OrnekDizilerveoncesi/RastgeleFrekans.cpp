#include <iostream>
using namespace std;

/*`rand()` fonksiyonuyla **0–9** arasında 100 rastgele sayı üretin.
Bir dizide bu sayıların frekansını tutun.
Yani:

```cpp
frekans[0] → 0 kaç kez geldi
frekans[1] → 1 kaç kez geldi
...
```

En sık geçen sayıyı ve kaç kez tekrarlandığını bulun.*/

int main(){

    srand(time(0));

    int dizi[100];

    //? 100 elemanlı 0 ile 9 arası bir dizi oluşturdum.
    for(int i = 0; i < 100; i++){
        dizi[i] = (rand() % 10);
        cout << dizi[i] << " ";
    }
    cout << endl << endl;

    for(int i = 0; i < 10; i++){ //? her bir rakamı temel alarak dizi içerisinde aratıyoruz.
 
        int toplam = 0; //! her yeni değer sayısını tutacak değişkendir. Her sayı atladığında sıfırlanması için iç döngünün dışında olmalıdır.


        //*sayacın kıyas yapacağı şekilde tüm 100 değer tek tek alınıp tutulan rakamla kıyaslanıyor.
        for(int a = 0; a < 100; a++){

            //todo: eğer rakam üretilen 100 değer içinde varsa toplam değişkeni arttırılıyor.
            if(i == dizi[a]){
                toplam++;
            }

        }

        //* Her rakam için sorgu bittiğinde onun adedi ekrana çıktı veriliyor.
        cout << i << " elemanı dizide " << toplam << " kere var." << endl;
        

    }

}