#include <iostream>
using namespace std;
#include <random> // bu sınıfı include etmemiz gerek.

/*
    uniform_int_distribution (int için), uniform_real_distribution (ondalik için) sınıflarını kullanarak random sayı üretme

- rand() ile üretilen sayıların "dağılımı" tam düzgün değildir.
- Yani bazen 2'ler çok çıkar, bazen 5 hiç çıkmaz.
- uniform_int_distribution istatistiksel olarak gerçek eşit olasılıklı dağılım yapar.
- Büyük projelerde (oyunlar, simülasyonlar, yapay zeka) mutlaka uniform_int_distribution kullanılır(profesyonel kullanım)

*/

int main(){

    random_device rd; // Gerçek rastgelelik kaynak nesnesidir(donanımdan sayı alır.)

    //Random sayı üretme motoru (Mersenne Twister Algoritması)
    mt19937 motor(rd());

    uniform_int_distribution<int> dagilim(1,10); // 1 ile 10 arasında tam sayılar üret.

    int rastgeleSayi = dagilim(motor); // motor ile yukarıda belirtilen aralıkta bir rastgele sayı üretir.

    // döngü içine sokarak kaç tane rastgele sayı üretmesini ayarlayabilirim.

    uniform_real_distribution<double> aralik(1.0, 9.99);
    double rastgeleDouble = aralik(motor);


    cout << "Üretilen rastgele int sayi: " << rastgeleSayi << endl;
    cout << "Üretilen rastgele double sayi: " << rastgeleDouble << endl;



}
