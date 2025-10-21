#include <iostream>
using namespace std;

int main(){

    string isim = "Musa Çelik";
    int dogumYili = 2003;

    float sayisalNotOrtalamasi = 89.7f; // ? sonuna f koymazsak daha detaylı işlemler için kullanılan double veri tipinde algılar ve gereksiz ram işgal eder.

    bool sinifiGectiMi = true; //! doğruysa 1, yanlışsa 0 döner.

    char isimIlkHarf = isim[0]; //* char, tek karakter tutar. bir değişkenin ilk karakterini tutmak için degisken[index numarası] yazarız. İndex numarası 0'dan başlar. Ayrıca direk değer atamak için tek tırnak içinde atarız.

    char harfTut = 'S';


    cout << "Merhaba sayin " << isim << endl;
    cout << "Dogum Yili: " << dogumYili << endl;
    cout << "Sayısal not ortalaması: " << sayisalNotOrtalamasi << endl;
    cout << "Sınıfı geçti mi: " << sinifiGectiMi << endl;
    cout << "İsminizin ilk harfi nedir: " << isimIlkHarf << endl;
    cout << "Tuttuğunuz harf nedir: " << harfTut << endl;

}