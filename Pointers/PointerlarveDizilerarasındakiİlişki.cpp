#include <iostream>
using namespace std;

int main(){

    int arr[] = { 8, 12, 20}; //!Bu değerler ram'de sırayla tutulur. Yani birbiri ardına gelir.

    //? Dizinin her bir elemanı ramde ayrı bir bölümde ardışık olarak tutulur. arr değişkeninin değeri ise dizinin ilk elemanının ADRESİ olur.

    //* Yani örneğin 8 değerinin adresi 1001 olsun, arr değişkeninin değeri de 1001 olur.

    int *p = arr; //? Burada p değeri de 1001 oldu/ *p değeri 8 oldu. ARR ZATEN BİR ADRES İÇERDİĞİ İÇİN EK OLARAK &ARR DİYE TANIMLAMAYA GEREK YOK.

    //normal çağırma
    // cout << arr[1] << endl;

    //* pointer ile çağırma / dizilerde değerler ramde sırayla tutulduğu için +1 ekleyerek sonrakini bulabiliriz.
    // cout << *(p + 1) << endl; // p=1001 dersek p+1= 1002 olur yani sıradaki dizi değerine 12'ye eşit olur.

    //? Değeri değiştirdik.
    *(p+2) = 22;
    cout << *(p+2) << endl; // Yani dizinin 3.elemanı 2. indeksi değişti. arr[2] = 22 oldu.



}