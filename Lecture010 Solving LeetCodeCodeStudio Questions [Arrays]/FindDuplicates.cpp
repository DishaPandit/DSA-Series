//same as find missing no.

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,3};
    int res = 0;

    //XOR of all array elements
    for(int i = 0; i<5;i++)
    {
        res = res^arr[i];
    }

    //XOR of [1,n-1] numbers
    for(int i = 1; i<5; i++)
    {
        res = res^i;
    }
    cout <<"Duplicate no. is : "<<res<<endl;
}