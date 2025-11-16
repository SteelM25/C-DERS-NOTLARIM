#include <cstdlib>
#include <iostream>
using namespace std;

/*Bir “rastgele harf üretme oyunu” yaz:

rand() fonksiyonuyla a–z arası rastgele bir karakter üret. ('a' ve 'z' karakterlerinin ASCII değerleri sırasıyla 97 ve 122’dir.)

Kullanıcıdan tahmin al.

Tahmin doğru olana kadar do-while döngüsüyle devam et.

Doğru tahmin edildiğinde “Tebrikler!” yazdır.*/

int main(){
    
    srand(time(0));
    
    char harf = 'a' + rand() % 26; // 'a' yerine 97 diyebilirdim ama daha sonra sayıyı rakama dönüştürmem gerekebilirdi.
    
    char tahmin;
    
    do {
        cout << "\n Bir harf tahmin ediniz: ";
        cin >> tahmin;
    }while (harf != tahmin);

    cout << "Eşleşen harf: " << harf; 


}