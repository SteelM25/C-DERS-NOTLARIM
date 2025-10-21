// #include <iostream>
// using namespace std;

int main (){

    /*
        Aşağıdaki kod blokları çalıştırıldıktan sonra w değeri ne olur?

        int x = 5, y = 9, z = 7.4, w;
        w = (z>x) - (y <= 11);
        cout << w;
    */
    //* z değeri int olarak atandığı için virgülden sonraki kısmı gider. z x'ten büyük değeri true olur yani 1 değerini alır. y 11'den küçüktür, o da true olur yani 1 olur. 1 - 1 = 0. w=0 olur.

    /*
        Aşağıdaki kod blokları çalıştırıldıktan sonra w değeri ne olur?

        int x = 5, y = 9, z = 7.4, w;
        w = z>x - y <= 11;
        cout << w;
    */
    //! Aynı kodlar ama parantez kalktığı için işlem önceliği değişir. Burada işlem önceliği çıkarma işlemindedir. x - y = -4 olur. z>-4<=11 değeri sırayla gider ve z>-4= true yani 1 olur. 1 <= 11 true olur yani 1 olur. w=1 olur.

    //todo: Böyle durumlarla uğraşmamak için parantez kullanarak istediğin işlemleri önceleyebilirsin.

}