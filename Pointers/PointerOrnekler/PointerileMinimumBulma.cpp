#include <iostream>
using namespace std;

//?Bir fonksiyon yaz. Bu fonksiyon iki int* parametre alsın ve işaret ettikleri değerlerden küçük olanın adresini döndürsün. main() içinde iki sayı girip sonucu test et.

void fonk (int* a, int* b){
    if(*a <= *b){
        cout << *a << " sayısının adresi: " << a << endl;       
    }
    else{
        cout << *b << " sayısının adresi: " << b << endl;
    }
}

int main(){

    int sayi1 = 5,sayi2 = 9;

    int* p1 = &sayi1;
    int* p2 = &sayi2;

    fonk(p1,p2);

}