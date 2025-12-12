#include <iostream>
using namespace std;

class Car{
private:
    string marka;
    string model;
    int yil;
    double hiz;

public:

    Car(string _marka, string _model, int _yil){ // Constructor
        marka = _marka;
        model = _model;
        yil = _yil;
        hiz = 0;
    }

    void setHiz(double h){
        hiz = h;
    }
    double getHiz(){
        return hiz;
    }

    void hizlan(double miktar){
        hiz += miktar;
    }

    void yazdir(){
        cout << "Marka: " << marka << endl;
        cout << "Model: " << model << endl;
        cout << "Cikis Yili: " << yil << endl;
        cout << "Güncel Hiz: " << hiz << endl;
    }
};

int main()
{
    Car araba("Lambo","A1",2025);

    araba.setHiz(75);

    cout << "Mevcut hiz: " << araba.getHiz() << endl;

    araba.hizlan(198.8);

    araba.yazdir();

}
