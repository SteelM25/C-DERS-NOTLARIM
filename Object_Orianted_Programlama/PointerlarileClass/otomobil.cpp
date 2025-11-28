#include "otomobil.h"

//Constructor
Otomobil::Otomobil(string _renk, string _model, int _beygirGucu, int kp) {
    cout << "Constructor Çağırıldı"<< endl;
    renk = _renk;
    beygirGucu = _beygirGucu;
    model = _model;
    pKapiSayisi = new int(kp);  // *pKapiSayisi = kp;  aynı şey.
}

//Destructor (Özellikle destructor amacı; class içinde oluşturulan pointerların delete edilmesidir)
Otomobil::~Otomobil(){
    cout << "Destructor Çağırıldı" << endl;
    delete pKapiSayisi;
}

void Otomobil::ruhsatBilgileriGoster(){
    cout << "Model: " << Otomobil::model << endl;
    cout << "Renk: " << Otomobil::renk << endl;
    cout << "Beygir Gücü: " << Otomobil::beygirGucu << endl;
    cout << "Kapı Sayısı: " << *(Otomobil::pKapiSayisi) << endl;
}

void Otomobil::setOtoRenk(string _renk){
    renk = _renk;
}
string Otomobil::getOtoRenk(){
    return renk;
}
