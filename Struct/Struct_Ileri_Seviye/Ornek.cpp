#include <iostream>
using namespace std;

struct BankAccount{
private:
    double balance; // dışarıdan doğrudan erişilmesin.

public:
    //Constructor
    BankAccount(double initialBalance){ //Hesap bakiyesi
        balance = initialBalance;
        cout << "Hesap oluşturuldu\n";
    }

    //Destructor
    ~BankAccount(){
        cout << "Hesap kapatildi" << endl;

    }

    //Getter
    double getBalance(){
        return balance;
    }

    //Setter benzeri para ekleme metodu
    void deposit(double amount){
        balance += amount;
    }

    //Para çekme
    void withdraw(double amount){
        balance -= amount;
    }
};


int main(){
    /* stack memory tarzı

    BankAccount myAccount(1000);

    cout << "Güncel Bakiye: " << myAccount.getBalance() << endl;

    myAccount.deposit(300);
    cout << "Para yattıktan sonra güncel bakiye: " << myAccount.getBalance() << endl;

    myAccount.withdraw(130);
    cout << "Para çekildikten sonra güncel bakiye: " << myAccount.getBalance() << endl; */

    //heap memory tarzı

    BankAccount* pAccount = new BankAccount(1000);
    cout << "Güncel Bakiye: " << pAccount->getBalance() << endl;

    pAccount->deposit(900); // Para ekleme
    cout << "Paranız Yatırıldı. Güncel Bakiye: " << pAccount->getBalance() << endl;

    pAccount->withdraw(210);
    cout << "Para Çekildi. Güncel Bakiye: " << pAccount->getBalance() << endl;

    // Dinamik bellek yönetiminde (new) manuel olarak delete çağırılmazsa destructor çağırılmaz ve destructor kod blokları çalışmaz..
    delete pAccount; // new ile oluşturulan değerleri delete yapınca destructor otomatik olarak çağırılır.


}
