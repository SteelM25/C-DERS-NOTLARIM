#include <iostream>
// #include <cstdlib>   -- rand() fonksiyonu için gereklidir.
// #include <ctime>        --time() fonksiyonu için gereklidir.
using namespace std;

int main(){

    //? rand() ve time() fonksiyonları normalde #include <cstdlib> ve <ctime> kütüphanelerini eklemeyi gerektirir ama vs code bunu otomatik olarak iostream kütüphanesinde barındırır.

    //* rand() fonksiyonu rastgele sayı üretmemizi sağlar. Başlangıç noktası vermezsek her seferinde aynı sayıyı üretir. Buna engel olmak için srand() fonksiyonuyla beraber kullanmalıyız.

    //! Bunu ekleyerek tüm rand() fonksiyonlarının değişken değerler üretmelerini sağladım.
    srand(time(0)); //? rastgele sayı üreticisini zaman ile besliyoruz. Yani her saniye yeni bir değer üretir.

    //? time(0): 1970 yılının 1 Ocak 00:00:00 'dan itibaren günümüze kadar saniye cinsinden geçen sayıdır.

    int rastgeleSayi = rand(); //! Sadece böyle yaparsam hep aynı sayıyı üretir.

    //* Örnek

    //1 ile 10 arasında rastgele sayı üretelim

    int rastgeleSayi2 = (rand() % 10) + 1; //?herhangi bir sayının 10'a bölümünden kalan 0 ile 9 arasında değişir. + 1 ekleyince 1'den 10'a kadar olan sayıları alabiliriz.
    cout << "1 ile 10 arası rastgele sayı: " << rastgeleSayi2 << endl;


    cout << rastgeleSayi;

}