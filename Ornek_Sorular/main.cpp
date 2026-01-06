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
    //Diziyi 5 elemanlı yapıp elemanlarını kullanıcıdan almak istiyorum.
    int dizi[5];

    //Elemanları kullanıcıdan aldık.
    for(int i = 0; i < 5; i++){
        cout << "Dizinin " << i + 1 << ". elemanını giriniz: ";
        cin >> dizi[i];
    }

    ciftKaresi(dizi,5);






    return 0;
}
