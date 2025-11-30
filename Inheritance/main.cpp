#include <iostream>
#include "hayvan.h"
#include "kedi.h"
#include "kopek.h"
#include "kus.h"
using namespace std;




int main()
{
    Kus kus("Kanarya");
    kus.beslen();
    kus.uyu();
    kus.uc();

    cout << endl;

    Kopek kopek("Lessi");
    kopek.beslen();
    kopek.uyu();
    kopek.Havla();

    Kopek kopek2("Kınali");

    Kopek* kp = new Kopek("Alabaş");

    // cout << "Köpek Sayısı: " << Kopek::kopekSayisi << endl;
    cout << "Köpek Sayısı: " << Kopek::getKopekSayisi() << endl;

    delete kp;

    // cout << "Köpek Sayısı: " << Kopek::kopekSayisi << endl;
    cout << "Köpek Sayısı: " << Kopek::getKopekSayisi() << endl;

    cout << endl;

    Kedi kedi("Mıno");
    kedi.beslen();
    kedi.uyu();
    kedi.fareYakala();

    cout << Kopek::karesiniHesapla(9) << endl;


}
