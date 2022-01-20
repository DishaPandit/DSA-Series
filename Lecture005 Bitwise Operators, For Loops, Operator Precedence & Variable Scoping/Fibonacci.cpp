#include<iostream>
using namespace std;
int main()
{
    cout <<"Enter a number : "<<endl;
    int n;
    cin>>n;
    int first = 0;
    int second = 1;
    cout <<first <<" "<<second<<" ";
    int next;
    for(int i = 1; i < n-1; i++)
    {
        next = first + second;
        cout << next <<" ";
        first = second;
        second = next;
    }
}