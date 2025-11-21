#include <iostream>
using namespace std;
//* Kodlar yukarıdan aşağıya doğru okunduğu için sıralamaya dikkat et.
struct Ogrenci {
    int ogrenciNo;
    string isim;
    double notOrtalama;
};

//Tek bir öğrenci durumu yazdırma
void ogrenciDurumYazdir(Ogrenci &ogr){
    //ogr.ogrenciNo = 27; // buradan değişiklik yapabiliriz. & ile referansa ulaştık çünkü.

    if(ogr.notOrtalama < 50){
        cout << ogr.isim << " sınıfta kaldı..";
    }
    else{
        cout << ogr.isim << " sınıfı geçti, tebrikler.";
    }
}

//? Tüm öğrencilerin durumunu yazdırma (diziyi parametre olarak gönderince otomatik olarak referansı(orijinali alır. Yani & koymaya gerek yok.))
void tumOgrencilerDurum(Ogrenci students[], int size){
    cout << "\n---Ogrenci Durumları---" << endl;

    for (int i = 0; i < size; i++){
        cout << students[i].ogrenciNo << " " << students[i].isim << " " << students[i].notOrtalama << endl;
        ogrenciDurumYazdir(students[i]);
        cout << endl << endl;
    } 


}


int main(){



    //Ogrenci ogrenci[3];

    //ogrenci[1] = {1, "Musa", 90.9};

    //ogrenciDurumYazdir(ogrenci[1]);

    //--------

    Ogrenci ogrenciler[3] = {
        {1, "Musa", 23.9},
        {2, "Tayfun", 96.9},
        {3, "Ertuğrul", 99.9}
    };

    tumOgrencilerDurum(ogrenciler, 3);

}