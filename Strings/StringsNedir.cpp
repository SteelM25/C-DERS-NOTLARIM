#include <iostream>
using namespace std;

//* C Tipi String

    //? C++'tan önce C dilinde kullanılan klasik string yapısıdır. C tipi string, karakter dizilerinin char dizisi (char[]) ile temsil edilmesidir ve son karakteri null karakteri (\0) ile biter (çift tırnak içindeki değerlerde koymaya gerek yok).

//* Modern C++: std::string kullanımı

    //? C++ ile birlikte gelen string sınıfı, daha kolay ve güvenli bir metin işleme sunar.
    // C++ dili C dilinden esinlenilerek geliştirilmiş ve C dilindeki stringler C++ dilinde destekleniyor. Ama daha modern ve güvenli yöntemi kullanmak daha iyidir.


int main(){

//! C Tipi String Örneği

    char mesaj[] = "Merhaba"; //* Her bir karakteri barındıran ve son elemanı \0 olan bir dizi tanımlamış olduk.

    int uzunluk = 0;

    while (mesaj[uzunluk] != '\0'){
        uzunluk++; //todo: Toplam karakter uzunluğunu hesaplıyoruz.
    }

    cout << "Uzunluk: " << uzunluk << endl;

//! Modern C++ Tipi String Örneği

    string mystr = "Selamun";
    mystr.append(" Aleykum"); //? append metodu belirtilen stringe ekleme yapabilmeyi sağlar.
    cout << mystr << endl;
    

//! C tipi stringi C++ tipine çevirme

    //? yeni bir string değişkeni oluşturup eski tip stringi yeniye atamasını yapıyoruz.
    string yeniMesaj = string(mesaj);

    yeniMesaj.append(" Musa, Nasılsın?");

    cout << yeniMesaj << endl;
    




}