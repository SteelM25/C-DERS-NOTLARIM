#include <iostream>
using namespace std;

int main(){
/*
    int x = 7;
    //x = x + 1;
    x++; //* Arttırma operatörü (Postfix) 
    //? ++ değişkenin sağındaysa Postfix, solundaysa Prefix

    int y = 5;
    y--; //* Azaltma operatörü (Postfix)

    cout << x << endl;
    cout << y << endl;

    //! Prefix

    int a = 5;
    ++a;

    int b = 9;
    --b;

    cout << a << endl;
    cout << b << endl;
    */

    //todo Prefix (++x veya --x) ve Postfix (x++ veya x--) Arasındaki Farklar

    //* Postfix'te değişkenin önce değeri kullanılır/atanır sonra arttırma/eksiltme yapılır.
    int x = 7;
    int y = x++; //! ilk önce değişkenin önceki değeri kullanıldığı/atandığı için y=7 olur.

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    //* Prefix'te değişkenin önce değeri arttırılır/eksiltilir SONRA KULLANILIR/ATANIR.

    int a = 5;
    int b = ++a; //! değişkenin önce değeri arttırılır sonra atanır. b = 6 olur.

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    //? Prefix daha hızlı çalışır. 
    //! Özellikle yüksek hacimli döngülerde ++x veya --x kullanmak daha performanslıdır.

}