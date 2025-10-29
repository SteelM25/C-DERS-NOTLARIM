#include <iostream>
using namespace std;

int main(){
        
    //?     2 satırlı(2 adet dizi içeren) 3 sütünlü (her biri 3 adet değer içeren bir dizi.)
    int arr[2][3] = {{8, 17, 25}, 
                    {12, 40, 35}};

    /*
        Dizi gösterim şekli.

            0   1   2

        0-  8   17  25
        1-  12  40  35
    */

    for (int i = 0; i < 2; i++){ //* satırları tek tek dönüyorum.

        for (int a = 0; a < 3; a++){    //* sütunları tek tek dönüyorum.
            cout << arr[i][a] << "  ";
        }
        cout << endl;
    }

}