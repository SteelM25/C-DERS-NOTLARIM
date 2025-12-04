#include <iostream>

using namespace std;

//C++ 11 kullanan idelerde auto fonksiyon kullanımı:

// auto topla(int x, int y) => int{
//     return x + y;
// }

//C++ 14 kullanan idelerde auto fonksiyon kullanımı:

auto cikar(int x, int y){
    return x - y;
}

int main()
{
    // Bir değişkenin veri tipinin derleyici tarafından otomatik olarak tespit edilmesi için auto kullanılır. Kod esnekliği sağlar. 2011 yılından sonraki ide sürümleri için uygundur.

    auto sayi = 11;
    cout << "Sayi: " << sayi << endl;

    auto metin = "Selamun Aleykum";
    cout << "Metin: " << metin << endl;

    auto ondalik = 3.2889;
    cout << "Ondalik: " << ondalik << endl;

    //cout << topla(3,9);
    cout << cikar(9,2) << endl;
}
