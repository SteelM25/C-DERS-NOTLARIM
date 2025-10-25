#include <iostream>
using namespace std;

/*Üç sayıyı parametre olarak alan bir fonksiyon yaz:
int enBuyuk(int a, int b, int c)

Bu fonksiyon üç sayı arasındaki en büyük sayıyı bulup döndürsün.

main() içinde kullanıcıdan 3 sayı al, sonucu yazdır.

🧩 Amaç: Koşul yapılarıyla fonksiyonlarda karar verme pratiği.*/


int enBuyukSayiyiBul (int a, int b, int c){

    if(a >= b){
        if(a >= c){
            return a;
        }
        else{return c;}
    }
    else if(b >= a){
        if(b >= c){
            return b;
        }
        else{return c;}
    }
    else{return c;}

}


int main(){

    int bir,iki,uc;

    cout << "\n\n Birinci sayıyı giriniz: ";
    cin >> bir;

    cout << "\n\n İkinci sayıyı giriniz: ";
    cin >> iki;

    cout << "\n\n Üçüncü sayıyı giriniz: ";
    cin >> uc;

    cout << "\n\n En büyük sayı: " << enBuyukSayiyiBul(bir, iki, uc) << endl;


}