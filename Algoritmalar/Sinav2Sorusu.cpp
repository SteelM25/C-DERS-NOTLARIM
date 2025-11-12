#include <iostream>
using namespace std;

//? 20 ile 40 arasındaki sayıların tüm bölenlerini (sayı ile kalansız bölünen sayılar) bulan ve ekrana yazdıran bir program yazınız.


int main(){

    for(int i = 20; i <= 40; i++){
        cout << "\n\n" << i << " sayısının bölenleri: ";
        for(int a = 1; a <= i; a++){
            if(i%a==0){
                cout << a << " ";
            }
        }
    }

    
}