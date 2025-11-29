#ifndef HAYVAN_H
#define HAYVAN_H
#include <iostream>
using namespace std;

class Hayvan{
public:
    Hayvan(string ad); // Hayvan clasından nesne türetildiğinde isimlendirilsin diye parametre alan constructor tanımladık.
    void setIsim(string _isim); //Burada private olarak atanmış ismi almak için set get kullanıyoruz.
    string getIsim();

    void beslen();
    void uyu();

protected:
    void oyna();

private:
    string isim;

};

//Bir de protected keywordü var. public gibi herkes tarafından görünmez ama kalıtım yapan alt sınıflar tarafından public gibi normal erişim sağlanır. Yani inheritance yapmayan yani alt sınıf olmayan dosyalar public gibi protected kısmına erişemezler.


#endif // HAYVAN_H
