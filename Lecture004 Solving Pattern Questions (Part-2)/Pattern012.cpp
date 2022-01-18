 /*

 ABC
 ABC
 ABC

 */

#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter a number "<<endl;
    int n;
    cin>>n;
    
    for(int i=1; i<=n; i++)
    {
        char val = 'A';
        for(int j=1;j<=n;j++)
        {
            cout<<val;     
            val++;

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
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1;j<=n;j++)
        {
            char ch = 'A' + j-1;
            cout<<ch;      
        }
        cout<<endl;
    }
    return 0;
}

*/