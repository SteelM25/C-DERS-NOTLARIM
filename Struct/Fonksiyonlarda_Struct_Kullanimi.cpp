#include <iostream>
using namespace std;

struct Ogrenci {
    int ogrenciNo;
    string isim;
    double notOrtalama;
};

// & işaretiyle referans almış olduk ve orijinal dosya üzerinde çalışıp düzenleyebiliriz. & işaretini eklemezsek aynı struct'ın kopyası oluşturulur! ve kopya üzerine yapılan değişiklikler orijinal olanı etkilemez. Ayrıca sürekli veri kopyalayarak belleği yorar.
void ogrenciDurumYazdir(Ogrenci &ogr){
    //ogr.ogrenciNo = 27; // buradan değişiklik yapabiliriz. & ile referansa ulaştık çünkü.

    if(ogr.notOrtalama < 50){
        cout << ogr.isim << " sınıfta kaldı..";
    }
    else{
        cout << ogr.isim << " sınıfı geçti, tebrikler.";
    }
}

int main(){

    Ogrenci ogrenciler[3];

    ogrenciler[1] = {1, "Musa", 90.9};

    ogrenciDurumYazdir(ogrenciler[1]);

}