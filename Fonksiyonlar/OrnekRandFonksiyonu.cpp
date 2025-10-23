#include <iostream>
using namespace std;

//? Min ve Max aralığında rastgele sayı üreten (min ve max dahil) bir fonksiyon yazınız.

int rastgeleSayiUret(int min,int max){

    int rasgeleSayi = min + (rand() % (max - min + 1));
    return rasgeleSayi;

}

int main(){


    srand(time(0));

    int min, max;

    cout << "Minimum değer: ";
    cin >> min;

    cout << "Maximum değer: ";
    cin >> max;

    int sayi = rastgeleSayiUret(min, max);

    cout << min << " ile " << max << " arasında üretilen rastgele sayı: " << sayi;

}