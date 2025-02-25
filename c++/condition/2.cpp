#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;

    if (a > b && a > c)
    {
        cout << "a is biger.";
    }
    else if (b > a && b > c)
    {
        cout << "b is biger.";
    }
    else if (c > a && c > b)
    {
        cout << "c is biger.";
    }
    else if (a == b && b == a)
    {
        cout << "a and b are equal.";
    }
    else if (a == c && c == a)
    {
        cout << "a and c are equal.";
    }
    else if (b == c && c == b)
    {
        cout << "b and c are equal.";
    }
    else
    {
        cout << " all nubers are equal.";
    }

    return 0;
}