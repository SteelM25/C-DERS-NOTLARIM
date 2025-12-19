#include <iostream>
using namespace std;

//Template, C++'ta farklı veri tipleriyle çalışabilen fonksiyonlar veya sınıflar yazmanızı sağlar. Yani aynı kodu tekrar yazmadan, hem int, hem double, hem string gibi farklı tipler için kullanabiliriz.

//Okey taşı gibi her taşın yerine geçer:)
// Ama bir template değerleri aynı türden olmalı.

//Template fonksiyon kullanımı
template <typename T>
T topla(T a, T b){
    return a + b;
}

//Çıkarma fonksiyonu
template <typename T>
T cikar(T x, T y){
    return x - y;
}

//Template class kullanımı
template <typename T>
class Kare{
private:
    T kenar;
public:
    Kare(T uzunluk){
        kenar = uzunluk;
    }
    T alan(){
        return kenar * kenar;
    }

    void goster(){
        cout << "Kenar uzunluk: " << kenar << endl;
    }
};

//Ornek Dikdortgen sinifi
template <typename T>
class Dikdortgen{
private:
    T kisa;
    T uzun;
public:
    Dikdortgen(T _kisa, T _uzun){
        kisa = _kisa;
        uzun = _uzun;
    }
    T alan(){
        return kisa * uzun;
    }

    void goster(){
        cout << "Kisa kenar: " << kisa << endl;
        cout << "Uzun kenar: " << uzun << endl;
    }
};

int main()
{
    // Dikkat et tüm değer çiftleri aynı türdendir!!
    cout << topla(4.9, 9.3) << endl;
    cout << topla(4, 9) << endl;
    cout << topla(string("Merhaba ") , string("Musa")) << endl;

    //Class kullanımında obje tipini önceden belirtmeliyiz.

    Kare<int> k1(9); // int tipinde bir kare
    Kare<double> k2(8.2); // double tipinde bir kare

    k1.goster();
    cout << "K1 alan: " << k1.alan() << endl;

    k2.goster();
    cout << "K2 alan: " << k2.alan() << endl;


    //Örnek Dikdortgen sınıfı

    Dikdortgen<int> a1(3,9);
    Dikdortgen<double> a2(8.9, 2.4);

    a1.goster();
    cout << "A1 alan: " << a1.alan() << endl;

    a2.goster();
    cout << "A2 alan: " << a2.alan() << endl;

    cout << "Çıkarma fonksiyonu int sonucu: " << cikar(9,4) << endl;

    cout << "Çıkarma fonksiyonu double sonucu: " << cikar(3.2, 1.9) << endl;






}
