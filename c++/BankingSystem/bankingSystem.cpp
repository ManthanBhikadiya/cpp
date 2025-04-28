#include <iostream>
using namespace std;

class bank
{
protected:
    int accountnumber;
    string accountHoldersName;
    int balance;

public:
    bank(int accountnumber, string accountHoldersName, int balance)
    {
        this->accountnumber = accountnumber;
        this->accountHoldersName = accountHoldersName;
        this->balance = balance;
    }
};

int main()
{

    return 0;
}