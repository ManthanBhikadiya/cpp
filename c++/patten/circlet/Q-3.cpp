#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 6; i++)
    {
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for (int j = 1; j <=6-i ; j++)
        {
            if(j%2==0){
                cout<<"0";
            }
            else{
                cout<<"1" ;
            }
        }
        cout << endl;
    }
    return 0;
}