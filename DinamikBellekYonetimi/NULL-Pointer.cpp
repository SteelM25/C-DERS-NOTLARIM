#include <iostream>
using namespace std;

int main(){

    int* p;
    p = NULL; //? eğer hemen değer atanmayacaksa pointer ADRESİNE NULL değerini vermek önerilir.

    //Daha sonra kontrol ederek değer atayabiliriz.

    if(p != NULL){ // eğer p'nin adresi NULL değilse içeriğini 4 yap.
        *p = 5;
    }

    else{
        p = new int(5); //?  eğer adresi NULL ise içeriğine 5 değerini ata.
    }

}