#include <clocale>
#include <iostream>
using namespace std;

int main(){
    //? main metodundan hemen sonra bu fonksiyonu kullanarak çıktı ekranına yazdırdığın türkçe karakterlerin sorunsuz yazılmasını sağlayabilirsin.
    setlocale(LC_ALL, "Turkish");

    cout << "artık türkçe karakterleri çıktı olarak yazdırabilirsin.";

    //! PROJE, DEĞİŞKEN İSİMLERİNDE TÜRKÇE KARAKTER KULLANMA!!

}