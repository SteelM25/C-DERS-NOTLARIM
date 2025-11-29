#include "kus.h"

Kus::Kus(string ad) : Hayvan(ad) {}

void Kus::uc(){
    cout << Kus::getIsim() << " uçuyor..." << endl;
}
