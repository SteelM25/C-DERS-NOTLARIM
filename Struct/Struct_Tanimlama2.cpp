#include <iostream>
using namespace std;

struct Ogrenci {
    int ogrenciNo;
    string isim;
    double notOrtalama;
};

int main(){

    Ogrenci ogrenci1;

    ogrenci1.ogrenciNo = 111;
    ogrenci1.isim = "Musa";
    ogrenci1.notOrtalama = 99.9;

    cout << ogrenci1.isim << " " << ogrenci1.notOrtalama << " " << ogrenci1.ogrenciNo << endl;

    //* Daha efektif yöntem
    Ogrenci ogrenci2 = {189, "Muhammed", 99.8};

    cout << ogrenci2.isim << " " << ogrenci2.ogrenciNo << " " << ogrenci2.notOrtalama;





}