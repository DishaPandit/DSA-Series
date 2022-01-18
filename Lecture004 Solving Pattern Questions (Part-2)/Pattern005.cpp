/*

123
456
789

Here we are simply printing counting. Hence we take a variable 
and initialise it with 1 and increment after printing each time


*/

#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int val =1;
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n ; j++)
        {
            cout<<val<<" ";
            val++;
        }
        cout<<endl;
    }
    return 0;
}
