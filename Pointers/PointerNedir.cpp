#include <iostream>
using namespace std;

int main(){

/*Değerler Ram bellekte şu şekilde yer alır.

    ADRES       İÇERİK      ADI
    1001          7          x      */ //Bu normal bir değişken atamasıdır.

    int x = 7;
    int y = 9;

    //? Pointer ise İÇERİK DEĞİL ADRES BARINDIRIR. Pointer içinde adres tutan özel bir değişken tipidir.

    //! Değişken isminden önce * kullanılır ve adresini alacağımız değerden önce & olur.

    int *ptr = &x; //todo: Yani x değişkeninin ADRESİNİ ptr değişkeninde tuttuk. Tanımlamayı daha sonra yapabiliriz.

    int *ptr2; //* adres tanımlaması, adres ataması yaptık.
    ptr2 = &y;  //? y değerinin Ram bellekteki değerini ptr2 değerinde tuttuk. & işareti 'address of' anlamında.

    //* Bir değişkenin adresini tanımladığımız pointer'ın sahip olduğu değeri almak için yine başına *koyarak çağırırız.

    cout << *ptr << endl;   //? Değeri aldık.
    cout << ptr << endl;            //! Adresi aldık.

    //Pointer üzerinde değişkenin içeriğini değiştirebiliriz.
    *ptr = 23;
    cout << *ptr << endl;


}