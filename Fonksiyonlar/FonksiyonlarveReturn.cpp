#include <iostream>
using namespace std;

//*  f(x) = 3x + 2   -  Matematikte böyledir.

int islem(int x){ //! fonksiyon ismini islem olarak atadım.
    int sonuc =  3*x + 2;
    return sonuc; //* atama kısmına döndürülecek değer -- islem(sonuc)
} //? fonksiyon ataması yaptık.



int main(){

    //? fonksiyonu çağırıyoruz.
    int hesaplama = islem(2); //! fonksiyon içine girilen değer hesaplama değişkenine atanır.

    cout << "\n\n Hesabın sonucu: " << hesaplama;

}