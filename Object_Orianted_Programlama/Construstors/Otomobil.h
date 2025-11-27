#include <iostream>
using namespace std;


class Otomobil {
public:

    void ruhsatBilgileri();

    // Altta private olarak tanımladığım özellikleri public kısmında çekebilirim.
    Otomobil(string _renk, string _model, int _beygirGucu); //Constructor tanımı yaparak tek satırda tüm özelliklerin girilmesini sağlarız.

    //Kapsülleme. Private içindeki değeri fonksiyon kullanarak başka bir değer ile bağlayarak aldık.
    void setMy(int _my);
    int getMy();

private:
    string renk;
    string model;
    int beygirGucu;
    int my;

};
