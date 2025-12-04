#include <iostream>
using namespace std;

class Complex{

private:
    double reel, sanal;

public:
    Complex(double r = 0, double s = 0){ // Constructor
        reel = r;
        sanal = s;
    }

    //ÜYE FONKSİYONLAR
    //----
// + operatörünü aşırı yükleme
// c1 + c2 = c1.topla(c2) şeklinde.
    Complex operator +(const Complex& other){ // & ile referans alarak orijinal nesne üzerinde işlem yaparız, gereksiz kopyalama olmaz.
        return Complex(reel + other.reel, sanal + other.sanal);
    }

    // - operatörünü aşırı yükleme
    Complex operator -(const Complex& other){
        return Complex(reel - other.reel, sanal - other.sanal);
    }

    // * operatörü aşırı yükleme
    Complex operator *(const Complex& other){
        double newReel = (reel * other.reel) - (sanal * other.sanal);
        double newSanal = (reel * other.sanal) + (sanal * other.reel);
        return Complex(newReel, newSanal);
    }

    //-------------------
    //GLOBAL FONKSİYONLAR

    // << operatörünü aşırı yükleme. Örneğin, kullanım: cout << c1;
    // bu fonksiyonun Complex sınıfının private bölümüne erişebilmesi için friend olarak tanımlanması gerekir.
                                                    //          cout          ,                   c1
    friend ostream& operator<<(ostream& os, const Complex& c){ // ostream burada cout vb. komutları içeren sınıftır. O yüzden friend kelimesinden sonra ostream yazarak kendi türünde dönüş yapmasını sağladık.
        os << c.reel << " + " << c.sanal << "i";
        return os;
    }



    void display(){
        cout << reel << " + " << sanal << "i" << endl;
    }

};

// int main()
// {
    // Complex c1(2, 3);
    // Complex c2(4, 5);
    // Complex c3 = c1 + c2; // topla

    // Complex c4 = c2 - c1; // çıkar

    // Complex c5 = c1 * c2; // çarp

    // c3.display();
    // c4.display();

    // c5.display();

    // cout << "Gloabal Örnek: " << c3; //   << Global fonksiyonu




// }
