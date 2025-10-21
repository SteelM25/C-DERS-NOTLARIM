#include <iostream>
using namespace std;

int main(){

    //? Kullanıcıdan üç tamsayı girişi alan ve bu girdiler arasındaki en küçüğünü bulan bir program yazınız.

    int sayi1,sayi2,sayi3;

    cout<< "\n Birinci sayıyı giriniz: ";
    cin >> sayi1;

    cout<< "\n İkinci sayıyı giriniz: ";
    cin >> sayi2;

    cout<< "\n Üçüncü sayıyı giriniz: ";
    cin >> sayi3;

    if(sayi1 < sayi2)
    {
        if (sayi1<sayi3){
            cout << "\n\n En küçük sayı: " << sayi1;
        }
        else if (sayi3<sayi1){
            cout << "\n\n En küçük sayı: " << sayi3;
        }
        else {

            cout << "\n\n" << sayi1 << " ve " << sayi3 << " eşittir ve en küçük sayılardır.";
        }
    }
    else if(sayi1 == sayi2 && sayi1 == sayi3){
        cout << "\n\n Tüm sayılar eşittir ve " << sayi1 << " değerindedir.";
    }
    else {
        cout << "\n\n En küçük sayı: " << sayi2;
    }

}