/*

ABC
BCD
CDE

Mapping for method 1 is done as follows -

i+j-1 = 1       //for i,j=1
We have to map 1 to A
So, add 'A'-1 to both side

i+j-1+'A'-1 = 1+'A'-1
=> i+j+'A'-2 = 'A'      //LHS is the required formula

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
        
        for(int j=1;j<=n;j++)
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
        for(int j=0;j<n;j++)
        {
            
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
}

*/