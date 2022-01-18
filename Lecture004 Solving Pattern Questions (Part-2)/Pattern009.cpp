/*

1
21
321

*/

#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter a number";
    cin>>n;
    
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=i ; j++)
        {
            cout<<i-j+1;
           
        }
        cout<<endl;
    }
    return 0;
}

/*

//Method 2

#include<iostream>
using namespace std;

int main()
{
    int n = 4;
    
    for(int i = 1; i<=4; i++)
    {
        int val = i;
        for(int j = 1; j<=i; j++)
        {
            cout << val <<" ";
            val--;
        }
        cout<<endl;
    }
    return 0;
}


*/
