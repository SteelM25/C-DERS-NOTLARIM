#include <iostream>
using namespace std;

void degistir (int& deger){ //? & işaretini ekleyerek atanan değerin her seferinde ilk değerine dönmesini engelledik.
    deger = deger * 2;
    cout << "\nDeğer: " << deger << endl;
}


int main(){

    int sayi = 5;
    degistir(sayi);
    cout << "\nSayi: " << sayi << endl; //! & koymasaydık Sayi: 5 derdi ama & koyduğumuz için ilk değerine geri dönmedi, 10 oldu.

}