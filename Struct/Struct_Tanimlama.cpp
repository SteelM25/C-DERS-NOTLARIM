#include <iostream>
using namespace std;


//? struct, main dışında tanımlanır. Genellikle Büyük harfle başlanarak tanımlanır. Çünkü struct değişkenleri de küçük harfle tanımlandığı için kafa karışıklığı olmasın.

//struct yapısını kurduk.
struct Nokta {
    int x;
    int y;
}; //? sonunda ; olmalı.


struct Dikdortgen {
    double en; //? Birbirinde farklı veri türleri barındırılabilir.
    int boy;
};


int main(){


    // Nokta struct'ı tipinde bir pt structure değişkeni oluşturdum.
    Nokta pt;

    pt.x = 10;
    pt.y = 20;

    cout << "\nx: " << pt.x << endl;
    cout << "y: " << pt.y << endl;

    //todo: Aynı struct tipinde başka bir struct tanımlanabilir. Yani ana struct TASLAK olarak kullanılabilir, çoğaltılarak kullanılabilir.
    Nokta pt2;

    pt2.x = 50;
    pt2.y = 99;

    cout << "\nx: " << pt2.x << endl;
    cout << "y: " << pt2.y << endl;

    //__-------------------------

    Dikdortgen knr; // Yeni bir struct değişkeni tanımladık.

    knr.boy = 25;
    knr.en = 30;

    int alan = knr.boy * knr.en;

    cout << "\nDikdörtgenin alanı: " << alan << endl;

    //? Dikdortgen struct yapısını başka bir dikdörtgen alanı hesaplamak için kullanabiliriz.

    Dikdortgen knr2;

    knr2.boy = 5;
    knr2.en = 3.3;

    cout << "\n2. Dikdörtgen alanı: " << knr2.boy * knr2.en << endl;


}