#include <iostream>
using namespace std;

/*
    Kullanıcıdan iki adet 3x2 matris elemanlarını alacaksınız.
    -Yani 3 satır ve 2 sütundan oluşan bir matrisin tüm elemanlarını kullanıcıya soracak ve gireceğiniz değerleri bir dizi yapısına kaydedeceksiniz.
    -Ardından aynı boyutlardaki ikinci matrisin (3x2) elemanlarını yine kullanıcıdan alacaksınız.

    Bu iki matrisin(dizinin) toplamını (eleman bazında) hesaplayacaksınız.

    Sonuc olarak elde edeceğiniz toplam[] dizisinin elemanlarını ekrana yazdıracaksınız.
*/

int main(){



int dizi1[3][2];
int dizi2[3][2];
int toplam[3][2];

//todo: 2 ayrı iç içe döngü kullanmak yerine bir döngüde 2 tane döngü kullandım. Her seferinde 1.satır 1 ve 2. elaman, 2.satır 1 ve 2 elaman şeklinde isteyecek ama tek döngüde atamayı halletmiş olduk.
for(int i = 0; i<3; i++){

    //? Birinci dizi elemanlarını alalım
    for(int a= 0; a<2; a++){
        cout << "Birinci Dizi " << i + 1 << ". satır " << a + 1 << ". sütun sayısını giriniz: ";
        cin >> dizi1[i][a];
    }
    cout << endl;

    //? İkinci dizi elemanlarını alalım
    for(int a= 0; a<2; a++){
        cout <<"İkinci Dizi " << i + 1 << ". satır " << a + 1 << ". sütun sayısını giriniz: ";
        cin >> dizi2[i][a];
    }
    cout << "\n\n";

}


//? toplam dizisini oluşturalım.
for (int i = 0; i < 3; i++) {
    for (int a = 0; a < 2; a++) {
        toplam[i][a] = dizi1[i][a] + dizi2[i][a];
        cout << toplam[i][a] << " ";
    }
cout << "\n\n";
}


}
