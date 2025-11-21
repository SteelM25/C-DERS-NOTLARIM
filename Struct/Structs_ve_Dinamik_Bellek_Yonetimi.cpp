#include <iostream>
#include <string>
using namespace std;

struct Ogrenci {
    int ogrenciNo;
    string isim;
    double notOrtalama;
};

int main(){

    //Ogrenci struct'ı içinde gezecek *ptr pointer'ı oluşturdum.
    Ogrenci* ptr = new Ogrenci; //! new ile atadığım için işim bitince delete yapmam lazım.

    //?Değerleri kullanıcıdan alıyoruz.
    cout << "Ogrenci No: ";
    cin >> ptr->ogrenciNo; // *ptr = OgrenciNo ile aynı.
    cin.ignore(); //Yeni satır hatasını önlemek için(sonraki string olacak çünkü.)

    cout << " İsim: ";
    getline(cin, ptr->isim);

    cout << " Ortalama: ";
    cin >> ptr->notOrtalama;

    //----

    //* Aldığımız değerleri yazdırıyoruz.
    cout << ptr->ogrenciNo << " " << ptr->isim << " " << ptr->notOrtalama; 

    delete ptr;
    




}