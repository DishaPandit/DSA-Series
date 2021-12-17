 /*

 ABC
 ABC
 ABC

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
        char val = 'A';
        for(int j=1;j<=n;j++)
        {
            cout<<val;      //'A'+j-1
            val++;

        }
        cout<<endl;
    }
    return 0;
}