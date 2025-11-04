#include <iostream>
#include <iomanip> // tablo için setw()
using namespace std;

/*Bir program yazın:

* 5 öğrencinin 3’er sınav notunu alın (2D dizi kullanın: `int notlar[5][3];`)
* Her öğrencinin ortalamasını hesaplayın.
* Ortalamaya göre `switch-case` ile harf notunu belirleyin:

  * 90–100 → A
  * 80–89 → B
  * 70–79 → C
  * 60–69 → D
  * Diğer → F
    Sonuçları tablo şeklinde ekrana yazdırın.
*/


int main() {
    int notlar[5][3];
    double ortalamalar[5];
    char harfNotu;
    
    // 1. Öğrencilerin notlarını al
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". öğrencinin 3 sınav notunu girin: ";
        for (int j = 0; j < 3; j++) {
            cin >> notlar[i][j];
        }
    }

    cout << "\n---------------------------------------------\n";
    cout << setw(10) << "Öğrenci" 
         << setw(15) << "Ortalama"
         << setw(15) << "Harf Notu" << endl;
    cout << "---------------------------------------------\n";

    // 2. Ortalama ve harf notu hesapla
    for (int i = 0; i < 5; i++) {
        int toplam = 0;
        for (int j = 0; j < 3; j++) {
            toplam += notlar[i][j];
        }
        ortalamalar[i] = toplam / 3.0;

        // 3. Switch-case ile harf notu belirle
        int ort = static_cast<int>(ortalamalar[i]) / 10; // 90-100 => 9-10 aralığı
        switch (ort) {
            case 10:
            case 9: harfNotu = 'A'; break;
            case 8: harfNotu = 'B'; break;
            case 7: harfNotu = 'C'; break;
            case 6: harfNotu = 'D'; break;
            default: harfNotu = 'F';
        }

        // 4. Tabloya yazdır
        cout << setw(10) << i + 1 
             << setw(15) << fixed << setprecision(2) << ortalamalar[i]
             << setw(15) << harfNotu << endl;
    }

    cout << "---------------------------------------------\n";
    return 0;
}
