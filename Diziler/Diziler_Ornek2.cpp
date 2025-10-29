#include <iostream>
using namespace std;

/*Kullanıcıdan 4 adet sınav notu girmesini isteyiniz. Her sınav notunun genel ortalamaya farklı yüzdelerde katıldığını varsayalım. Örneğin;
1.sınav: %15
2.sınav: %15
3.sınav: %30
4.sınav: %40

Bu yüzdeleri bir dizi içerisinde saklayınız. Girilen 4 sınav notunu da başka bi dizi içerisinde tutunuz.
Her notu kendi ağırlık yüzdesi ile çarparak toplayınız ve bulduğnuz değeri ekrana "Ağırlıklı ortalama" şeklinde yazdırınız.*/

int main(){

    const int adet = 4;
    
    double notAgirlik[] ={0.15, 0.15, 0.30, 0.40};
    
    double notlar[adet];
    double toplam;

    for (int i = 0; i < adet; i++){
        cout << i + 1 << ". notu giriniz: ";
        cin >> notlar[i];

        //? burada zaten hem çarpıp hem bölme yaptığı için tekrar ortalama diye bir değişken oluşturmaya gerek yok.
        toplam += (notlar[i] * notAgirlik[i]);
    }
    cout << "\nAğırlıklı ortalama: " << toplam;

}