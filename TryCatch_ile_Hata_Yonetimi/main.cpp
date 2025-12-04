#include <iostream>

using namespace std;

int main2()
{


    // try{
    //     int yas;
    //     cout << "Yaşınız:";
    //     cin >> yas;

    //     if(yas >= 18){
    //         cout << "Oturum Açıldı.";
    //     }
    //     else{
    //         throw (yas); // Hatalı olan ihtimal buradan catch bloğuna fırlatılır.
    //     }
    // }

    // catch(int hataNo){
    //     cout << "Erişim engellendi, en az 18 yaşında olmalısınız.";
    //     cout << "Yaşınız: " << hataNo;
    // }


    try {
        int x = 20;
        int y;

        cout << "Pozitif bir değer giriniz: ";
        cin >> y;

        if(y == 0){
            throw 100; // Manuel hata kodu belirledik. Bu blok çalışırsa hataKodu = 100 olucak.
        }
        else if(y < 0){
            throw 101;
        }
        else{
            int z = x / y;
            cout << "Bölüm sonucu: " << z << endl;
        }
    }

    catch(int hataKodu){
        // cout << "Bir exception olustu, hata kodu: " << hataKodu << endl;

        if(hataKodu == 100){
            cout << "0 girmeyiniz." << endl;
            return -1; // Programı kapatabiliriz. Yani sonraki satırlar işlenmez.
        }
        else if(hataKodu == 101){
            cout << "Negatif değer girmeyiniz" << endl;
        }
    }

    cout << "Deneme metin" << endl; // return -1 yapıldığında burası çalışmaz, program kaldığı yerde sona erer.













}
