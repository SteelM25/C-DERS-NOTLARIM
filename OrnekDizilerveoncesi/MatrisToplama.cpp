#include <iostream>
using namespace std;

/*Kullanıcıdan 2 adet 3x3 boyutunda matris alın.
Bu iki matrisi toplayarak üçüncü bir matris oluşturun ve sonucu matris formatında ekrana yazdırın.

🧩 İpucu:

```cpp
int A[3][3], B[3][3], Toplam[3][3];
```*/

int main(){

    int A[3][3], B[3][3], Toplam[3][3];

    //? A dizisi
    for(int i = 0; i < 3; i++){
        for(int a = 0; a < 3; a++){
            cout << "\nA Dizisinin " << i+1 <<" Satırının " << a + 1 << ". Sütun Değerini giriniz: ";
            cin >> A[i][a];
        }
    }

    //? B dizisi
    for(int i = 0; i < 3; i++){
        for(int a = 0; a < 3; a++){
            cout << "\nB Dizisinin " << i+1 <<" Satırının " << a + 1 << ". Sütun Değerini giriniz: ";
            
            cin >> B[i][a];
        }
    }

    //? Toplam dizisi
    for(int i = 0; i < 3; i++){
        for(int a = 0; a < 3; a++){
            Toplam[i][a] = A[i][a] + B[i][a];
            cout << Toplam[i][a] << " ";
        }
        cout << endl;
    }
    

}