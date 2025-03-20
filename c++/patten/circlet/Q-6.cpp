#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 9; i++)
    {
        if (i == 1 || i == 9)
        {
            cout << "*";
        }
        else
        {
            cout << " ";
        }
    }
    cout << endl;
    for (int j = 1; j <= 9; j++)
    {
        if (j % 2 == 1)
        {
            cout << "*";
        }
        else
        {
            cout << " ";
        }
    }
    cout << endl;
    cout << "*" << endl;
    cout << "*" << endl;
    return 0;
}