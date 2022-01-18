/*

1111
 222
  33
   4
*/

#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number"<<endl;
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

        //print number
        int j = 1;
        int number = n-i+1;
        while(number)
        {
            cout<<i;
            number--;
            j++;
        }
        cout<<endl;
        i++;
       
    }
     return 0;
}