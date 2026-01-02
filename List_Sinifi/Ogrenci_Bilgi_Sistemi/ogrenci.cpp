#include "ogrenci.h"

Ogrenci::Ogrenci(int _id, string _ad, int _sinavNot) {
    id = _id;
    ad = _ad;
    sinavNot = _sinavNot;
}

void Ogrenci::setId(int _id){
    id = _id;
}
void Ogrenci::setAd(string _ad){
    ad = _ad;
}
void Ogrenci::setSinavNot(int _sinavNot){
    sinavNot = _sinavNot;
}

int Ogrenci::getId(){return id;}
string Ogrenci::getAd(){return ad;}
int Ogrenci::getSinavNot(){return sinavNot;}

void Ogrenci::bilgileriYaz(){
    cout << "\nId: " << id << " , Ad: " << ad << " , Sınav Notu: " << sinavNot << endl;
}



