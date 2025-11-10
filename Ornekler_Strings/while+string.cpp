#include <iostream>
#include <string>
using namespace std;

/*Kullanıcıdan bir kelime al.
Kelimenin her harfini while döngüsüyle sırayla yazdır.*/

int main(){

    string kelime;

    cout << "\nKelime giriniz: ";
    cin >> kelime;

    int sayac= 0;

    while(sayac < kelime.length()){
        cout << kelime.at(sayac) << endl;
        sayac++;
    }

}