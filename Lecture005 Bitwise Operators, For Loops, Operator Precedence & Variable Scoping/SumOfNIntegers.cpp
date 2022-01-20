#include<iostream>
using namespace std;

int main()
{
    cout << "Enter a number : "<<endl;
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i<=n; i++)
    {
        sum += i;
    }
    cout << "Sum is : "<<sum<<endl;
}