#include <cstdlib>
#include <iostream>
using namespace std;

/*10 elemanlı bir tam sayı dizisi oluşturun ve içine 1–20 arası rastgele sayılar atayın.
Kullanıcıdan bir sayı isteyin.
Dizi içinde o sayı kaç kez geçtiğini bulun.

* Eğer sayı 5’ten küçükse, kontrol etmeden `continue` kullanarak atlayın.
* En sonunda kaç adet eşleşme olduğunu yazdırın.*/




int main(){

    int dizi[10], sayi,sayac = 0;

    srand(time(0));

    //?10 adet 1-20 arası rastgele eleman içeren bir dizi oluşturdum.
    for(int i = 0; i < 10; i++){
        dizi[i] = (rand() % 20) + 1; //* 1 ile 20 arası rastgele sayı ürettim.
    }

    //?kullanıcıdan sayı istendi
    cout << "\n1 ile 20 arasında bir sayı giriniz: ";
    cin >> sayi;

    //?sayının dizide kaç kez geçtiği bulundu
    for(int i=0; i < 10; i++){
        if(sayi < 5){break;} //continue diyince her seferinde i değerini arttırıp döngüye devam ediyor, sayı sabit olduğu için aynı yeri tekrar tekrar çalıştırıyor. Buna engel olmak için break demek daha verimli olur.
        else if(dizi[i]==sayi){
            sayac++;
        }
        cout << dizi[i] << " ";
    }
    if(sayi >=5 && sayi <= 20){

        cout << endl << sayi << " sayısı dizi içinde toplam " << sayac << " adet bulunmaktadır." << endl;
    }


    


}