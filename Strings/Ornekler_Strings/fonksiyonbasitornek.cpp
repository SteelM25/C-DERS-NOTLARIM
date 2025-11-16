#include <iostream>
using namespace std;

/*Bir fonksiyon yaz:

void kelimeYaz(std::string kelime);


→ Ekrana “Girilen kelime: [kelime]” yazsın.

Sonra bir başka fonksiyon:

int uzunlukBul(std::string kelime);


→ Kelimenin uzunluğunu döndürsün.
Main’de her ikisini çağır.*/


void kelimeYaz(string kelime){
    cout << "\nGirilen kelime: " << kelime << endl;
}

int uzunlukBul(string kelime){
    return kelime.length();
}



int main(){

    string metin;
    cout << "\nUzunluğunu bulmak istediğiniz kelimeyi giriniz: ";
    cin >> metin;

    kelimeYaz(metin);
    cout << "\nKelimenin uzunluğu: " << uzunlukBul(metin);

}