/*

Time Complexity - O(n*m)

You will have to always specify col no. while declaring 2D array
arr[][] - wrong
arr[][4] - right

https://stackoverflow.com/questions/12813494/why-do-we-need-to-specify-the-column-size-when-passing-a-2d-array-as-a-parameter

*/

#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int n, int m)
{
    for(int i = 0; i<3; i++ )
    {
        for(int j = 0; j<3; j++)
        {
            if(arr[i][j]==target)
                return 1;
            
        }
    }
    return 0;

}

int main()
{
    int arr[3][4];

    
    cout<<"Enter your input"<<endl;

    //taking input - row wise

    for(int i = 0; i<3; i++ )
    {
        for(int j = 0; j<4; j++)
        {
            cin>>arr[i][j];
        }
    }

    int target ;
    cout<<"Enter element which you want to find "<<endl;
    cin>>target;

    if(isPresent(arr,target,3,4))
        cout<<"Element found";
    else
        cout<<"Not found";

    return 0;
}