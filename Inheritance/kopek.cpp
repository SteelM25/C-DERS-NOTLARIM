#include "kopek.h"

Kopek::Kopek(string ad) : Hayvan(ad) {}

void Kopek::Havla(){
    cout << Kopek::getIsim() << " havlıyor" << endl;
}
