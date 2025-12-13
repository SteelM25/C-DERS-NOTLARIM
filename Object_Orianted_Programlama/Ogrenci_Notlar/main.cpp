#include <iostream>
using namespace std;

class Ogrenci{
private:
    string ad;
    int yas;
    double* notlar;
    double ortalama;

public:
    Ogrenci(string _ad, int _yas){
        ad = _ad;
        yas = _yas;
        notlar = new double[3];
        notlar[0] = 0;
        notlar[1] = 0;
        notlar[2] = 0;
    }
    ~Ogrenci(){
        delete[] notlar;
    }

    void notGir(double n1, double n2, double n3){
        notlar[0] = n1;
        notlar[1] = n2;
        notlar[2] = n3;
    }
    void ortalamaHesapla(){
        ortalama = (notlar[0] + notlar[1] + notlar[2]) / 3;
    }

    void yazdir(){
        cout << "Ad: " << ad << endl;
        cout << "Yaş: " << yas << endl;
        cout << "Notlar: " << notlar[0] << ", " << notlar[1] << ", " << notlar[2] << endl;
        cout << "Ortalama: " << ortalama;

    }
};

int main()
{
    Ogrenci* ogr = new Ogrenci("Musa", 22);

    ogr->notGir(98,89.7,77.9);
    ogr->ortalamaHesapla();
    ogr->yazdir();

    delete ogr;

}
