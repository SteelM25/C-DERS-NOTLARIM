#include <iostream>
#include <ostream>
using namespace std;

int main(){

    /*
    string isim = "Musa Çelik";
    int dogumYili = 2003;

    float sayisalNotOrtalamasi = 89.7f; // ? sonuna .f koymazsak daha detaylı işlemler için kullanılan double veri tipinde algılar ve gereksiz ram işgal eder.

    bool sinifiGectiMi = true; //! doğruysa 1, yanlışsa 0 döner.

    char isimIlkHarf = isim[0];

    char harfTut = 'S';

    float quizNot1 = 72.f;
    int quizNot2 = 51;

    //float quizOrtalama = (quizNot1 + quizNot2) / 2; //! eşitliğin sağ tarafındaki değerler int olduğu için sonuç int olarak döner.

    //float quizOrtalama = (float) (quizNot1 + quizNot2) / 2; //? eşitliğin sağını floata çevirip işlem yapar ve işlem sonucu float değere aktarılır.

    //todo Değerlerden sadece birini float yaparak da sonucun float olmasını sağlayabiliriz. Böylece tekrar bir floata çevirme yapmaya gerek yok.
    float quizOrtalama = (quizNot1 + quizNot2) / 2;

    cout << "Merhaba sayin " << isim << endl;
    cout << "Dogum Yili: " << dogumYili << endl;
    cout << "Sayısal not ortalaması: " << sayisalNotOrtalamasi << endl;
    cout << "Sınıfı geçti mi: " << sinifiGectiMi << endl;
    cout << "İsminizin ilk harfi nedir: " << isimIlkHarf << endl;
    cout << "Tuttuğunuz harf nedir: " << harfTut << endl;
    //cout << "Quiz Not ortalaması: " << (quizNot1 + quizNot2) / 2 << endl; //virgülden sonraki kısım silindi.
    cout << "Quiz Not Ortalaması: " << quizOrtalama << endl;
    */

    int x = 12;
    int y = 10;
    int z = x % y; //* 12'nin 10'a bölümünden kalan 2.

    //? bir sayının 2ye bölümünden kalan 0 ise o sayı çifttir, kalan 1 ise o sayı tektir.

    cout << z << endl;



}