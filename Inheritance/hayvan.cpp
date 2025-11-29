#include "hayvan.h"

//Constructor
Hayvan::Hayvan(string ad){
    Hayvan::isim = ad;
}

void Hayvan::beslen(){
    cout << Hayvan::isim << " besleniyor..." << endl;
}

void Hayvan::uyu(){
    cout << Hayvan::isim << " uyuyor..." << endl;
}

void Hayvan::setIsim(string _isim){
    Hayvan::isim = _isim;
}

string Hayvan::getIsim(){
    return Hayvan::isim;
}
