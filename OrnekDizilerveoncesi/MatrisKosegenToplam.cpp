#include <iostream>
using namespace std;

/*Kullanıcıdan 4x4 boyutunda bir matris alın.

* Ana köşegen (sol üst → sağ alt) ve yan köşegen (sağ üst → sol alt) elemanlarının toplamını bulun.
* Bu iki toplamı karşılaştırın: hangisi büyükse ekrana belirtin.
  Örnek:

```
Ana köşegen toplamı: 45
Yan köşegen toplamı: 50
Sonuç: Yan köşegen daha büyük.*/

int main(){

    int matris[4][4], ana = 0, yan = 0;

    //* Matris elemanlarını aldık.
    for(int i = 0; i < 4; i++){
        for(int a = 0; a < 4; a++){
            cout << "\nMatris" << "["<<i<<"]" << "["<<a<<"]" << " elemanını giriniz: ";
            cin >> matris[i][a];
        }
    }

    //? Ana köşegen toplamı
    for(int i = 0; i < 4; i++){
        for(int a = 0; a < 4; a++){
            if(i==a){
                ana+=matris[i][a];
            }
        }
    }

    //? Yan köşegen
    for(int i = 0; i < 4; i++){
        for(int b = 3; b > -1; b--){
            if((i + b) == 3){
                yan+=matris[i][b];
            }
        }
    }

    //todo Alternatif Kısa döngü
    /*for (int i = 0; i < 4; i++) {
    ana += matris[i][i];       // Ana köşegen
    yan += matris[i][3 - i];   // Yan köşegen
    }
    */

    cout << "\n\nAna köşegenler toplamı: " << ana << endl << "Yan köşegenler toplamı: " << yan;

    if(ana == yan){
        cout << "\nHer iki köşegen de eşittir" << endl;
    }
    else if(ana < yan){
        cout << "\nYan köşegen toplamı daha büyüktür." << endl;
    }
    else{cout << "\nAna köşegen toplamı daha büyüktür." << endl;}

}