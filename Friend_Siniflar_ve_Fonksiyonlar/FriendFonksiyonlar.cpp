#include <iostream>

using namespace std;

class Otomobil{
public:
    int yil;
    Otomobil(string _marka, int _yil){
        marka = _marka;
        yil = _yil;
    }

    // ana classta public içine yazılması gerekir.
    friend void bilgileriGoster(Otomobil oto){ // Bu metod çağırıldığında private değerlere erişimi vardır
        cout << oto.yil << " " << oto.marka;
    }


private:
    string marka;
};

/*
int main()
{
    Otomobil otomobil1("Lamborgini",2027);
    bilgileriGoster(otomobil1);
}
*/
