/*

1234
 234
  34
   4

*/

#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number";
    int n;
    cin>>n;

    int i = 1;
    while(i<=n)
    {
        //print space
        int space = i-1;
        while(space)
        {
            cout<<" ";
            space--;
        }

        //print letter
        int j = 1;
        int star = n-i+1;
        int val = i;
        while(star)
        {
            cout<<val;
            val++;
            star--;
            j++;
        }
        cout<<endl;
        i++;
       
    }
     return 0;
}