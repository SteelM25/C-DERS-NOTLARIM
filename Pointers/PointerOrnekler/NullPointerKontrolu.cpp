#include <iostream>
using namespace std;

//?Bir pointer oluştur, onu NULL (veya modern C++’ta nullptr) yap. Kullanıcıya "pointer boş mu dolu mu?" şeklinde kontrol yapan bir program yazdır.

int main(){

    int sayi = 7;

    int*ptr = &sayi;

    ptr = nullptr;

    if(ptr==nullptr){
        cout << endl << ptr << endl;
    }
    else{
        cout << "Boş değil" << endl;
    }

}