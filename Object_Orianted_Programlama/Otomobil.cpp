#include "Otomobil.h"  
// sınıfı bağladık.

//?Burası isimlendirilen içerikleri doldurma kısmı
//Eğer metod class dışında tanımlanırsa bu yöntem kullanılır.
void Otomobil::ruhsatBilgileri(){
    cout << "Model: " << Otomobil::model << endl;
    cout << "Renk: " << Otomobil::renk << endl;
    cout << "Beygir Gücü: " << Otomobil::beygirGucu << endl;
}