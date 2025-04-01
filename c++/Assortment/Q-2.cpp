#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int r, c;

    cout << "Enter the array's row size:";
    cin >> r;

    cout << "Enter the array's column size:";
    cin >> c;

    vector<vector<int>> a(r, vector<int>(c));

    cout << "Enter array's elements: ";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    int largest = a[0][0];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] > largest)
            {
                largest = a[i][j];
            }
        }
    }
    cout << "The largest element is: " << largest;
}