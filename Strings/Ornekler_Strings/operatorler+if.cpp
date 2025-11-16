#include <iostream>
#include <string>
using namespace std;

/*Kullanıcıdan iki kelime al.
Eğer her iki kelimenin ilk harfi aynıysa veya son harfi aynıysa,
“Benzer kelimeler” yaz.
Aksi halde “Farklı kelimeler” yaz.*/

int main(){

    string kelime1,kelime2;

    cout << "\nBirinci kelimeyi giriniz: ";
    cin >> kelime1;

    cout << "\nİkinci kelimeyi giriniz: ";
    cin >> kelime2;

    if(kelime1.front() == kelime2.front() || kelime1.back() == kelime2.back()){
        cout << "\nBenzer kelimeler";
    }
    else{
        cout << "\nFarklı kelimeler";
    }

}