/*

   *
  **
 ***
****

*/

#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter a number ";
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        //to print space

        int space = n-i;
        while(space)
        {
            cout<<" ";
            space--;
        }

        //print star
        int j = 1;
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }

}

