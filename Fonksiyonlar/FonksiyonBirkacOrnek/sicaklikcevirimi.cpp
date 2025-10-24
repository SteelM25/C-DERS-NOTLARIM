#include <iostream>
using namespace std;

/*Basit Dönüştürme Fonksiyonu

Soru:
Bir fonksiyon yaz: double dereceToFahrenheit(double c)

Celsius (°C) olarak verilen sıcaklığı Fahrenheit’a çevirip döndürsün.

Formül: F = (C * 9/5) + 32

Kullanıcıdan bir sıcaklık değeri al ve sonucu ekrana yazdır.

🧩 Amaç: Girdi almak, parametre kullanmak ve dönüş değeriyle işlem yapmak.*/

double dereceToFahrenheit(double c){
    double f = (c * 9/5) + 32;
    return f;
}

int main(){

    cout << endl << dereceToFahrenheit(8);

}