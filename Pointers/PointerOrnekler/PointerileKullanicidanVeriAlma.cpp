#include <iostream>
using namespace std;

//?Bir int değişken ve onu işaret eden bir pointer tanımla. Kullanıcıdan alınan değeri pointer kullanarak değişkene yazdır.

int main(){

    int sayi;
    int* p = &sayi;

    cout << "\nDeğer giriniz: ";
    cin >> *p;
    cout << "\nGirilen sayı: " << *p << endl;

}