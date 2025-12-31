#include <iostream>
#include <map>
#include <string>
using namespace std;

//Değerler key, value şeklinde tutulur. key benzersiz olmalıdır. aynı key ile tekrar başka bir değer eklenirse ilk keyin değeri güncellenir.

// map sinifi, içindeki keyleri varsayılan olarak küçükten büyüğe doğru sıralar. Eğer keyler string olursa o zaman da A'dan Z'ye doğru sıralar.

int main()
{   //  key          ,      value
    //öğrenci okul no, not ortalaması

    map<int, float> mOgrenciNotlari;

    //Ekleme
    mOgrenciNotlari[101] = 99.2;
    mOgrenciNotlari[21] = 87.4;
    mOgrenciNotlari[100] = 78.9;

    // insert ile Ekleme
    mOgrenciNotlari.insert({109, 79.1});

    //Listeleme
    cout << "\nOgrenci numaraları ve Not ortalamaları\n";

    //Küçükten büyüğe doğru sıralı şekilde listeyi yazdırıyoruz.
    for(const auto& ogrenci: mOgrenciNotlari){
        //first key'i, second value'yi tutar.
        cout << "Ogrenci No: " << ogrenci.first << ", Not ortalaması: " << ogrenci.second << "\n";
    }


}
