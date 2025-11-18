#include <iostream>
using namespace std;



int main(){

    int x = 10; //Stack içinde tutulur.

    int* p = new int(5);
    //  p isimli değişken Stack'te tutulur. *p değeri Heapte tutulur.

    //* new kullanılarak oluşturulan her değişken Heap'te oluşturulmuştur ve kullanıldıktan sonra ADRESİ manuel olarak delete ile silinmelidir.

    
    delete p; // p adresi silindi ama *p değeri silinmedi, başka bir değere atanabilir.
    
    int w = 20;
    
    //? new kullanılmadan pointer kullanılıyorsa delete kullanmak gereksizdir/hatadır.
    p = &w;

    cout << *p << endl; // *p değeri değil p adresi silindiği için 20 döner.
    


}