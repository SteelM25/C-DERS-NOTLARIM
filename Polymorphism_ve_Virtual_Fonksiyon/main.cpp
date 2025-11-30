#include <iostream>

using namespace std;


//Base class
class Hayvan {

public:
    // ana class içinde virtual(sanal) keywordü ile oluşturduğum fonksiyonu alt classlarda özelleştirerek ana class içinden alt classların özelliklerini çekebilirim. İşte bunu yapmak Polymorphism oluyor.
    virtual void sesCikar(){
        cout << "Hayvan sesCikar fonksiyonu çağırıldı\n\n";
    };

    void yazdir(){
        cout << "Hayvan sınıfının yazdır metodu çağırıldı\n\n";
    }

};

//Child class : Kedi
class Kedi : public Hayvan{

public:
    void sesCikar(){
        cout << "Miyav miyav.. Moooo!\n";
    };

    void yazdir(){
        cout << "Kedi sınıfının yazdır metodu çağırıldı\n\n";
    }

};

//Child class : Kopek
class Kopek : public Hayvan{
public:
    void sesCikar(){
        cout << "Hav hav...\n";
    };
    void yazdir(){
        cout << "Köpek sınıfının yazdır metodu çağırıldı\n\n";
    }
};

void ucKezSesCikar(Hayvan* h){
    for(int i = 0; i < 3; i++){
        h->sesCikar();
    }
}

int main()
{

    Hayvan* pHayvan; // pointer
    Kedi tekir; // Kedi clasına ait bir nesne

    pHayvan = &tekir; // pHayvan üzerinden tekir nesnesinin clasına ulaşabiliriz.

    // pHayvan ->sesCikar(); // Kedi clasına ait olan fonksiyon çalışır..
    pHayvan ->yazdir(); // yazdir fonksiyonu virtual yapılmadığı için ana clasın metodu çalıştı.

    ucKezSesCikar(pHayvan); // Burada kedi sesi 3 kez çalıştı.



    Kopek alabas;
    pHayvan = &alabas; // Şimdi alabas nesnesinin clasına (Kopek) ait değerleri pointer üzerinden kullanabiliriz.

    // pHayvan ->sesCikar(); // Kopek sınıfına ait fonksiyon virtual ile atandığı için hayvan clasından oluşturulan pointer ile çağırıldı.
    pHayvan ->yazdir(); // Bu metod virtual olmadığı için alt class fonksiyonu değil ana class fonksiyonu çalışır.

    alabas.yazdir(); // Bu şekilde kendi fonksiyonunu çağırabiliriz.

    ucKezSesCikar(pHayvan); // Burada köpek sesi 3 kez çalıştı.
    cout << "--------------" << endl;

    //Daha efektif kullanım.

    Kopek karabas;
    ucKezSesCikar(&karabas);

    Kedi minik;
    ucKezSesCikar(&minik);











    return 0;
}
