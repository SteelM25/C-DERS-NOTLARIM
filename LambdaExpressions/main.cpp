#include <iostream>
using namespace std;

// Lambda Expression klasik bir fonksiyon yazmak için önce bir isim tanımlamak yerine, kodun içinde, anonim olarak hızlıca oluşturabileceğiniz bir mini fonksiyondur.
// Genelde kısa ve tek seferlik işlemler için tercih edilir.
// Hangi metod içinde oluşturulursa sadece o metod içinde kullanılabilir. Mesela main içinde oluşturulursa sadece main içindek kullanılabilir.

//Yapısı:
/*
    [captures](parametreler) -> donus_turu {
        //fonksiyon gövdesi
    }

*/
// captures: Dışarıdaki yerel değişkenleri lambda içine nasıl alacağınızı belirler
// parametreler: Normal fonksiyondaki parametre listesi gibidir.
// donus_turu: İsteğe bağlıdır; yazmaya gerek kalmayabilir, derleyici otomatik çıkarır
// fonksiyon gövdesi: İstediğiniz işlemleri burada yaparsınız (tek satır veya çok satır olabilir)

int main()
{
    // cout << [](int a, int b) {return a + b; }(3,7) << endl; // anonim bir lambda - anonim olunca parametresini (3,7) burada atama yapıyoruz.

    auto toplam = [](int a, int b) {return a + b;};

    int x = 9;
    int y = 2;
    int sonuc = toplam(x,y); // lambdayı çağırdık

    cout << sonuc << endl;

    // capture kullanıyoruz.

    int count = 0;

    // [] değil de [&] tüm dış değişkenleri referans olarak yakalar. [] yapsaydım dışarıdaki count değişkeni etkilenmezdi!
    auto arttir = [&]() { // parametresiz
        count++;
    };

    //Lambdayı birkaç kez çağıralım.

    arttir();
    arttir();
    arttir();

    cout << "Count: " << count << endl;

    //_____Dönüş türü

    auto karisikLambda = [](bool kosul) -> double{ // dönüş türünü double olarak ayarladık.
        if(kosul){
            return 42;
        }
        else{
            return 1.4; // tüm koşullardaki dönüş tipleri aynı olursa dönüş türünü ayarlamaya gerek kalmazdı. Yani yukarıda double demem gerekmezdi.
        }
    };

    cout << karisikLambda(true);

    return 0;
}
