#include <iostream>
#include "Otomobil.h"
using namespace std;

//? Daha performanslı olan class'ı başka bir belgede yazmaktır.
// class Otomobil {
//     public:
//         string renk;
// };


int main(){
    // Otomobil otomobil1; //? Class'tan nesne ürettik.

    // Otomobil otomobil2, otomobil3;

    // otomobil1.renk = "Siyah";
    // otomobil2.renk = "Mavi";
    // otomobil3.renk = "Sari";

    // cout << otomobil1.renk << endl;
    // cout << otomobil2.renk << endl;
    // cout << otomobil3.renk << endl;

    Otomobil otomobil1, otomobil2;

    otomobil1.renk = "Siyah";
    otomobil1.model = "Lamborgini";
    otomobil1.beygirGucu = 99;

    otomobil2.renk = "Mavi";
    otomobil2.model = "Ferrari";
    otomobil2.beygirGucu = 90;

    // cout << otomobil1.renk << endl;
    // cout << otomobil2.renk << endl;

    otomobil1.ruhsatBilgileri();
    cout << endl;
    otomobil2.ruhsatBilgileri();





}
