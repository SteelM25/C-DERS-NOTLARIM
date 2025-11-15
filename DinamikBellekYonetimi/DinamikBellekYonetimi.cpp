#include <iostream>
using namespace std;

int main() {

  int n;

  cout << "\nDizi içerik adeti: ";
  cin >> n;

  //? n elemanlı bir dizinin adresi dizi pointer değişkenine atandı, haliyle
  //*dizi değeri n eleman sayılı dizinin ilk elemanına eşit olur.
  int *dizi = new int[n];

  for (int i = 0; i < n; i++) {
    cout << "\nDeğer: ";
    cin >> dizi[i];
  }

  int toplam = 0;

  for (int i = 0; i < n; i++) {
    toplam += dizi[i];
  }
  cout << endl << toplam;

  // en son hafızada gereksiz yer tutmaması için DELETE kullanmalıyız.
  delete[] dizi; //? dizi pointerları böyle sileriz.
  dizi = NULL;
  cout << "Deger" << *dizi;
}