/*

123
456
789

*/

#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter a number";
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
