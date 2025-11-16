#include <iostream>
using namespace std;

/*Basit ATM Sistemi

Başlangıçta bakiye 1000 TL.
Kullanıcı `switch-case` menüsünden bir işlem seçsin:
1- Para Yatır
2- Para Çek
3- Bakiye Görüntüle
4- Çıkış
İşlem sonunda bakiye durumunu göster.

> Konular: switch-case, while (menü tekrarları), aritmetik işlemler, if-else*/

int main(){

    int bakiye = 1000;
    int yatir, cek, secim;
    bool aktif = true;

    while(aktif){
        cout << "\n\n Yapmak istediğiniz işlemi seçiniz: \n\n";
        cout << "1-Para yatır, 2-Para çek, 3-Bakiye görüntüle, 4-Çıkış";
        cin >> secim;

        if(secim <= 4 && secim > 0){
            
            switch (secim) {

                case 1: 
                    cout << "\n\n Yatırmak istediğiniz tutarı giriniz: ";
                    cin >> yatir;
                    bakiye += yatir;
                    cout << "Toplam tutar: " << bakiye;
                    break;

                case 2:
                    cout << "\n\n Çekmek istediğiniz tutarı giriniz: ";
                    cin >> cek;
                    if(cek <= bakiye){
                        bakiye -= cek;
                        cout << "\n\n Kalan tutar: " << bakiye;
                    }
                    else{
                        cout << "Geçersiz bakiye";
                    }
                    break;
                
                case 3:
                    cout << "\n\n Toplam bakiyeniz: " << bakiye;
                    break;

                case 4:
                    cout << "\n\n Çıkış yapılıyor.";
                    aktif = false;
                    break;
            
                    
            }
        }
        else {
            cout << "\nGeçersiz bir değer girdiniz. Lütfen 1-4 arasında bir sayı girin.\n";
            
            //? sonsuz döngüyü engellemek için cin giriş akışını sıfırlamak gerekir:
            cin.clear();                // cin hata durumunu sıfırla
            cin.ignore(1000, '\n');     // hatalı girdiyi tampondan temizle
            continue;                   // tekrar döngüye dön
        }
                /*Eğer kullanıcı geçersiz bir şey girerse (örneğin harf ya da boşluk),
        cin bozulur ve secim artık okunmaz.
        continue; deyince döngü tekrar başa döner ama cin hâlâ bozuk olduğu için
        artık tekrar değer girilmez → yani program sürekli aynı else kısmına girer → sonsuz döngü.*/
            
    }
}