#include <iostream>
using namespace std;

/*Kullanıcıdan 5 adet kelime al.
Bu kelimeleri bir std::string dizi[5] içine kaydet.
Daha sonra bu dizideki en uzun kelimeyi bul ve yazdır.*/

int main(){

    string dizi[5];

    //* Kullanıcıdan 5 adet kelime aldık ve dizi içine kaydettik.
    for(int i = 0; i < 5; i++){
        cout << i+1 <<". kelimeyi giriniz: ";
        cin >> dizi[i];
    }

    string kelime;

    for(int i = 0; i < 5; i++){
            if(kelime.length() > dizi[i].length()){
                kelime = kelime;
            }
            else{
                kelime = dizi[i];
            }
    }
    cout << "\nEn uzun kelime: " << kelime;

}