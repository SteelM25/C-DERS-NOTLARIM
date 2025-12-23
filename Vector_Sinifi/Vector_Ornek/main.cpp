#include <iostream>
#include <vector>
#include <string>
using namespace std;

//Otomobil sınıfı

class Otomobil {
private:
    string marka;
    string model;
    int yil;

public:

    //constructor
    Otomobil(string m, string mo, int y) : marka(m), model(mo), yil(y){}

    void bilgiYazdir() const { // aşağıda const kullandığımız döngünün içinde bu metodu çağırdığımız için bunu da const yaptık.
        cout << "Marka: " << marka << ", Model: " << model << ", yil: " << yil << endl;
    }


};

int main()
{
    //Otomobil nesnelerini tutacak bir vektör oluşturuyoruz.

    vector<Otomobil> vGaraj;

    cout << "Garaja otomobiller ekleniyor..." << endl;

    vGaraj.push_back(Otomobil("Toyota","Corolla",2025));
    vGaraj.push_back(Otomobil("Ferrari","f1",2022));
    vGaraj.push_back(Otomobil("Lambo","x2",2024));


    //Garajdaki otomobilleri listeleme
    cout << "Garajdaki otomobiller..." << endl;
    cout << "-------------" << endl;

    for(const Otomobil& oto : vGaraj){ // const yaparsak döngü içinde çağırdığımız metodları da yukarıda const yapmalıyız.
oto.bilgiYazdir();
}


// Garajdaki bir otomobili silme

cout << "\nBir otomobil garajdan siliniyor..\n";
vGaraj.erase(vGaraj.begin() + 1); // 1.indeks (2.eleman) silindi

for(const Otomobil& o: vGaraj){
    o.bilgiYazdir();
}


//Yeni bir otomobil ekleme

cout << "\nYeni bir otomobil garaja ekleniyor..\n" << endl;

vGaraj.push_back(Otomobil("Mercedes","m1",2020));

for(const Otomobil& i : vGaraj){
    i.bilgiYazdir();
}


//Bilgi yazdırma

cout << "\nBilgi yazdırılıyor\n";
// vGaraj[0].bilgiYazdir();     //  1. yöntem
vGaraj.at(0).bilgiYazdir();


//Son eleman yazdırm

cout << "\nSon eleman yazdırılıyor...\n";
vGaraj.at(vGaraj.size() - 1).bilgiYazdir();



}
