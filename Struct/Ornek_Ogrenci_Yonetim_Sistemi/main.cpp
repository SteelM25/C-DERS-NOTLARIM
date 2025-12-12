#include <iostream>
#include <string>
using namespace std;

struct Ogrenci{
    int id;
    string ad;
    string soyad;

    double not1;
    double not2;

    double ortalama;
};

void ortalamaHesapla(Ogrenci& o){
    o.ortalama = (o.not1 + o.not2) / 2;
}

void bilgileriAl(Ogrenci* dizi, int adet){

    for(int i = 0; i < adet; i++){  //Bilgileri aldık.
        cout << "Öğrenci id: ";
        cin >> dizi[i].id;
        cin.ignore();

        cout << "Öğrenci isim: ";
        getline(cin,dizi[i].ad);
        cin.ignore();

        cout << "Öğrenci soyisim: ";
        getline(cin,dizi[i].soyad);
        cin.ignore();

        cout << "Not 1: ";
        cin >> dizi[i].not1;
        cin.ignore();

        cout << "Not 2: ";
        cin >> dizi[i].not2;

        cin.ignore();

        ortalamaHesapla(dizi[i]);
    }
}



void yazdir(const Ogrenci* dizi, int adet){
    for(int i = 0; i < adet; i++){
        cout << "Öğrenci id: " << dizi[i].id << endl;
        cout << "Öğrenci isim: " << dizi[i].ad << endl;
        cout << "Öğrenci soyisim: " << dizi[i].soyad << endl;
        cout << "Öğrenci not 1: " << dizi[i].not1 << endl;
        cout << "Öğrenci not 2: " << dizi[i].not2 << endl;
        cout << "ortalaması: " << dizi[i].ortalama << endl;
    }
}



int main()
{
    int n;
    cout << "Kaç öğrenci kaydedilecek?: ";
    cin >> n;

    Ogrenci* ogrenciler = new Ogrenci[n];

    bilgileriAl(ogrenciler,n);
    yazdir(ogrenciler,n);


    delete[] ogrenciler;


}
