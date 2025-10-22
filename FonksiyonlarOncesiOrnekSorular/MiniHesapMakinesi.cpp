#include <iostream>
#include <cmath>
using namespace std;

/*4. İşlem Seçici Mini Hesap Makinesi

Kullanıcıdan iki sayı ve bir işlem türü (+, -, *, /) al.
`switch-case` yapısı ile doğru işlemi uygula.
Eğer kullanıcı “/” seçip ikinci sayı 0 girerse “Sıfıra bölünemez” uyarısı ver.

> Konular: switch-case, aritmetik işlemler, if*/

int main(){

    int sayi1,sayi2,islem;
    
    cout << "\n\n Yapmak istediğiniz işlem: ";
    cout << "\n\n 1-toplama  2-çıkarma  3-çarpma  4-bölme \n\n ";
    cin >> islem;
    
    cout << "\n\n Birinci sayı: ";
    cin >> sayi1;
    
    cout << "İkinci sayı: ";
    cin >> sayi2;

    switch(islem){

        case 1: cout << "\nİşlemin sonucu: " << sayi1 + sayi2; break;
        case 2: cout << "\nİşlemin sonucu: " << sayi1 - sayi2; break;
        case 3: cout << "\nİşlemin sonucu: " << sayi1 * sayi2; break;
        case 4: 
            if(sayi2==0) {cout << "\n\n Sıfıra bölünemez"; break;}
            
            //? Sonucu küsüratlı bulmak için önce cmath sınıfını eklemeliyiz. Sonra EN AZ 1 İNT DEGERİ AŞAĞIDAKİ GİBİ DOUBLE YAPMALIYIZ.
            cout << "\nİşlemin sonucu: " <<  static_cast<double>(sayi1) / sayi2; break;
            
            
    }


}