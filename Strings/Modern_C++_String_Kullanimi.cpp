#include <cstddef>
#include <iostream>
// #include <string>       Vs code editörü iostream <string> kütüphanesini içerdiği için buna gerek yok ama normalde eklenmeli. 

using namespace std;

int main(){

    string meyve = "Elma";

    cout << "Uzunluk: " << meyve.length() << endl;

    cout << "İstediğim bir indeks elemanını alıyorum: " << meyve.at(2) << endl;

    meyve.append(" yemek istiyorum."); //stringe ekleme yaptım.
    cout << meyve << endl;
    //?alternatif birleştirme
    string yeniMeyve = meyve + " sonra yerim.";
    cout << yeniMeyve << endl;


    //todo: 0. indeksten başla toplam 7 karakter yaz demek.
    cout << "Parça aldım: " << meyve.substr(0,7) << endl;
    cout << "Başka parça: " << meyve.substr(5,16) << endl;
    //Yeni bir değişkene atayabiliriz.
    string yeniMetin = meyve.substr(6,16);
    cout << yeniMetin << endl;

    //? değişken içinde istediğimiz bir bölüm var mı yok mu onu arıyoruz. Bulursa başlangıç indeksini verir.
    //todo: int olarak da tanımlanır ama doğru olanı size_t yani pozitif değer değişkeni olarak atamaktır.
    // int konum = meyve.find("istiyorum"); 
    size_t konum = meyve.find("istiyorum"); 

    if(konum != string::npos){ //! eğer aranan değer yoksa string çok büyük bir sayı olan npos değerini döner. Eğer varsa bu değer dönmez yani buna eşit olmaz ve kod bloğu çalışır.
        cout << "Aradığımız metni bulduk. Başlangıç pozisyonu: " << konum << endl;
    }
    else{cout << "Aranan metin bulunamadı" << endl;}
    
    // 5. indeksten itibaren 5 karakter sil demek.
    meyve.erase(5,5);
    cout << meyve << endl;

    // 5. indeksten itibaren yazılan metni ekledik.
    meyve.insert(5,"kesmek");
    cout << meyve << endl;

    // 0.indeksten itibaren 4 karakter silip YERİNE Karpuz kelimesini koydum.
    meyve.replace(0,4,"Karpuz");
    cout << meyve << endl;
}