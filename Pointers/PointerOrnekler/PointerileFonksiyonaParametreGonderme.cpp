#include <iostream>
using namespace std;

//?Bir fonksiyon yaz. Bu fonksiyon bir pointer alsın ve işaret ettiği değeri 1 arttırsın. main() içinde bir değişkeni pointer’la fonksiyona göndererek test et. 

int fonk(int*a){
    return *a + 1;
}

int main(){
    int sayi = 28;

    int* p = &sayi;

    cout << endl << fonk(p) << endl;


}