#include <iostream>
using namespace std;

//?Bir int dizisi oluştur. Bir pointer kullanarak dizinin tamamını for döngüsü ve pointer aritmetiğiyle ekrana yazdır.

int main(){

    int dizi[] = {99, 104, 8, 24, 9};

    int *pointer = dizi;

    for(int i = 0; i < 5; i++){
        cout << *(pointer + i) << " ";
    }

}