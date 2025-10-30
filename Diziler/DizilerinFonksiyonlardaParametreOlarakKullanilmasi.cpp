#include <iostream>
using namespace std;

//? değerini değiştirmek istediğimiz dizi için isim ve dizi içerik miktarını girmeliyiz.
void diziDegistir(int arr[],int size){
    for(int i = 0; i < size; i++){
        arr[i] = arr[i] + 1;
    }
}


int main(){
    
    //? fonksiyon kullanarak bu dizinin her bir değerini 1 arttırıyoruz.
    int dizi[] = {3,9,12,5,10,1,3};

    diziDegistir(dizi, 7);

    for(int i = 0; i<7; i++){
        cout << dizi[i] << " ";
    }
    cout << endl;


}