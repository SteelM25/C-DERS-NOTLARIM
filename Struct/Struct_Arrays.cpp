#include <iostream>
#include <string>
using namespace std;

struct Ogrenci{
    int ogrenciNo;
    string isim;
    double notOrtalama;
};


int main(){

    Ogrenci ogrenciler[3]; // Kaç öğrenci varsa o kadar adet girebiliriz.

    //Öğrenci bilgi atamaları
    for (int i = 0; i < 3; i++){
        cout << i + 1 << ". öğrenci no: ";
        cin >> ogrenciler[i].ogrenciNo;
        cin.ignore(); //* cin kullanıp enter yapınca otomatik olarak \n ile alt sekme oluşturur. getline direkt satırı okuduğu için bu boş satırı kullanıcı girdisi olarak almasın diye O BOŞ SATIRI SİLDİK.

        cout << i + 1 << ". öğrenci isim: ";
        getline(cin, ogrenciler[i].isim); // cin boşluk karakterine kadar okur, getline ise tüm satırı okur. Bu da ad soyad işlemleri için idealdir.

        cout << i + 1 << ". öğrenci ortalama: ";
        cin >> ogrenciler[i].notOrtalama;
    }

    //Öğrenci listesi
    for(int i = 0; i < 3; i++){
        cout << ogrenciler[i].isim << " " << ogrenciler[i].ogrenciNo << " " << ogrenciler[i].notOrtalama << endl;
    }

}