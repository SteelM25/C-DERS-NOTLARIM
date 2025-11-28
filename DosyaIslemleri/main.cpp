#include <iostream>
#include <fstream>  //Dosya okuma-yazma işlemleri için bu kütüphaneyi eklemeliyiz.
#include <string>

using namespace std;

int main()
{

    /*
    ios::app    var olan dosyanın eski halini silmeden sonuna ekleme yapar.
    ios::binary     geniş kapasiteli (mp3, mp4 vs) dosya türleri kopyalamanıza  veya değiştirmemize olanak sağlar. Sadece txt üzerinde çalışacaksak kullanmayabiliriz.
    ios::in     dosya okumak için kullanılır.
    ios::out    dosya yazmak için kullanılır.
    ios::trunc      açtıktan sonra dosya içeriğini siler.
    ios::ate    dosya yazma işlemine en son kaldığın yerden devam eder, bu olmazsa dosyanın üzerine yazar.

    Bunları kullanırken aralarına or | işareti eklemeliyiz.
*/


    //HEM OKUMA HEM YAZMA YAPMAMIZI SAĞLAYAN KÜTÜPHANEDİR.
    fstream file; //fstream tipinde file nesnesi türettik.

    // file.open("\\home\\musa\\Masaüstü\\dosyaAdi.txt", ios::out);  Windows tarzı

    //file.open eğer dosya varsa açar, yoksa oluşturur. ios::out ise yazmak için kullanılır.
    //file.open("/home/musa/Masaüstü/Deneme.txt", ios::out | ios::binary | ios::app);  //Linux tarzı. ios::binary ekleyerek mp3, mp4 gibi farklı dosyaları da kopyalayabiliriz.. ios::app var olan dosyanın sonuna ekleme yapar, eski halini silmez.

    /*
    if(!file.is_open()){
        cout  << "Dosya açılamıyor.."; // cout konsola yazan, file ise dosyaya yazan stream kütüphanesine aittir.
    }
    else{
        file << endl;
        string str = "Merhaba Gardaş";
        file << str;
        file.close();
    }
*/

    file.open("/home/musa/Masaüstü/Deneme.txt", ios::in | ios::binary);
    if(!file.is_open()){
        cout << "Dosya açılamıyor::";
    }
    else{
        string str;
        while(getline(file,str)){ //getline tek bir satırı yaptığı için döngüye alarak her satırı yazdırmasını sağladık.
            cout << str << endl;
        }

        file.close();
    }



}
