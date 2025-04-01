#include <iostream>
#include<vector>
using namespace std;

int main(){
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
            cout<<"a["<<i<<"]"<<"["<<j<<"]=";
            cin >> a[i][j];
        }
    }
    int rnum,cnum,rsum=0,csum=0;
    cout<<"enter row number=";
    cin>>rnum;
    for(int j=0;j<c;j++){
        rsum+=a[rnum][j];
    }
    cout<<"sum of row="<<rsum<<endl;
    cout<<"enter column number=";
    cin>>cnum;
    for(int i=0;i<r;i++){
        csum+=a[i][cnum];
    }
    cout<<"sum of column="<<csum<<endl;
}