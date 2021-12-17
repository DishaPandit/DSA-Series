/*

1234554321
1234**4321
123****321
12******21
1********1

*/

#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter a number ";
    int n;
    cin>>n;

    int i = 1;

    while(i<=n)
    {
        //print triangle 1
        int j = 1;
        int t1 = n-i+1;
        while(t1)
        {
            cout<<j;
            j++;
            t1--;
        }

        //print triangle 2

        int star1 = i-1;
        while(star1)
        {
            cout<<"*";
            star1--;
        }

        //print triangle 3

        int star2 = i-1;
        while(star2)
        {
            cout<<"*";
            star2--;
        }

        //print triangle 4

        int count = n-i+1;
        while(count)
        {
            cout<<count;
            count--;
            
        }

        cout<<endl;
        i++;
    }
    return 0;

}