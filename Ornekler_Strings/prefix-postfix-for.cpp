#include <iostream>
#include <string>
using namespace std;


/*Bir kelimeyi al.
Kelimenin her harfini yazdırırken, bir sayaç kullan.
Sayaç hem prefix (++i) hem postfix (i++) biçiminde kullanılarak farklı iki sürümle çıktıyı karşılaştır.*/

int main(){

    string kelime = "Selam";

    //? prefix
    for(int i = 0; i < kelime.length(); i++){
        cout << kelime.at(i) << " ";
    }
    cout << endl;
    
    //?postfix
    for(int i = 0; i < kelime.length(); ++i){
        cout << kelime.at(i) << " ";
    }

}