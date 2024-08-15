//19.Define a class BankAccount with data members for the account number
//and balance. Implement member functions to deposit and withdraw
//money, defined outside the class using the scope resolution operator.
//Create an object and perform some transactions to demonstrate these functions.

#include <iostream>
using namespace std;

class BankAccount
{
    int accno;
    int balance;
    public:
    void getData()
    {
        cout << "Enter the Account number and balance: " << endl;
        cin >> accno >> balance;
    }
    void moneyTransfer(BankAccount &acc, int money);
    void display()
    {
        cout << "Account number: " << accno << endl;
        cout << "Balance: " << balance << endl;
    }
};
void BankAccount:: moneyTransfer(BankAccount &acc, int money)
    {
        balance = balance - money;
        acc.balance = acc.balance + money;
    }
int main()
{
    int amount;
    BankAccount acc1, acc2;
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