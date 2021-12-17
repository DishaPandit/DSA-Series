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
            cout<<val;  //or 'A'+i-1
           
           
        }
        val++;
        cout<<endl;
    }
    return 0;
}