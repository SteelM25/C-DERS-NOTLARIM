#include <iostream>
#include "ogrenci.h"
#include <list>
using namespace std;

void menuyuGoster(){
    cout << "****************************\n";
    cout << "        Menu           \n";
    cout << "****************************\n";

    cout << "1-) Yeni Kayit Ekle\n"
            "2-) Tüm Listeyi Göster\n"
            "3-) Ogrenci Id ile Kayıt Sil\n"
            "4-) Ogrenci Bul\n"
            "5-) Çıkış";
}

void ogrenciEkle(list<Ogrenci>* lst){
    int id;
    string ad;
    int sinavNot;

    cout << "Ogrenci id: ";
    cin >> id;
    cin.ignore();


    cout << "Ogrenci ad: ";
    getline(cin, ad);

    cout << "Ogrenci sınav notu: ";
    cin >> sinavNot;

    Ogrenci ogr(id,ad,sinavNot);
    lst->push_back(ogr);
}

void showList(){

}

void ogrenciSil(){

}

void ogrenciAra(){

}

int main()
{
    list<Ogrenci>* ogrenciList = new list<Ogrenci>();

    int secim = 0;

    do{
        menuyuGoster();
        cout << "\nYapmak istediğiniz işlemi seçiniz: ";
        cin >> secim;

        if(secim == 1) ogrenciEkle();
        else if(secim == 2) showList();
        else if(secim == 3) ogrenciSil();
        else if(secim == 4) ogrenciAra();
        else if(secim == 5) {
            cout << "\nÇıkış yapılıyor...";
            break;}

        else{
            cout << "Geçersiz bir değer...";
        }

    }while(secim != 5);




    return 0;
}
