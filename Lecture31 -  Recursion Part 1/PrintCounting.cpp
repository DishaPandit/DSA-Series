#include<iostream>
using namespace std;

void print(int n)
{
    if(n==0)
        return;
    else
    {
        //Head recursion - here is prints in ascending order
        //if i make it tail recursion, it will print in descendig order
        print(n-1);
        cout << n <<" ";
        
    }
}

int main()
{
    int n;
    cout <<"Enter a number "<<endl;
    cin >> n;
    print(n);
    return 0;  
}