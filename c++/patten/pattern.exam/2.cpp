#include <iostream>
using namespace std;
int main()
{
    int n;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << " " << j;
        }
        cout << endl;
    }
}