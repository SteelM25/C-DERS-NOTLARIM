#include <iostream> // ? iostream kütüphanesini ekledik. Birçok işlevi ve hazır fonksiyonu kapsayan kütüphanedir.

using namespace std; // ! std=standart

int main() // * Genel Zorunlu Ana Metoddur. Sıralama farketmeksizin her zaman otomatik ilk çalışacak metoddur.
{
    //cout <<"Selamun Aleyküm\n"; //? Konsola çıktı yazdırma kodudur. ters slash n ile altta bir satır boş bırakır.

    // * "cout" gibi özel keyword isimleriyle değişken atamamak daha güvenlidir.

    cout << "Selam" << endl; //? bu da alt satırda boşluk bırakmanın başka bir yolu

    //return 0; // ! Başarılı işlemler için 0, hata için 0 dışında bir değer dönmesini sağladık. 
    //? Son güncellemelerle birlikte artık return 0 yazmaya gerek yok, otomatik olarak 0 döner.
}