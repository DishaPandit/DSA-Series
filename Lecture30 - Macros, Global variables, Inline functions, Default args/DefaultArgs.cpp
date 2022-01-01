/*
Default argument is used to make a parameter optional
Means a value is provided by user use that value
else use the default value

condition is we start making argument as default from right most side

ex. print(int a, int b, int c=1) ----> correct
    print(int a, int b = 8, int c) ---> wrong
    print(int a, int b= 2, int c= 3) ---> correct

*/

#include<iostream>
using namespace std;

void print (int arr[], int n, int start = 0)    //start is default argument here
{
    for(int i = start; i<n; i++)
    {
        cout << arr[i] <<" ";
    }
}

int main()
{
    int arr[5]={1,2,3,4,5};

    print(arr,5);   //skipped last argument
    cout<<endl;
    print(arr,5,2);

    return 0;
}