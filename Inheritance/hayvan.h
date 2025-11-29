#include <iostream>
using namespace std;

class Hayvan{
public:
    Hayvan(string ad);
    void beslen();
    void uyu();

    void setIsim(string _isim); //Burada private olarak atanmış ismi almak için set get kullanıyoruz.
    string getIsim();

private:
    string isim;

};
