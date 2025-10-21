#include <iostream>
using namespace std;

int main (){

    //? 4 işlem programı yapıyoruz

    int sayi1,sayi2, sonuc;
    int islem; //* toplama 1, çıkarma 2, çarpma 3, bölme 4 numara olsun.

    cout << "Birinci sayıyı giriniz: ";
    cin >> sayi1;

    cout << "İkinci sayıyı giriniz: ";
    cin >> sayi2;

    cout << "\n\nİşlemi seçiniz: toplama 1, çıkarma 2, çarpma 3, bölme 4 \n\n";
    cin >> islem;

    if (islem == 1){
        //! cout << "İşlemin Sonucu: " << sayi1 + sayi2; Böyle tek seferde de çıktı alabilirim.
        sonuc = sayi1 + sayi2;
        cout << "\n\nİşlemin Sonucu: " << sonuc;
    }
    else if(islem == 2){
        sonuc =  sayi1 - sayi2;
        cout << "\n\nİşlemin Sonucu: " << sonuc;
    }
    else if(islem == 3){ //? örneğin burayı else if değilde if yapsaydım tüm sonuçlarda else kısmı çalışırdı, doğru olsa bile doğru sonucu söyler ve else bloğunu çalıştırırdı. Çünkü if kendisinden önceki ifleri kapsamaz o yüzden birbirinden bağımsız değilse 1 tane if kullanılmalı diğer seçenekler else if olmalı, son kısım ise else olmalı.
        sonuc = sayi1 * sayi2;
        cout << "\n\nİşlemin Sonucu: " << sonuc;
    }
    else if(islem == 4){
        sonuc = sayi1 / sayi2;
        cout << "\n\nİşlemin Sonucu: " << sonuc;
    }
    else{
        cout << "\n\nLütfen geçerli bir değer giriniz!";
    }


}