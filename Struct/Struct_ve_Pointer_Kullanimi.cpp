#include <iostream>
using namespace std;

struct Ogrenci {
    int ogrenciNo;
    string isim;
    double notOrtalama;
};

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

    Ogrenci ogrenci1 = {109, "Ertuğrul Koçak", 99.9};

    //? new kullanmadığım için *ptr şuan stack içinde tutuluyor ve delete etmeye gerek yok.
    Ogrenci* ptr = &ogrenci1; //* artık ogrenci1 içeriğine *ptr ile ulaşabilirim.
    
    // adres üstünden de böyle ulaşabilirim.
    cout << "\nOgrenci No: " << ptr->ogrenciNo <<
            " İsim: " << ptr->isim <<
            " Not ortalaması: " << ptr->notOrtalama << endl; 



    Ogrenci ogrenci2 = {88, "Musa", 89.9};

    //Yukarıda *p ataması yaptığım için tekrar yıldız koymaya gerek yok.
    ptr = &ogrenci2;

    cout << "\nOgrenci No: " << ptr->ogrenciNo <<
            " İsim: " << ptr->isim <<
            " Not ortalaması: " << ptr->notOrtalama << endl; 






    

}