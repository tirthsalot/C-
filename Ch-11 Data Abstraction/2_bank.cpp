#include <iostream>
using namespace std;

class Bank
{
private:
    int accountBalance;

public:
    Bank(int initialBalance)
    {
        accountBalance = initialBalance;
    }

    void deposit(int amount)
    {
        accountBalance += amount;
        cout << amount << " deposited successfully" << endl;
    }

    void withdraw(int amount)
    {
        if (amount > accountBalance)
        {
            cout << "Insufficient balance" << endl;
        }
        else
        {
            accountBalance -= amount;
            cout << amount << " has been withdrawn" << endl;
        }
    }

    void checkBalance()
    {
        if (accountBalance <= 0)
        {
            cout << "Your bank balance is 0" << endl;
        }
        else
        {
            cout << "Your bank balance is " << accountBalance << endl;
        }
    }
};

int main()
{
    Bank obj(5000);

    obj.checkBalance();
    obj.deposit(10000);
    obj.withdraw(3000);
    obj.checkBalance();

    return 0;
}