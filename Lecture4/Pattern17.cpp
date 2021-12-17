/*
A
BC
CDE
DEFG

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
        
        for(int j=1;j<=i;j++)
        {
            char val = 'A'+i+j-2;
            cout<<val;    

           

        }
        cout<<endl;
    }
    return 0;
}