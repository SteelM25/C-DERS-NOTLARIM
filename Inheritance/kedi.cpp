#include "kedi.h"

//Constructor
Kedi::Kedi(string ad) : Hayvan(ad){ // kedi sınıfıma gelecek ad parametresini hayvan sınıfına gönderdim. Böylece hayvan clasında kullanılacak isim kedi clasına yazdığım isim olacak.
}



void Kedi::fareYakala(){
     cout << Hayvan::getIsim() << " fare yakalıyor..." << endl;
}


