#include <iostream>
using namespace std;

/*Kullanıcıdan 4 adet sınav notu girmesini isteyiniz. Bu 4 notu bir dizi
 * içerisinde tutunuz. Dizideki notların ortalamasını hesaplayınız.
 * Hesapladığınız ortalamayı ekrana yazdırınız.*/

int main() {
  // double notlar[4]; //!Basit ama profesyonel değil, bunun yerine best
  // practise olan bir kavram kullanmalıyız.

  //todo: const İLE ATANAN DEĞİŞKEN BAŞKA YERDE DEĞİŞTİRİLEMEZ.
  //? Miktarı değiştirmek istedimizde sadece burada değiştirmek yeterli.
  const int sabitMiktar = 4; //! bu BAŞKA YERDE DEĞİŞTİRİLEMEZ bir değerdir.

  double notlar[sabitMiktar];

  double ortalama, toplam = 0;

  /*
  cout << "\nBirinci sınav notu: ";
  cin >> notlar[0];
  cout << "\nİkinci sınav notu: ";
  cin >> notlar[1];
  cout << "\nÜçüncü sınav notu: ";
  cin >> notlar[2];
  cout << "\nDördüncü sınav notu: ";
  cin >> notlar[3];*/

  //? tek tek sormaya gerek kalmadı
  for (int i = 0; i < sabitMiktar; i++) {
    cout << i + 1 << ". sınav notunu giriniz: "; // indeks 0'dan başladığı için i+1 yaparak 1'den başlayarak sormasını sağladık.
    cin >> notlar[i];
    toplam += notlar[i];
  }

  ortalama = toplam / sabitMiktar;
  cout << "\nNotların ortalaması: " << ortalama;

  //?tek döngüde işimizi bitirebiliriz.
  /* for (int i = 0; i < sabitMiktar; i++){
       toplam+= notlar[i];
   }   */
}