#include <iostream>
using namespace std;

class BankAccount{
private:
    string sahipAdi;
    int hesapNo;
    double bakiye;
    bool negatifMi(double x){
        if(x < 0){
            cout << "Negatif değer" << endl;
            return false;
        }
        else{
            return true;
        }
    }

public:
    BankAccount(string _isim, int _hesapNo, double _bakiye){        // Constructor 1
        sahipAdi = _isim;
        hesapNo = _hesapNo;
        bakiye = _bakiye;
    }
    BankAccount(string _isim, int _hesapNo){        // Constructor 2
        sahipAdi = _isim;
        hesapNo = _hesapNo;
        bakiye = 0;
    }

    void paraYatir(double miktar){
        if(miktar < 0){
            negatifMi(miktar);
        }
        else if(miktar == 0){
            cout << "0 değeri girildi!" << endl;
        }
        else{
            bakiye += miktar;
        }
    }

    void paraCek(double miktar){
        if(miktar > bakiye){
            cout << "Yetersiz bakiye" << endl;
        }
        else if(miktar < 0){
            negatifMi(miktar);
        }
        else{
            bakiye -= miktar;
        }
    }

    double getBakiye() const {
        return bakiye;
    }

    void yazdir() const{
        cout << "\nHesap Sahibi: " << sahipAdi << endl;
        cout << "Hesap No: " << hesapNo << endl;
        cout << "Bakiye: " << getBakiye() << endl << endl;
    }
};

int main()
{
    BankAccount hesap1("Musa",11, 1000);


    int secim = -1, yatirilan = 0, cekilen = 0;



    while(secim != 0){

        cout << "İşlem seçiniz: \n1 - Para yatır \n2 - Para çek \n3- Bakiye göster \n4 - Bilgileri yazdır \n0 - Çıkış" << endl;

        cin >> secim;

    switch (secim) {

    case 1:
        cout << "Yatırmak istediğiniz tutar: ";
        cin >> yatirilan;
        hesap1.paraYatir(yatirilan);
        break;
    case 2:
        cout << "Çekmek istediğiniz tutar: ";
        cin >> cekilen;
        hesap1.paraCek(cekilen);
        break;
    case 3:
        cout << "Güncel Bakiyeniz: " << hesap1.getBakiye() << endl << endl;
        break;
    case 4:
        hesap1.yazdir();
        break;
    case 0:
        cout << "Çıkış yapılıyor.." << endl << endl;
        break;
    default:
        cout << "Geçersiz işlem.." << endl << endl;
        break;
    }
    }









}
