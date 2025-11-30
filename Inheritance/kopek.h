#ifndef KOPEK_H
#define KOPEK_H
#include "hayvan.h"

class Kopek : public Hayvan
{
public:
    Kopek(string ad);
    ~Kopek();
    void Havla();

    static int getKopekSayisi(){ // Static fonksiyonlar header içinde tanımlanabilir, atama yapılabilir.
        return kopekSayisi;
    }

     static  int karesiniHesapla(int x);

private:
    static int kopekSayisi; // Kaç kere Kopek clasının kullanıldığını hesaplıyoruz.
};

#endif // KOPEK_H
