#include <iostream>
#include <map>
#include <string>
using namespace std;

//Değerler key, value şeklinde tutulur. key benzersiz olmalıdır. aynı key ile tekrar başka bir değer eklenirse ilk keyin değeri güncellenir.

// map sinifi, içindeki keyleri varsayılan olarak küçükten büyüğe doğru sıralar. Eğer keyler string olursa o zaman da A'dan Z'ye doğru sıralar.

int main()
{   //  key          ,      value
    //öğrenci okul no, not ortalaması

    // map<int, float> mOgrenciNotlari; // varsayılan olarak değerler küçükten büyüğe sıralanır.

    //eğer sıralama biçimini değiştirmek istersek:

    map<int, float, greater<int>> mOgrenciNotlari; // Şimdi içindeki değerler büyükten küçüğe doğru sıralanır.

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

    //Search işlemi

    int arananOgrenciNo = 109;

    // end() kavramı tüm map listesinin en sonundaki default değerdir. eğer istenen değer find() ile aranıp bulunmazsa o zaman dönüş end() olur. Bu şart bloğunda eğer aranan değer end() değilse yani varsa diyoruz.
    if(mOgrenciNotlari.find(arananOgrenciNo) != mOgrenciNotlari.end()){
        cout << "\n" << arananOgrenciNo << " numaralı ogrencinin not ortalaması: " << mOgrenciNotlari[arananOgrenciNo] << endl;
    }
    else{
        cout << "\n" << arananOgrenciNo << " numaralı ogrenci bulunamadı..\n";
    }

    //Silme işlemi

    int sil = 100;

    mOgrenciNotlari.erase(sil);
    cout << sil << " numaralı öğrenci silindi..\n";

    for(const auto& a : mOgrenciNotlari){
        cout << "Ogrenci no: " << a.first << ", Not ortalaması: " << a.second << endl;
    }

    // aynı key ile yeni kayıt

    mOgrenciNotlari[101] = 22.9; // var olan key'in değeri değişti.
    cout << "Güncel değer: " << mOgrenciNotlari[101] << endl;

    mOgrenciNotlari[222] = 98.2; // yeni bir key ve değer eklendi

}
