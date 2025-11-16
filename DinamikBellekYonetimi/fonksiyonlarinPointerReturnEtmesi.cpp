#include <iostream>
using namespace std;


int* fonksiyon(){   //pointer dönen bir fonksiyon. //?Yani bir değişkenin Adresi bu fonksiyona eşitlenir. *fonksiyon o değişkenin DEĞERİNİ alır.
    int* p = new int;
    *p = 37;
    // p = NULL; //? eğer bu değer sürekli değişecekse null yapmak daha güvenlidir.
    return p; //*p değerinin ADRESİNİ döndü.
}



int main(){

    int *ptr;
    
    //* *ptr değerinin adresi ile fonksiyon'dan dönen p adresini eşitledik. Bu durumda *ptr=*p olur.
    ptr = fonksiyon();

    if(ptr != NULL){
        cout << *ptr << endl;
        delete ptr; // eğer bu bir döngü olsaydı ve değer dinamik olsaydı ptr sürekli değişeceği için bellekte yer kaplamaması için eski değer silinmeli.
    }

}