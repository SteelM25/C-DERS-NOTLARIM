#include <iostream>
using namespace std;

class Sekil {
protected:
    string ad;

public:
    Sekil(string ad) {
        this->ad = ad;
    }

    virtual void alanHesapla() {
        cout << "Seklin alani hesaplanamadi.." << endl;
    }

    virtual void yazdir() {
        cout << "Sekil adi: " << ad << endl;
    }

    virtual ~Sekil() {
        cout << "Sekil destructor\n";
    }
};

class Dikdortgen : public Sekil {
public:
    int en;
    int boy;

    Dikdortgen(int _en, int _boy)
        : Sekil("Dikdortgen"), en(_en), boy(_boy) {}

    void alanHesapla() override {
        cout << "Alan: " << en * boy << endl;
    }

    void yazdir() override {
        cout << "Dikdortgen | En: " << en << " Boy: " << boy << endl;
    }
};

class Daire : public Sekil {
public:
    int yaricap;

    Daire(int _yaricap)
        : Sekil("Daire"), yaricap(_yaricap) {}

    void alanHesapla() override {
        cout << "Alan: " << 3.14 * yaricap * yaricap << endl;
    }

    void yazdir() override {
        cout << "Daire | Yaricap: " << yaricap << endl;
    }
};

int main() {
    Sekil* s1 = new Dikdortgen(5,10);
    s1->alanHesapla();
    s1->yazdir();
    delete s1;

    s1 = new Daire(7);
    s1->alanHesapla();
    s1->yazdir();
    delete s1;
}
