#include<iostream>
using namespace std;

int power(int n)
{
    //base case
    if(n==0)
        return 1;
    //recursive relation
    else
        return 2*power(n-1);
}
int main()
{
    int n;
    cout << "Enter the power : "<<endl;
    cin >> n;
    int ans = power(n);

    cout << "Answer is "<<ans<<endl;

    return 0;
}