//program to transfer money from one account to the other.
#include <iostream>
using namespace std;

class account
{
    int accno;
    int balance;

public:
    void getData()
    {
          cout << "Enter the account number and balance: " << endl;
        cin >> accno >> balance;
    }
    void moneyTransfer(account &acc, int money)
    {
        balance = balance - money;
        acc.balance = acc.balance + money;
    }
    void display()
    {
        cout << "Account number: " << accno << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main()
{
    int amount;
    account acc1, acc2;
    acc1.getData();
    acc2.getData();
    cout << "Account details: " << endl;
    acc1.display();
    acc2.display();
    cout << "Enter the amount to be transferred: " << endl;
    cin >> amount;
    acc1.moneyTransfer(acc2, amount);
    cout << "Details after tranferring: " << endl;
    acc1.display();
    acc2.display();
    return 0;
}
