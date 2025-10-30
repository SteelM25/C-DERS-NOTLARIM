#include <iostream>
using namespace std;

//? Kullanıcıdan 4 tane tam sayı alın ve bu tam sayıları kullanıcının girdiği sıranın tam tersi olarak ekrana yazın.
//*Mesela: Kullanıcı 7 9 1 3 girsin, bunları 3 1 9 7 şeklinde ekrana yaz.


int main(){


    int dizi[4]; //4 eleman barındıracak bir dizi tanımladım.

    //?  Kullanıcının girdiği değerleri diziye atama işlemini gerçekleştirdim.
    for(int i = 0; i < 4; i++){
        //!cout kısmını yazmayıp sadece cin >> dizi[i] deyip terminalde her atanan değerden sonra boşluk bırakırsam ve en son enter yaparsam yine aynı işlemi yapmış olurum.
        cout << i + 1 << ". dizi elemanını giriniz: ";
        cin >> dizi[i];
    }
    cout << endl;

    //? Atanan değerleri tersten yazdırdım.
    for (int i = 3; i >= 0; i--){
        cout << dizi[i] << " ";
    }
    cout << endl;


}