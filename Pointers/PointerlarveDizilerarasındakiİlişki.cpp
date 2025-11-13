#include <iostream>
using namespace std;

int main(){

    int arr[] = { 8, 12, 20}; //Bu değerler ram'de sırayla tutulur.

    //? Dizinin her bir elemanı ramde ayrı bir bölümde tutulur. arr değişkeninin değeri ise dizinin ilk elemanının ADRESİ olur.

    //* Yani örneğin 8 değirinin adresi 1001 olsun, arr değişkeninin değeri de 1001 olur.

    int *p = arr; //? Burada p değeri de 1001 oldu/ *p değeri 8 oldu. ARR ZATEN BİR ADRES İÇERDİĞİ İÇİN EK OLARAK &ARR DİYE TANIMLAMAYA GEREK YOK.

    //normal çağırma
    // cout << arr[1] << endl;

    //* pointer ile çağırma / dizilerde değerler ramde sırayla tutulduğu için +1 ekleyerek sonrakini bulabiliriz.
    // cout << *(p + 1) << endl;

    //? Değeri değiştirdik.
    *(p+2) = 22;
    cout << *(p+2) << endl;



}