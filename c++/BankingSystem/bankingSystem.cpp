#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int number)
    {
        accountHolderName = name;
        accountNumber = number;
        balance = 0.0;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    void displayAccountInfo()
    {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }

    double getBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount account("man", 123456);

    int choice;
    double amount;

    do
    {
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Display Account Info" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            account.deposit(amount);
            break;
        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            account.withdraw(amount);
            break;
        case 3:
            account.displayAccountInfo();
            break;
        case 4:
            cout << "Exiting.." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);

    return 0;
}
