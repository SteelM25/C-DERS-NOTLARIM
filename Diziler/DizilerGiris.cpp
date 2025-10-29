#include <iostream>
using namespace std;

int main(){

    //! 1. yöntem
    int dizi[5]; //? dizi isminde bir dizi oluşturduk ve 5 elemanlı olduğunu belirttik.

    dizi[0] = 12;
    dizi[1] = 88;
    dizi[2] = 9;
    dizi[3] = 1;
    dizi[4] = 23; // son eleman


    cout << "\n Yeni 2.indeks değeri: ";
    cin >> dizi[2]; //* dizinin 3 elemanını (2.indeksi) yeniden atadık.

    for (int i = 0; i<5; i++){
        cout << dizi[i] << " ";
    }
    cout << endl;

    //! 2. yöntem
    int dizi2[] = {3, 55, 87};

    for (int i = 0; i < 3; i++){
        cout << dizi2[i] << " ";
    }
    cout << endl;


    //! string dizi oluştururken çift tırnak kullan
    string mevsimler[] = {"İlkbahar","Yaz","Sonbahar","Kış"};

    for (int i = 0; i < 4; i++){
        cout << mevsimler[i] << " ";
    }
    cout << endl;

}