#include <iostream>
#include "otomobil.h"

using namespace std;

int main()
{

    Otomobil otomobil1("Siyah", "Ford",98,4);

    cout <<"Ford Kapı Sayısı: " <<  *(otomobil1.pKapiSayisi) << endl;

    //class işlemlerine başlayınca constructor çağırılır.
    Otomobil* p;

    p = new Otomobil("mavi","audi",99,6);

    p->ruhsatBilgileriGoster(); // audi kapı sayısı da dahil

    p->setOtoRenk("Mavi"); //Rengi değiştirmiş olduk.

    cout << "Oto Rengi: " << p->getOtoRenk() << endl;

    // cout << "Kapı sayısı: " << *(p->pKapiSayisi) << endl;


    delete p; //p silinip class işlemleri bitince otomatik olarak destructor çağırılır.




    return 0;
}
