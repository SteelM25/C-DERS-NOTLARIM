#include <iostream>
#include <list>
using namespace std;

//Liste yazdırma fonksiyonu
void printList(list<int> l)
{
    list<int>::iterator itr; // Liste üzerinde gezecek bir sayaç oluşturdum.

    //Liste elemanlarını ekrana yazdırdım.
    for(itr= l.begin(); itr != l.end(); itr++){
        cout << *itr << "  ";
    }
    cout << endl;
}

// Referans almadan yaparsak listenin kopyası üzerinde değişiklik yapar ama orijinal liste etkilenmez.
void sil(list<int>* pl){
    list<int>::iterator it;
    it = pl->begin();
    it++;
    pl->erase(it);
}

int main()
{
    //Liste oluşturma
    list<int> lst;

    //Listeye eleman ekleme
    lst.push_back(9);
    lst.push_back(11);
    lst.push_front(7);

    printList(lst);

    // lst.pop_back();
    lst.pop_front();
    printList(lst);

    //Listenin istediğimiz yerine eleman ekleme
    list<int>::iterator it;
    it = lst.begin(); // iterator 0 indeksine eşitlendi.
    it++;
    // it++;
    lst.insert(it,9);
    printList(lst);

    //İstediğimiz yere birden fazla eleman ekleme
    it = lst.begin();
    it++;
    lst.insert(it,2,8); // 2 adet 8 sayısını ekledim.
    printList(lst); // 9 8  8  9  11

    it = lst.begin();
    it++;
    it++;

    lst.erase(it); // İkinci 8 rakamını sildik.
    printList(lst);

    //Metod üzerinden silme
    //Referans alarak orijinal değer üzerinden değişiklik yaptık.
    sil(&lst); // İlk 8 rakamını sildik.
    printList(lst);// 9 9 11


    return 0;
}
