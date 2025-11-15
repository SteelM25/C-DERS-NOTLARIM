#include <iostream>
using namespace std;

int main() {

  int *p = new int; //? Bellekte daha sonra yazılacak int değer için yer rezerv
                    //ediliyor. Atama ve tanımlama ayrı ayrı da olabilir.

  *p =
      5; //* Böylece *p'nin değerini bir değişkenden almak zorunda değilim,
         //böyle sonradan da atayabilirim veya dinamik olarak değiştirilebilir..
}