#include <iostream>
using namespace std;

int main(){

    //? Kullanıcının 1 ile 7 arasında girdiği sayıya denk gelen haftanın gününü bulalım.

    int gun;
    cout << "Haftanın gününü sayı olarak giriniz: ";
    cin >> gun;


    //* İhtimalleri sorgulanacak değer switch içerisine yazılır ve değere karşılık gelebilecek her bir ihtimal case kullanılarak değerlendirilir.
    //! Her case sonrası break yapılarak durum sağlanmışsa sonucu çıktı verir ve diğer caselere geçmez. 
    //todo: Eğer break unutulursa, unutulan satırı ve sonraki satırı yazar. Çünkü break yazmadığı için sonraki case'in şartına bakmadan içindekileri çalıştırır. Yani eğer case: 1 kısmında break yapmazsam ve kullanıcı 1 seçerse ekrana PazartesiSalı seçeneği gelecek. Eğer case 2 için de break yazmazsam PazartesiSalıÇarşamba yazar. 
    //! Yani break görene kadar her case içini çalıştırır.

    switch(gun)
    {
        case 1:cout << "\n\nSeçtiğiniz gün Pazartesi\n\n"; break;
        case 2:cout << "\n\nSeçtiğiniz gün Salı\n\n"; break;
        case 3:cout << "\n\nSeçtiğiniz gün Çarşamba\n\n"; break;
        case 4:cout << "\n\nSeçtiğiniz gün Perşembe\n\n"; break;
        case 5:cout << "\n\nSeçtiğiniz gün Cuma\n\n"; break;
        case 6:cout << "\n\nSeçtiğiniz gün Cumartesi\n\n"; break;
        case 7:cout << "\n\nSeçtiğiniz gün Pazar\n\n"; break;

        //? hiçbir değer sağlanmazsa else görevi gören default kullanıyoruz.

        default: cout << "\n\nGeçersiz değer girdiniz.\n\n";
    }


}