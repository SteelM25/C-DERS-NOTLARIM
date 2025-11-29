#include <iostream>
#include "hayvan.h"
#include "kedi.h"
#include "kopek.h"
#include "kus.h"
using namespace std;

int main()
{
    Kus kus("Kanarya");
    kus.beslen();
    kus.uyu();
    kus.uc();

    cout << endl;

    Kopek kopek("Lessi");
    kopek.beslen();
    kopek.uyu();
    kopek.Havla();

    cout << endl;

    Kedi kedi("Mıno");
    kedi.beslen();
    kedi.uyu();
    kedi.fareYakala();


}
