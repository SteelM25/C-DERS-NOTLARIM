#include <iostream>
using namespace std;

int main (){

    string isim;
    int en, boy, alan;

    
    //? cout ile çıktı yapılır, cin ile kullanıcıdan değer alınır. cout kullanırken <<, cin kullanırken ise >> kullanılır.
    
    cout << "İsminizi Giriniz: ";
    cin >> isim;
    cout << "Merhaba " << isim << " Geometri Hesaplama Programına Hoşgeldin\n\n";
    
    
    cout << "Dikdörtgenin enini giriniz: ";
    cin >> en;
    
    cout << "Dikdörtgenin boyunu giriniz: ";
    cin >> boy;
    
    //! Değerler alındıktan sonra hesaplama yapılmalıdır.
    alan = en * boy;

    cout << "Dikdörtgenin alanı: " << alan << endl;


}