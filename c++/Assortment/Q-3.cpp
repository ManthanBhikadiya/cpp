#include <iostream>
using namespace std;

int main()
{
    int r, c;

    cout << "Enter the array's row & column size:";
    cin >> r;

     int a[r][c];

    cout << "Enter array's elements: "<<endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "The transpose matrix of an array: "<<endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << a[j][i]<<" ";
        }
        cout<<endl;
    }
}
