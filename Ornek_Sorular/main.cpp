#include <iostream>
using namespace std;

/*
    Tek boyutlu bir tamsayı dizisinin içinde 2'ye tam bölünebilen sayıların karesini hesaplayıp bu sayıların yerine yazan (yani diziyi değiştiren) bir fonksiyon yazın.

    Dizinin son halini ekrana yazdırın.

Örn:
    dizi = {2, 7, 12} ise

fonksiyon çağrısı sonrası:
    dizi = {4, 7, 144} olmalı...
*/

void ciftKaresi(int a[], int uzunluk){


    //Dizi elemanlarından çift olanların karesini alıp yeni dizi değerlerini oluşturduk.
    for(int i = 0; i < uzunluk; i++){
        if(a[i] % 2 == 0){
            a[i] = (a[i] * a[i]);
        }
    }

    for(int i = 0; i < uzunluk; i++){
        cout << a[i] << " ";
    }


}

int main()
{
    //Dizi elemanlarını kullanıcıdan almak istiyorum.
    // int boyut;

    // cout << "Dizi kaç elemanlı olsun: ";
    // cin >> boyut;
    // int dizi[boyut];

    // //Elemanları kullanıcıdan aldık.
    // for(int i = 0; i < boyut; i++){
    //     cout << "Dizinin " << i + 1 << ". elemanını giriniz: ";
    //     cin >> dizi[i];
    // }

    // ciftKaresi(dizi,boyut);

    //2. Yol

    int boyut;

    int dizi[] = {12, 4, 3, 9, 8, 6};

    boyut = (sizeof(dizi) / sizeof(dizi[0])); // sizeof metodu int türündeki her bir değeri 4 byte olarak tutar. Yani 1 değer 4, 2 değer 8, 3 değer 12 olarak tutulur. Öyleyse bu metodu kullanıp sonucu 4'e bölersek int dizisinin uzunluğunu bulmuş oluruz.

    ciftKaresi(dizi,boyut);






    return 0;
}
