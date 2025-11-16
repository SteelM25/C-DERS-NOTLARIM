#include <iostream>
using namespace std;

//?İki tam sayı tanımla. Bu iki sayının değerlerini pointer kullanarak yer değiştir.

int main(){

    int sayi1 = 4, sayi2 = 9, gecici;

    int* p1 = &sayi1;
    int* p2 = &sayi2;
    
    
    gecici = *p1;
    
    *p1 = sayi2;
    *p2 = gecici; //? burada normalde *p1 değeri sayi1'e eşitti, ama *p1 değiştiği için sayi1 de değişti. O yüzden buraya sayi1 dersem her iki değer de aynı olur(ikisi de 9 olur.) O yüzden geçici bir değere *p1'in İLK DEĞERİNİ ATADIM VE *p2'ye ilk değeri atamış oldum.

    cout << "\nDeğiştirilen değere göre:" << endl;
    cout << "\nBirinci sayı: " << sayi1;
    cout << "\nİkinci sayı: " << gecici;

}