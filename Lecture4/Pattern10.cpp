/*

1
23
345
4567

*/




#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter a number";
    cin>>n;
    
    
    for(int i = 1; i<=n; i++)
    {
        int val = i;
        for(int j = 1; j<=i ; j++)
        {
            cout<<val;
            val++;
           
        }
        cout<<endl;
    }
    return 0;
}