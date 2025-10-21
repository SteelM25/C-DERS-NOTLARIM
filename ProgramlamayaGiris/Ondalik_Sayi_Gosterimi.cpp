#include <iostream>
#include <iomanip> //? varsayılan olarak çıktı verirken sayıların tüm küsüratı yazılmaz. Bunu yazmaya yarayan fonksiyonları içeren kütüphanedir.

using namespace std;

int main(){

    double deger = 123.428329;

    //setprecision(N) manipülatörü toplam anlamlı rakam sayısını ayarlar. //!Son basamak bir üst sayıya yuvarlanır.
    //cout << setprecision(5) <<deger << endl;

    //* Noktadan sonraki digits sayısının gösterimini ayarlamak için fixed (yuvarlar) ile setprecision birlikte kullanılır.

    cout << fixed << setprecision(4) << deger << endl; //! virgülden sonra 4 karakter olsun ve son karakter sabit kalsın.





}