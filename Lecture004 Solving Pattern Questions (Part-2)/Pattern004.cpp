/*

321
321
321

*/

#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter a number"<<endl;
    cin>>n;

    //method 1
    /*
    for(int i = 1; i<=n; i++)
    {
        for(int j = n; j>=1 ; j--)
        {
            cout<<j;            
        }
        cout<<endl;
    }
    */

    //method 2
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n ; j++)
        {
            cout<<n-j+1;            
        }
        cout<<endl;
    }

    return 0;
}
