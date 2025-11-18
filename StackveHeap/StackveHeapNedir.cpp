#include <iostream>
using namespace std;

int main(){

    //? C++ programlarında iki ana bellek bölgesi vardır: Stack Bellek (Yığın), Heap Bellek (Öbek)

    //Stack Bellek, sadece ilgili süslü parantez içindeki yerel verileri tutar, parantez dışına çıkınca siler. Otomatik yönetilir.

    //Heap Bellek, özellikle new, pointer ile yer rezerv ettiğimizde veriler heap bellekte tutulur, delete ile manuel olarak silmezsek sürekli belleği işgal eder.

    //*Yani;
        //Bellek Yönetimi:
            //? Stack için => Otomatik
            //? Heap için => Manuel

    //*Kullanım:
        //? Stack => Yerel değişkenler
        //? Heap => new ile ayrılan değişkenler

    //*Bellekten Silme:
        //? Stack => Otomatik
        //? Heap => delete ile Manuel 

}