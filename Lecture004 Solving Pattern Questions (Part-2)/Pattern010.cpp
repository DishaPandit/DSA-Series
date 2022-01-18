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
    cout<<"Enter a number"<<endl;
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

/*

method 2

#include<iostream>
using namespace std;

int main()
{
    int n = 4;
    
    for(int i = 1; i<=4; i++)
    {
        
        for(int j = 1; j<=i; j++)
        {
            cout << i+j-1 <<" ";
            
        }
        cout<<endl;
    }
    return 0;
}

*/