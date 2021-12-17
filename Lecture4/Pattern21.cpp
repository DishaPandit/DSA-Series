/*

****
 ***
  **
   *
   
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

        //print star
        int j = 1;
        int star = n-i+1;
        while(star)
        {
            cout<<"*";
            star--;
            j++;
        }
        cout<<endl;
        i++;
       
    }
     return 0;
}