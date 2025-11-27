#include <iostream>
#include "Otomobil.h"

using namespace std;

int main()
{
    Otomobil otomobil1("Mavi","Lamborgini",99);
    Otomobil otomobil2("Siyah","BMW",98);

    otomobil1.ruhsatBilgileri();
    cout << endl;
    otomobil2.ruhsatBilgileri();

    otomobil2.setMy(2025);
    cout << "Otomobil çıkış yılı: " << otomobil2.getMy();

}
