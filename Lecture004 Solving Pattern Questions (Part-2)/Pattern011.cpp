/*

AAA
BBB
CCC

*/

#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter a number";
    cin>>n;
    char val = 'A';
    
    for(int i = 1; i<=n; i++)
    {
        
        for(int j = 1; j<=n ; j++)
        {
            cout<<val;  
           
           
        }
        val++;
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
        char ch = 'A' + i-1;

        for(int j=1;j<=n;j++)
        {
            cout<<ch;      
        }
        cout<<endl;
    }
    return 0;
}

*/