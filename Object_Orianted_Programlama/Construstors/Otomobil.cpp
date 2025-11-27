#include "Otomobil.h"

Otomobil::Otomobil(string _renk, string _model, int _beygirGucu) {
    renk = _renk;
    beygirGucu = _beygirGucu;
    model = _model;
}

void Otomobil::ruhsatBilgileri(){
    cout << "Model: " << Otomobil::model << endl;
    cout << "Renk: " << Otomobil::renk << endl;
    cout << "Beygir Gücü: " << Otomobil::beygirGucu << endl;
}

//Kapsülleme(private içindeki değeri fonksiyon ile başka bir değer üzerinden aldık.)
void Otomobil::setMy(int _my){
    my = _my;
}
int Otomobil::getMy(){ //setMy fonksiyonuyla yeni değere atadığımız private değerini döndürüyoruz.
    return my;
}
