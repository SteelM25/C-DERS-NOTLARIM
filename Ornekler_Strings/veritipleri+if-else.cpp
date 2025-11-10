#include <iostream>
#include <string>
using namespace std;

/*Kullanıcıdan bir kelime al.
Kelimenin uzunluğunu bul (std::string::length()) ve:

Uzunluk 5’ten küçükse “Kısa kelime”,

5–8 arasıysa “Orta kelime”,

8’den büyükse “Uzun kelime” yazdır.*/

int main(){

    string kelime;

    cout << "\nKelimeyi Giriniz: ";
    cin >> kelime;

  
        if(kelime.length() < 5){
            cout << "\nKısa kelime";
        }
        else if(kelime.length() >=5 && kelime.size() < 8){
            cout << "\nOrta kelime";
        }
        else if(kelime.length() > 8){
            cout << "\nUzun kelime;";
        }
    
        
}