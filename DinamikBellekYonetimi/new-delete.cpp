#include <iostream>
using namespace std;

int main() {

    // int* p = new int(7); Böyle de atama yapılabilir.
  int *p = new int; //? Bellekte daha sonra yazılacak int değer için yer rezerv
                    // ediliyor. Atama ve tanımlama ayrı ayrı da olabilir.

  *p = 5; //* Böylece *p'nin değerini bir değişkenden almak zorunda değilim,
          // böyle sonradan da atayabilirim veya dinamik olarak
          // değiştirilebilir..
  //? Ama bunu dinamik yani sabit olmayan bir değer olmasını istiyorsam işi
  // bittikten sonra delete kullanarak silmem gerek, YOKSA SABİT BİR DEĞER GİBİ
  // BELLİ BİR YERİ SÜREKLİ KAPLAR ve Memory Şişer(Sistem çökebilir.).
  delete p;
//delete ettikten sonra NULL yapılmalı ki HATA VERMESİN.
  cout << *p << endl; //! delete yaptığım için bu değer 5'in dışında rastgele
                      //! uzun bir değer olur.

  p = NULL; //* Eğer hem kullanmıyorum hem de içinin rastgele bir değer (yani
            //başka işlemler tarafından kullanılmasın) istiyorsam bu değere NULL
            //diyerek eğer sayısal bir değer ise içeriğinin 0 olmasını sağlarım.
  //! Kullanmadığın pointerlere NULL ataması yapmalısın ki rastgele değer
  //! almasınlar veya hata vermesinler.
  cout << p << endl;
}