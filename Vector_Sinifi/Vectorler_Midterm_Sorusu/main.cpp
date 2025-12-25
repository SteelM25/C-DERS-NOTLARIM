#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Personel{
private:
    int personelNo;
    string isim; // personel adı ve soyadı
    string kadro; // pozisyon. Örneğin mühendis, sekreter vs.

public:

    Personel(int _no, string _isim, string _kadro){
        personelNo = _no;
        isim = _isim;
        kadro = _kadro;
    }

    void print() const{
        cout << "Personel no: " << personelNo << endl;
        cout << "Ad Soyad: " << isim << endl;
        cout << "Kadro: " << kadro << endl;
    }

    int getPersonel_No() const {return personelNo;}
    string getIsim() const {return isim;}
    string getKadro() const {return kadro;}

};

void personelEkle(vector<Personel>& vPrs){
    int no;
    string isim,kadro;

    cout << "Personel No: ";
    cin >> no;
    cin.ignore();

    cout << "İsim ve Soyisim: ";
    getline(cin,isim);

    cout << "Kadro: ";
    cin >> kadro;

    // vPrs.push_back(Personel(no,isim,kadro));
    vPrs.emplace_back(no,isim,kadro); // Bu daha performanslıdır, memory'de kopyalama olmadan işlem yapar.
    cout << "\nPersonel başarıyla eklendi.." << endl;
}

void personelListele(const vector<Personel>& vPList){
    if(vPList.empty()){
        cout << "Personel listesi boş\n";
        return;
    }
    cout << "\n---Personel Listesi---\n";
    for(const auto& personel : vPList){
        personel.print();
    }
}

void personelAra(const vector<Personel>& vPersoneller){
    int no;
    cout << "Aramak istediğiniz personel no: ";
    cin >> no;

    for(const auto& personel : vPersoneller){
        if(personel.getPersonel_No() == no){
            cout << "\nAradığınız personel bulundu:\n";
            personel.print();
            return;
        }
    }
    cout << "Personel bulunamadı..\n";
}

void personelSil(vector<Personel>& vPersoneller){
    int no;
    cout << "Silmek istediğiniz personel numarasını giriniz: ";
    cin >> no;

    for(auto it = vPersoneller.begin(); it != vPersoneller.end(); it++){
        if(it->getPersonel_No() == no){
            vPersoneller.erase(it);
            cout << "\nPersonel başarıyla silindi..\n";
            return;
        }
    }

    cout << "Personel bulunamadı..\n";
}


int main()
{
    vector<Personel> vPersoneller;
    int secim;

    do{
        cout << "\n---Personel Yönetim Sistemi---\n\n";

        cout << "Yapmak istediğiniz işlemi seçiniz\n";

        cout << "1- Personel Ekle\n";
        cout << "2- Personel Listele\n";
        cout << "3- Personel Ara\n";
        cout << "4- Personel Sil\n";
        cin >> secim;

        switch(secim){
        case 1:
            personelEkle(vPersoneller);
            break;
        case 2:
            personelListele(vPersoneller);
            break;
        case 3:
            personelAra(vPersoneller);
            break;
        case 4:
            personelSil(vPersoneller);
            break;
        case 5:
            cout << "Programdan Çıkılıyor...\n";
            break;

        default:
            cout << "Geçersiz değer girildi..\n";
        }

    }while(secim != 5);















    return 0;
}
