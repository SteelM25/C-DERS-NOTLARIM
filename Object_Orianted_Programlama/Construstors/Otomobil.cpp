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
