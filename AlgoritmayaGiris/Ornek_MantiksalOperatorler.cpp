#include <iostream>
using namespace std;

int main(){

    //* Kullanıcıdan 2 sayı alınıp pozitif negatif durumunu sorgula

    int sayi1,sayi2;

    cout << "\n\n Birinci sayıyı giriniz: ";
    cin >> sayi1;

    cout << "\n\n İkinci sayıyı giriniz: ";
    cin >> sayi2;


    //? ikisi de pozitif
    if(sayi1 > 0 && sayi2 > 0){
        cout << "\n\nHer iki sayı da POZİTİF\n\n";
    }
    //? ikisi de negatif
    else if (sayi1 < 0 && sayi2 < 0){
        cout << "\n\nHer iki sayı da NEGATİF\n\n";
    }
    //? biri negatif biri pozitif
    else if (sayi1 > 0 && sayi2 < 0 || sayi1< 0 && sayi2 > 0){
        cout << "\n\nSAYILARDAN BİRİ NEGATİF, BİRİ POZİTİF\n\n";
    }
    // else {
    //     cout << "\n\n En az bir sayı 0'dır.\n\n ";
    // }

    //? biri 0 diğeri pozitif veya biri 0 diğeri negatif
    else if (sayi1 == 0 || sayi2 ==0){
        //! diğer sayı pozitif mi negatif mi onu sorguluyoruz.
        if(sayi1 < 0 || sayi2 < 0){
            cout << "Sayılardan biri 0, diğeri NEGATİF";
        }
        else if (sayi1 > 0 || sayi2 > 0){
            cout << "\n\nSayılardan biri 0, diğeri POZİTİF\n\n";
        }
        else{
            //? her ikisi de 0 ise..
            cout << "\n\nHer iki sayı da 0'dır.\n\n";
        }
    }

    //? ! operatörü

    // int x = 9;

    // if (! (x<2)){ //! x<2 değeri false'dir. ama !(x<2) değeri true yapar. o yüzden if bloğu çalışır.
    //     cout << "örnek cümle" << endl;
    // }

    bool flag = false;

    if (!(flag)){
        cout << "doğrudur.\n\n";
    }

}