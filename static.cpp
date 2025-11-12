#include <iostream>
using namespace std;

//* Bir değişken static olarak tanımlandığında, programın ömrü boyunca ona yer ayrılır. Fonksiyon birden fazla kez çağrılsa bile, statik değişken için yer yalnızca bir kez ayrılır ve önceki çağrıdaki değişkenin değeri bir sonraki işlev çağrısına taşınır.

//? Yani atama bir kez yapılır, fonksiyon her çağırıldığında yeni atama kısmı çalışmaz, ilk atanan değer üzerinden hesaplanır.



void fonksiyon1(){

    static int sayac = 0;
    sayac++;
    cout << "\n Fonksiyon1 sayac: " << sayac << endl;

}

int main(){

    fonksiyon1(); //! Burada 1 kere değer atandı, SONRAKİ ÇAĞRILARDA DEĞER ATAMASI YAPILMAZ.
    fonksiyon1();   // +1 (2)
    fonksiyon1();   // +1 (3)
    fonksiyon1();   // +1 (4)
    fonksiyon1();   // +1 (5)
}