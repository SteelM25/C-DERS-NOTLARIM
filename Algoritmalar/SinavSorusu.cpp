#include <iostream>
#include <string>
using namespace std;


//? 4 basamaklı ve rakamları birbirinden farklı kaç tane tam sayı olduğunu ekrana yazdırın.

int main(){

    int sayac = 0;

    for(int i = 1000; i <= 9999; i++){
        string metin = to_string(i);
        
        if(metin[0] != metin[1] and metin[0] != metin[2] and metin[0] != metin[3] and metin[1] != metin[2] and metin[1] != metin[3] and metin[2] != metin[3]){
            sayac++;
            cout << i << " - ";
        }
        
    }

    cout << "\n\n Toplam: " << sayac;

}