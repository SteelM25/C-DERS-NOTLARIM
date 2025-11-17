#include <iostream>
using namespace std;

//?5 elemanlı bir int dizisi tanımla. Sadece pointer kullanarak dizinin ilk elemanına ve ikinci elemanına erişip ekrana yazdır.

int main(){

    int dizi[] = {55, 92, 13, 4, 0};

    int* ptr = dizi; // dizi = 55'in adresi (örneğin 1001)

    cout << endl << *ptr << endl;
    cout << endl << *(ptr + 1) << endl;

}