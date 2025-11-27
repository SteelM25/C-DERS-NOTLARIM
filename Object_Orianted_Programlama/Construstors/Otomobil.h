#include <iostream>
using namespace std;


class Otomobil {
public:
    string renk;
    string model;
    int beygirGucu;

    void ruhsatBilgileri();

    Otomobil(string _renk, string _model, int _beygirGucu); //Constructor tanımı yaparak tek satırda tüm özelliklerin girilmesini sağlarız.

};
