#include <iostream>
using namespace std;

class Hesap {
private:
    string hesapAdi;
    int hesapNo;
    float bakiye;

public:
    //Varsayılan değerli constructor
    Hesap(string ad = "", int no = 0, float _bakiye = 0) : hesapAdi(ad), hesapNo(no), bakiye(_bakiye){}

    void paraYatir(){
        int yatir;
        cout << hesapAdi << " hesabına yatırmak istediğiniz tutar: ";
        cin >> yatir;

        if(yatir > 0){
            bakiye += yatir;
            cout << "Yeni bakiye: " << bakiye << endl;
        }
        else{
            cout << "Lütfen pozitif bir değer giriniz.." << endl;
        }
    }

    void paraCek(){
        int cek;
        cout << hesapAdi << " hesabından çekmek istediğiniz tutar: ";
        cin >> cek;

        if(cek <= bakiye){
            bakiye -= cek;
            cout << "Yeni bakiye: " << bakiye << endl;
        }
        else{
            cout << "Lütfen geçerli bir değer giriniz...\n\n";
        }
    }

    void bilgiYazdir(){
        cout << "Hesap sahibinin adı: " << hesapAdi << endl << "Hesap No: " << hesapNo << endl << "Bakiye: " << bakiye << "\n\n";
    }

};

int main()
{
    Hesap h1("Ali Kayahan",172123, 250.75);
    Hesap h2("Berna Ozan", 174153, 0);

    h1.paraCek();
    h1.bilgiYazdir();

    h2.paraCek();
    h2.bilgiYazdir();

    return 0;
}















