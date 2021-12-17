/*

D
CD
BCD
ABCD

*/

#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter a number ";
    int n;
    cin>>n;
    
    for(int i=1; i<=n; i++)
    {
        char val = 'A'+n-i;
        for(int j=1;j<=i;j++)
        {
            
            cout<<val;  
            val++;  

        }
        cout<<endl;
    }
    return 0;
}