#include "kopek.h"

int Kopek::kopekSayisi = 0;

//Constructor
Kopek::Kopek(string ad) : Hayvan(ad) {
    kopekSayisi++; // Bu class her çağırıldığında bu değer 1 arttırılır.
}

//Destructor
Kopek::~Kopek(){
    kopekSayisi--;  //oluşturulan nesne yok edildiğinde toplam değerden düşer. Böylece en son toplam oluşturulan sayıyı bulabiliriz.
}


void Kopek::Havla(){
    cout << Kopek::getIsim() << " havlıyor" << endl;
}

int Kopek::karesiniHesapla(int x){
    return x * x;
}
