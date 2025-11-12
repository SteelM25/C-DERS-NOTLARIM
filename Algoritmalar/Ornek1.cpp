#include <iostream>
using namespace std;

//? Kullanıcıdan bir tam sayı alın, girilen sayıya kadar olan asal sayıları yazdırın.
//* Bir sayı sadece 1'e ve kendisine bölünebiliyorsa asaldır. Yani bir asal sayının tam bölünebildiği sadece 2 sayı vardır!!

int main(){

    int sayi;

    cout <<"\nLütfen bir değer giriniz: ";
    cin >> sayi;

    for(int i = 2; i <= sayi; i++){
        int kalan = 0; //Kalan adetini burada topluyoruz. 2 ise asaldır, fazla ise değildir.
        for(int a = 1; a <= i; a++){
            if(i % a == 0){ //Aldığımız değeri kendisine kadar olan sayılara bölüyoruz.
                kalan++;
            }
        }
        if(kalan == 2){
        cout << i << " ";
        }
    }


}