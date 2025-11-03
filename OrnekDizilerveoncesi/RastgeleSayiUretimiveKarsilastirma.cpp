#include <cstdlib>
#include <iostream>
using namespace std;

/*Kullanıcıdan iki sayı alın. 
`rand()` fonksiyonu ile 1 ile 100 arasında rastgele 10 sayı üretin.
Her rastgele sayı için:

* Eğer sayı, kullanıcının girdiği iki sayı arasındaysa ekrana “Aralıkta” yazdırın.
* Aksi halde “Dışında” yazdırın.
  En sonunda, aralıkta kalan sayıların toplamını ekrana yazdırın.*/


int main(){

    int sayi1,sayi2; //? kullanıcıdan alınan sayılar
    int aralikToplami = 0; //? aralıkta kalan sayıların toplamı

    srand(time(0)); //!random fonksiyonu için gerekli

    cout << "\nBirinci sayıyı giriniz: ";
    cin >> sayi1;

    cout << "\nBirinci sayıyı giriniz: ";
    cin >> sayi2;

    for(int i = 0; i < 10; i++){
        
        int rastgelesayi = (random() % 100) + 1;

        if(rastgelesayi <= sayi1 && rastgelesayi >= sayi2 || rastgelesayi <= sayi2 && rastgelesayi >= sayi1){
            cout << rastgelesayi<< " Arasında" << endl;
            aralikToplami += rastgelesayi;
        }
        else{cout << rastgelesayi<< " Dışında" << endl;}
    }
    cout << "\n\nAralıktaki sayıların toplamı: " << aralikToplami;




}