#include <iostream>
using namespace std;

int main(){

    string isim; // * Tanımlama
    isim = "Musa";  //? Atama
    //! Tek satırda yapılabilirdi.

    int yas;
    yas = 21; 

    cout << "Bir zamanlar " << isim << " isminde bir genc varmis." << endl << "Bu genç " << isim << " " << yas <<" yasindaymis" << endl;

    //? Aynı değerleri yeniden atadığımda sırayla ilerler, son geçerli olur ama öncekileri kapsamaz, kendinden sonrakini kapsar.

    isim = "Bayram";
    yas = 23;

    cout << "Ama bu genç " << isim << " ismini sever ama yaşının " << yas << " olmasını istermiş";

    /*
    ? Değişken isimlerinde ilk karakter kesinlikle rakam olamaz
    ! Değişken isimlerinde Türkçe karakter olamaz
    todo Değişken isimlerinde arada boşluk olamaz
    * Değişken isimlerinde arada nokta,virgül vb. olamaz (alt tire olur)
    ? Değişken isimlerinde camelCase yazı stili önerilir (yani iki veya daha fazla kelimeden oluşan değişken isimleri için ilk harf küçük, sonraki her kelimenin ilk harfi büyük.)
    */
}