/*
    todo: Kullanıcıdan 3 adet sınav notu alınız. (Sınav notları tamsayı şeklinde olmalı). Daha sonra bu notların ortalamasını bulup ekrana aşağıdaki gibi 2 şekilde yazdırın:

    ? 1-) double olarak küsüratlı (noktadan sonra 2 digit hassasiyet olsun)
    ! 2-) Sonucu tamsayı olarak yazdırsın, tam yuvarlama yapabilir.

*/


#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main (){

    int not1, not2, not3;
    double ortalama; //? ortalama küsüratlı olacağı için double olarak atamalıyız. Double yazdırınca tamsayı olarak yuvarlayabilirim.

    cout << "Merhaba, birinci sınav notunuz nedir: ";
    cin >> not1;

    cout << "Merhaba, ikinci sınav notunuz nedir: ";
    cin >> not2;

    cout << "Merhaba, üçüncü sınav notunuz nedir: ";
    cin >> not3;

    //? Değerleri aldıktan sonra ortalamayı hesaplıyorum.

    ortalama = double (not1 + not2 + not3) / 3; //! orlama zaten double ama notlar int olduğu için ayrıca sonucu da double türüne çevirerek küsüratlı değer elde edebilirim.

    cout << "Sonucun küsüratlı değeri: ";
    cout << fixed << setprecision(2) << ortalama << endl; //todo --Virgülden sonraki kısmı alabilmesi için işlem yapılan değer (ortalama) double veya float olarak atanmış olmalı.

    // ? int tamDeger = round(ortalama);

    //! Yeni değer atamak yerine çevirmeleri kod satırında yapabiliriz.
    cout << "Sonucun tam sayı değeri: " << int (round(ortalama));

}