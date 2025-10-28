#include <cstdlib>
#include <iostream>
using namespace std;

/*Rastgele Sayı Üret ve Toplamını Döndür

Soru:
Bir fonksiyon yaz:
int rastgeleToplam(int adet, int min, int max)

adet kadar rastgele sayı üret (örneğin 5 tane).

Her birini min ile max arasında üret.

Hepsinin toplamını döndür.

🧩 Amaç: Döngü içinde fonksiyon çağırmak ve toplama işlemini döndürmek.*/


int rastgeleToplam(int adet, int min, int max){

    int toplam = 0, rasgele = 0;
    

    if(adet > 0){

        for(int i = 1; i <= adet; i++){

            
                            //? bu kısım aslında en fazla (max - min) sayısını üretebileceği anlamına gelir.
            rasgele =min +  (rand() % (max - min + 1)); //! böylece en yüksek ihtimalle max sayısı üretilebilir.
            cout << "oluşturulan sayı: " << rasgele << endl;
            toplam += rasgele;
            
        }
        return toplam;
    }
    
    
    return toplam;
    
    
    
}


int main(){
    
    srand(time(0));

    int adet, min, max;

    cout << "\n\n Sayı adedi giriniz: ";
    cin >> adet;

    cout << "\n\n Minimum sayı giriniz: ";
    cin >> min;

    cout << "\n\n Maksimum sayı giriniz: ";
    cin >> max;

    cout << rastgeleToplam(adet, min, max);
}