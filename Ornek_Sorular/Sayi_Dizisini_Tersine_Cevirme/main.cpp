#include <iostream>
using namespace std;

/*
    Kullanıcıdan N tane tamsayı alın ve bu tamsayıları kullanıcının girdiği sıranın tam tersi olarak ekrana yazın.
*/

int main()
{
    int adet, duzDizi[adet], tersDizi[adet];

    cout << "Sayı adedi: ";
    cin >> adet;

    //Kullanıcıdan sayıları aldık ve diziye ekledik.
    for(int i = 0; i < adet; i++){
        cout << i + 1 << ". sayıyı giriniz: ";
        cin >> duzDizi[i];
    }

    int sayac = 0; // Yeni dizinin indeks sayacı olarak kullandım, her atamada değerini arttırdım.

    //Yeni diziyi oluşturduk.
    for(int i = adet - 1; i >= 0; i--){
        tersDizi[sayac] = duzDizi[i];
        sayac++;
    }

    cout << "\n\n---Girilen dizinin ters hali---\n\n";
    for(int a = 0; a < adet; a++){
        cout << "   " <<  tersDizi[a] << "  ";
    }





}
