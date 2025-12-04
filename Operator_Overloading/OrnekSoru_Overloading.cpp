#include <iostream>
using namespace std;
/*
    Aşağıdaki gereksinimlere uygun bir C++ programı yazınız:

1-) Kare adında bir sınıf oluşturun. Bu sınıf, bir karenin kenar uzunluğunu (kenar) tutmalıdır.
2-) + operatörünü aşırı yükleyerek, iki Kare nesnesinin kenar uzunluklarını toplayan ve yeni bir Kare nesnesi döndüren bir fonksiyon tanımlayın.
3-) << operatörünü aşırı yükleyerek, bir Kare nesnesinin kenar uzunluğunu ve alanını ekrana yazdıran bir fonksiyon tanımlayın.
4/) main fonksiyonu içinde en az iki Kare nesnesi oluşturun, bu nesneleri toplayın ve tüm nesneleri cout ile ekrana yazdırın. Programınızın çıktısı her bir karenin kenar uzunluğunu ve alanını içermelidir.
*/

class Kare {
private:
    int kenar;
public:
    Kare(int knr = 0){
        kenar = knr;
    }

    Kare operator+(const Kare& other) {
        return Kare (kenar + other.kenar);
    }

    friend ostream& operator<<(ostream& os, const Kare& x){
        os << "kenar: " << x.kenar << " alan: " << (x.kenar) * (x.kenar) << endl;
        return os;
    }


    void display(){
        cout << "Toplam uzunluk: " << kenar;
    }

};



int main(){

    Kare k1(9); // Kare 1 kenarı
    Kare k2(8); // Kare 2 kenarı

    Kare k3 = k1 + k2; // Kare 3 kenarı

    // k3.display();
    cout << endl;
    cout <<"Kare 1 kenar ve alan: "<< k1; // Kare 1 kenar ve alan
    cout << "Kare 2 kenar ve alan: "<< k2; // Kare 2 kenar ve alan
    cout <<"Kare 3 kenar ve alan: "<< k3; // Kare 3 kenar ve alan












}
