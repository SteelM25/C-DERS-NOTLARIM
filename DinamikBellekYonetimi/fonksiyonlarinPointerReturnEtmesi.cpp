#include <iostream>
using namespace std;


int* fonksiyon(){   //pointer dönen bir fonksiyon.
    int* p = new int;
    *p = 37;
    // p = NULL; //? eğer bu değer sürekli değişecekse null yapmak daha güvenlidir.
    return p; //*p değerinin ADRESİNİ döndü.
}



int main(){

    int *ptr;
    
    //* *ptr değerinin adresi ile fonksiyon'dan dönen p adresiyle eşitledik. Bu durumda *ptr=*p olur.
    ptr = fonksiyon();

    if(ptr != NULL){
        cout << *ptr << endl;
        delete ptr; // sürekli değişeceği için bellekte yer kaplamaması için eski değer silinmeli.
    }

}