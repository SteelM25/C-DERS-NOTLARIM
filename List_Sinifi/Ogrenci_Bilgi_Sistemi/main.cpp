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

void showList(list<Ogrenci>* lst){
    list<Ogrenci> :: iterator it;

    for(it= lst->begin(); it != lst->end(); it++){
        it->bilgileriYaz();
    }
    cout << endl;
}

void ogrenciSil(list<Ogrenci>* lst){
    int id;
    cout << "Silmek istediğiniz Öğrenci ID: ";
    cin >> id;

    for(auto it = lst->begin(); it != lst->end(); ++it){
        if(it->getId() == id){
            lst->erase(it);
            cout << "Öğrenci silindi.\n";
            return;
        }
    }

    cout << "Öğrenci bulunamadı.\n";
}


void ogrenciAra(list<Ogrenci>* lst){
    int id;
    cout << "Bulmak istediğiniz Öğrenci ID: ";
    cin >> id;

    list<Ogrenci>::iterator it;

    for(it = lst->begin(); it != lst->end(); it++){
        if(it->getId() == id){
            it->bilgileriYaz();
            return;
        }
    }

    cout << "Öğrenci Bulunamadı..\n";

}

int main()
{
    list<Ogrenci>* ogrenciList = new list<Ogrenci>();

    int secim = 0;

    do{
        menuyuGoster();
        cout << "\nYapmak istediğiniz işlemi seçiniz: ";
        cin >> secim;

        if(secim == 1) ogrenciEkle(ogrenciList);
        else if(secim == 2) showList(ogrenciList);
        else if(secim == 3) ogrenciSil(ogrenciList);
        else if(secim == 4) ogrenciAra(ogrenciList);
        else if(secim == 5) {
            cout << "\nÇıkış yapılıyor...";
            break;
            }

        else{
            cout << "Geçersiz bir değer...";
        }

    }while(secim != 5);


    delete ogrenciList;

    return 0;
}
