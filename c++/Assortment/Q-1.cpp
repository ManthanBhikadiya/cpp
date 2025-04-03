#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    cout << "Enter the array's size: ";
    cin >> n;

    vector<int> a(n);

    cout << "Enter array's elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<< "Negative element from an array: ";
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            cout << a[i] << " ";
        }        
    }
   return 0;
}
