#include <iostream>
using namespace std;

//? Kullanıcıdan bir sıcaklık değeri ve sıcaklık birimini (C veya F) al.
// Girilen değere göre:

// * Diğer birime çevir (C → F veya F → C).
// * Eğer sıcaklık 0°C’nin (veya 32°F’nin) altındaysa “Donma Noktasının Altında”, üstündeyse “Normal” yazdır.

// > Konular: veri tipleri, aritmetik işlemler, if-else, mantıksal operatörler

int main(){

    int deger, birim;

    cout << "Sıcaklık birimi seçiniz: " << endl;
    cout << "1-C, 2-F";
    cin >> birim;

    
    //? 1.yol
    /*
    if(birim == 1){
        cout << "Sıcaklık değeri giriniz: " << endl;
        cin >> deger;

        if(deger < 0){
            cout << "\nSıcaklık Donma Noktasının Altında\n";
        }
        else{
            cout << "\nSıcaklık Normal\n";
        }
    }
    else if (birim == 2){
        cout << "Sıcaklık değeri giriniz: " << endl;
        cin >> deger;

        if (deger < 32){
            cout << "\nSıcaklık Donma Noktasının Altında\n";
        }
        else{
            cout << "\nSıcaklık Normal";
        }
    }
    else{cout << "Geçerli bir değer giriniz..";}

    */

    //? 2.yol

    if(birim==1 || birim == 2){

        cout << "Sıcaklık değeri giriniz: " << endl;
        cin >> deger;
        
        if((birim==1 && deger<=0) || (birim==2 && deger<=32) ){
            cout << "Sıcaklık Donma Noktasında";
        }
        else{
            cout << "Sıcaklık Normal";
        }
    }
    else{
        cout << "Geçerli bir değer giriniz.";
    }





}