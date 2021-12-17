/*

   1
  23
 456
78910

*/

#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number";
    int n;
    cin>>n;
    int val = 1;
    int i = 1;
    while(i<=n)
    {
        //print space
        int space = n-i;
        while(space)
        {
            cout<<" ";
            space--;
        }

        //print letter
        int j = 1;
        
        while(j<=i)
        {
            cout<<val;
            val++;
            j++;
        }
        cout<<endl;
        i++;
       
    }
     return 0;
}