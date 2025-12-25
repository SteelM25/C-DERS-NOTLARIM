#include <iostream>
#include <vector>

using namespace std;

// Vektör, elemanları blok halinde ve indeksli bir şekilde tuttuğu için daha düzenli ve daha hızlı eleman erişimi sunar(list'e kıyasla)

// Eleman silme kısmında list direkt olarak elemanı siler ve bu diğerlerini etkilemez. Ama vektör içinde bir eleman silindiğinde kendisinden sonraki tüm elemanlar bir sola kayar, yani hepsinin indeks değeri değişir, bu da gereksiz sistem yorar.

// Yani aradan eleman silme işlemi sık yapılıyorsa list kullanılması daha iyidir.

// Sıklıkla eleman erişimi ve indeks ile ulaşma işlemleri olacaksa ve aradan eleman silme çok yoksa vektör daha avantajlıdır.

int main()
{
    vector<int> vNumbers;

    vNumbers.push_back(10);
    vNumbers.push_back(15);
    vNumbers.push_back(20); // Sıralı ekler: 10 15 20

    cout << "Vektör boyutu: " << vNumbers.size() << endl;

    //Elemanları yazdırma
    for(size_t i = 0; i < vNumbers.size(); i++){ // size_t daha azami sınıra sahiptir ve size() metodu ile aynı dönüş türüdür.
        // cout << i << ". indeks: " << vNumbers[i] << endl;
        cout << i << ". indeks: " << vNumbers.at(i) << endl; // 2. yöntem
    }

    //Aradan eleman seçip değiştirme
    vNumbers[2] = 22;
    cout << "Güncel değer: " << vNumbers.at(2) << endl;


    //String vector oluşturma
    vector<string> vCars = {"Lamborgini", "Mercedes", "Yamaha"};
    vCars.push_back("Volvo");

    //Elemanları yazdırma
    for (size_t i = 0; i < vCars.size(); i++){
        cout << i << ". indeks numaralı eleman: " << vCars[i] << endl;
    }

    //2.yöntem / Elemanları yazdırma

    for (const string& i : vCars){
        cout << i << " ";
    }

    cout << endl;

    //Araya eleman eklema
    vNumbers.insert(vNumbers.begin() + 1, 19); // vNumbers.begin kısmı en başı yani 0.indeksi temsil eder. Ona sayı ekleyerek istediğimiz indekse sayı ekleyebiliriz. Ama araya sayı ekleyince sayının kendisinden sonraki tüm değerlerin indeks değerleri de değişmiş olur.(performans açısından kötüdür, bu durumda list kullanmak daha iyidir.)

    // for(size_t i = 0; i < vNumbers.size(); i++){
    //     cout << vNumbers[i] << endl;
    // }

    //basit döngü / daha hızlı
    for(const int& num: vNumbers){ // döngü içinde ilgili num değeri değiştirilmeyecekse const keywordü başa eklenebilir. Daha güvenli olur.
        cout << num << endl;
    }
    cout << endl << endl;


    //Eleman silme

    // en sondaki eleman silinir.
    vNumbers.pop_back();

    for(const int& a: vNumbers){
        cout << a << endl;
    }
    cout << endl;

    //Aradan eleman silme
    vNumbers.erase(vNumbers.begin() + 2); // 2. indeks (3.eleman) silindi

    for(const int& i: vNumbers){
        cout << i << endl;
    }


    //Tüm vektör içeriğini temizleme

    vNumbers.clear();
    cout << "Vektör boyutu: " << vNumbers.size() << endl;
    cout << endl;

    // Hazır vektör oluşturma

    vector<int> myVector(5,42); // 5 elemanlı ve her elemanı 42 olan bir vektör.

    for(int& i : myVector){
        cout << i << endl;
    }




    return 0;
}
