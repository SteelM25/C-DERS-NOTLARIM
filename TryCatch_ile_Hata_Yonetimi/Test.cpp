#include <iostream>
#include "hatasinifi.h"
using namespace std;

// class için ayrı dosya oluşturup daha temiz kod yazmış olduk.

int main() {

    try {
        int x;
        cout << "x: ";
        cin >> x;

        if(x<0){
            throw HataSinifi("Hata mesaji no: 1");
        }
        else if(x==0){
            //throw HataSinifi("Hata mesaji no: 12");//Daima ilk throw çalışır ve catch bloğuna geçer. O yüzden sonraki   satırlar çalışmaz. Eğer if else gibi şart bloklarında olursa çalışır.

            throw 101; // int değeri yakalayan catch bloğu oluşturmalıyım.
        }
        else{
            throw 102;
        }


    }


    catch(HataSinifi h){
        cout << "Hata mesajı yakalandı. Hata mesajı: " << h.getHataMesaji() << endl;
    }

    catch (int hataKodu){
        cout << "Hata mesajı yakalandı. Hata mesajı: " << hataKodu << endl;
    }


    //çoklu hata yakalama / Hata türü belli olmaz ama.
    // catch(...){
    //     cout << "Hata mesajı yakalandı." << endl;
    // }



}
