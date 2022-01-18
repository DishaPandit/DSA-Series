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

/*
method 2

#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter a number "<<endl;
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        char ch = 'A'+i;
        for(int j=0;j<=i;j++)
        {
            
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
}

*/