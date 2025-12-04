#include <iostream>

using namespace std;

//Struct C dilinde sadece data tutar.
// C++ dilinde ise hem data hem fonksiyon tutabilir. Bunu da basit bir constructor(kurucu), destructor(yıkıcı) ve üye fonksiyon ekleyerek, struct'ı bir mini sınıf(class) gibi kullanmak mümkündür.

//Struct ve Class farkı

// Temel fark, struct içindeki üyererin varsayılan erişiminin public olması, class içindeki üyelerin ise private olmasıdır.

// Struct da, tıpkı class gibi üye fonksiyon, constructor, destructor tanımlayabilir ve hatta miras alıp verebilir.

struct Person{

    //Üye değişkenler (varsayılan olarak public)
    string name;
    int age;

    //Parametreli constructor
    Person(const string &n, int age){ // name ataması değişmesin diye const, gereksiz kopya olmasın diye & yaptık.
        name = n;
        this->age = age;
    }

    //Üye fonksiyon
    void printInfo(){
        cout << "Ad: " << name << ", Yas: " << age << endl;
    }
};

int main2()
{
    Person p("Ahmed",23);
    p.printInfo();

    p.age = 88; // struct üyeleri varsayılan olarak public olduğu için dışarıdan değiştirilebilir. O yüzden gizli olmasını istediğimiz değerleri private içinde tutmalıyız.
    p.printInfo();
}
