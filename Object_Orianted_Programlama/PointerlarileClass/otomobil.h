#ifndef OTOMOBIL_H
#define OTOMOBIL_H

#include <iostream>
using namespace std;

class Otomobil
{
    public:

        //Aslında burada da bir bakıma kapsülleme yaptık. Private içindeki değerleri Otomobil contructor içinde yeni değerlere atadık. ruhsatBilgileriGoster içinde de eşitledik.

        Otomobil(string _renk, string _model, int _beygirGucu, int _kapiSayisi); //Constructor (Class işlemleri başlayınca çalışır.)
        ~Otomobil(); //Class işlemleri bitince yazmak istediğimiz burada olur.

        void ruhsatBilgileriGoster();

        void setOtoRenk(string _renk);
        string getOtoRenk();

        int* pKapiSayisi;

    private:
        string renk;
        string model;
        int beygirGucu;
};


#endif // OTOMOBIL_H
