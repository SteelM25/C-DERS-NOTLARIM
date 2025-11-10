#include <iostream>
#include <string>
using namespace std;

/*Kullanıcıdan bir karakter iste.
Bu karakterin türüne göre:

'a', 'e', 'i', 'o', 'u' → “Sesli harf”

'0'–'9' → “Rakam”

Diğer durumlar → “Diğer karakter”
Yazdır.
(switch ile çöz.)*/

int main(){

    char karakter;

    cout << "\nBir karakter giriniz: ";
    cin >> karakter;

    switch(karakter){
        case 'a': cout << "sesli harf"; break;
        case 'e': cout << "sesli harf"; break;
        case 'i': cout << "sesli harf"; break;
        case 'u': cout << "sesli harf"; break;
        case 'o': cout << "sesli harf"; break;

        case '0': cout << "Rakam"; break;
        case '1': cout << "Rakam"; break;
        case '2': cout << "Rakam"; break;
        case '3': cout << "Rakam"; break;
        case '4': cout << "Rakam"; break;
        case '5': cout << "Rakam"; break;
        case '6': cout << "Rakam"; break;
        case '7': cout << "Rakam"; break;
        case '8': cout << "Rakam"; break;
        case '9': cout << "Rakam"; break;

        default: cout << "Diğer karakter"; break;
    }

}