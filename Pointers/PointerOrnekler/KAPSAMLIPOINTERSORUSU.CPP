#include <algorithm>
#include <iostream>
using namespace std;

/*❗ Görev

Kullanıcıdan bir adet tam sayı N alın.
Program şu işlemleri pointer kullanarak gerçekleştirsin:

1. Dinamik Dizi Oluşturma

int* türünde bir pointer ile
N elemanlı bir dizi dinamik olarak oluşturun (new int[N]).

2. Kullanıcıdan Değerleri Pointer ile Alma

Kullanıcıdan N tane sayı alın.

Bu sayıları yalnızca pointer aritmetiği (örnek: *(ptr + i)) kullanarak diziye yazın.

3. Diziyi Pointer ile Yazdırma

Bir for döngüsü içinde:

Diziyi pointer ile gezinerek ekrana yazdırın.

Dizi elemanına erişirken yine *(ptr + i) kullanın.

4. Dizideki En Büyük Elemanı Bulan Fonksiyon

Aşağıdaki özelliklere sahip bir fonksiyon yazın:

int* enBuyukAdres(int* dizi, int uzunluk);


Fonksiyon, dizideki en büyük sayının adresini döndürsün.

main() içinde bu fonksiyonu çağırın.

Dönen pointer üzerinden en büyük değeri ekrana yazdırın.

5. Pointer Null Kontrolü

Fonksiyondan dönen pointer’ın nullptr olup olmadığını kontrol edin.

Boş değilse değeri yazdırın.

6. Belleği Temizleme

En sonda:

Diziyi delete[] ile silin.

Pointer’ı nullptr yapın.

Pointer’ın artık boş olduğunu ekrana yazdırın.*/


//* En büyük bulma fonksiyonu

int* enBuyukAdres(int* dizi, int uzunluk){

    if (uzunluk <= 0) { // Boş veya geçersiz bir dizi kontrolü
        return nullptr; // Hata durumunda null işaretçi döndür.
    }

    int* buyuk = dizi; // İlk elemanı en büyük olarak varsay
    for (int i = 1; i < uzunluk; i++) { // İlk elemanı kontrol etmeyi atla
        if (*(dizi + i) > *buyuk) {
            buyuk = dizi + i; // Daha büyük bir eleman bulduysak, işaretçiyi güncelle
        }
    }

    return buyuk;
}


int main(){

    //Kullanıcıdan tam sayı aldık.
    int n;
    cout << "\nN sayısını giriniz: ";
    cin >> n;

    int* dizi = new int[n]; // n elemanlı dinamik bir dizi oluşturuldu.

    // n elemanlı dizinin elemanları tek tek kullanıcıdan alındı
    for(int i = 0; i < n; i++){
        cout << "\nDeğeri giriniz: ";
        cin >> *(dizi + i);
    }

    // dizi elemanları ekrana yazdırıldı
    for(int i = 0; i < n; i++){
        cout << *(dizi + i) << " ";
    }
    

    cout << endl <<  *enBuyukAdres(dizi, n) << endl;

    delete[] dizi;
    dizi = nullptr;
    cout << dizi;
    
}