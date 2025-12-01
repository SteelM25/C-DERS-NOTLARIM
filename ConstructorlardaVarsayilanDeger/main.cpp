#include <iostream>

using namespace std;

class Kadro {
public:
    // Kadro(string tip = "Varsayılan", double katsayi = 1.0){  // Parametreli Constructor (Varsayılan değerleri burada atayarak boş yazmayabiliriz.)
    //     kadroTip = tip;
    //     maasKatsayisi = katsayi;
    // }

    // 2 yöntemin de ortak kullanıldığı Initializer List kullanımı. Hem varsayılan değerleri hem de eşlemeyi tek satırda yapıyoruz. Parantez içine başka şeyler yazabiliriz.
    Kadro (string tip = "Varsayılan", double katsayi = 1.0) : kadroTip(tip), maasKatsayisi(katsayi){
        cout << "Initializer List çalıştı\n\n"; // Bura genelde boş bırakılır.
    }

    void yazdir(){
        cout << "Kadro tipi:  " << kadroTip << ", Maas Katsayisi: " << maasKatsayisi << endl;
    }

    // Kadro(){    // Parametresiz Constructor.
    //     //Burada varsayılan değer atamaları yapılır.
    //     kadroTip = "Standart";
    //     maasKatsayisi = 1.0;
    // }

private:
    string kadroTip;
    int maasKatsayisi;
};


int main()
{
    // Kadro k2("Developer",9); // Bunu çağırdığımızda değer ataması yapmak zorundayız. Bu Parametreli Constructor
    // k2.yazdir();

    // Kadro k1; // Bunu çağırdığımızda değer ataması yapmak zorunda değiliz. Bu PARAMETRESİZ Constructor.
    // k1.yazdir();

    Kadro k1; // Varsayılan değerleri yukarıda verdiğimiz için böyle yazarak varsayılan değerleri çekebiliriz.
    k1.yazdir();

    Kadro k2 ("Graphicer",8); // İstersek böyle yeni değer ataması yapabiliriz.
    k2.yazdir();


}
