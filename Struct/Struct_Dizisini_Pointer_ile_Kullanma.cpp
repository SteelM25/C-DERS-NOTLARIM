#include <iostream>
#include <string>
using namespace std;

struct Ogrenci{
    int ogrenciNo;
    string isim;
    double notOrtalama;
};


int main(){

    int n; //Öğrenci sayısı

    cout << "\nKaç öğrenci kaydedilecek?";
    cin >> n;

    //* Dinamik (heap) bellekte öğrenci dizisi.
    Ogrenci* ogrenciler = new Ogrenci[n];

    for(int i = 0; i < n; i++){
        cout << i + 1 << ". öğrenci no: ";
        cin >> ogrenciler[i].ogrenciNo;
        cin.ignore();

        cout << "\nİsim: ";
        getline(cin, ogrenciler[i].isim);

        cout << "\nNot ortalaması: ";
        cin >> ogrenciler[i].notOrtalama;

    }

    cout << "\n---Öğrenci bilgileri---\n";
    for(int i = 0; i < n; i++){
        cout << ogrenciler[i].ogrenciNo << " " << ogrenciler[i].isim << " " << ogrenciler[i].notOrtalama << endl;
    }

    delete[] ogrenciler;//? dizi struct olduğu için delete[] ile silinmeli.


}