#include <iostream>
using namespace std;

//*  f(x) = 3x + 2   -  Matematikte böyledir.

int islem(int x){ //! fonksiyonun ismini islem olarak atadım.
    int sonuc =  3*x + 2;
    return sonuc; //* atama kısmına döndürülecek değer -- islem(sonuc)
} //? fonksiyon ataması yaptık.

//! Dikdörtgenin alanını hesaplayan metodu yazalım.
int dikdortgenAlan(int x, int y){
    int alan = x * y;
    return alan; //* böyle yapınca sadece değeri döndürür, biz istediğimiz yerde yazdırırız.
}

//? Burada return olmayacak çünkü hem hesaplayıp hem yazdıracak, return etmeye gerek kalmayacak. Fonksiyonu çağırıp içine değeri girmemiz yeterli. Belli bir tür döndürmediği için void (boş) veri tipi ile atadık.

void kareAlanHesaplaGoster(int kenar){
    cout << "Karenizin alanı: " << (kenar * kenar) << "\n\n";
}

//* Bir değer girilmek zorunda olmayan metod oluşturabiliriz. Sadece çağırmak yeterli.
void selam(){
    cout << "\n\nSelamun Aleyküm\n\n";
}

//* veya string bir değer isteyebiliriz.
void karsila(string isim){
    cout << "Hoşgeldin " << isim << "\n\n";
}

//* String bir değer return edebiliriz ve değer atamasını metod içinde yapabiliriz.(parametre girmeden.)
string adSoyadAl(){
    string ad, soyad, adSoyad;

    cout << "\n Adınızı Giriniz: ";
    cin >> ad;

    cout << "\n Soyadınızı Giriniz: ";
    cin >> soyad;

    adSoyad = ad + " " + soyad;

    return adSoyad; //? Kullanıcıdan isim soyisim alır ve bunları yan yana yazdırır.
}


int main(){ //? Aslında main de bir fonksiyondur(diğer bir ismiyle metoddur.)

    //? fonksiyonu çağırıyoruz.
    int hesaplama = islem(2); //! fonksiyon içine girilen değer hesaplama değişkenine atanır.

    cout << "\n\n Hesabın sonucu: " << hesaplama;


    //? fonksiyonu kullanmak için başka bir değişkene atamak zorunda değilim.
    cout << "\n\n 2. hesabın sonucu: " << islem(3) << endl << endl;

    cout << "Bu dikdörtgenin alanı: " << dikdortgenAlan(4, 9) << "\n\n";

    kareAlanHesaplaGoster(9);

    selam();
    karsila("Musa");

    cout << "\n" << adSoyadAl() << endl;

}