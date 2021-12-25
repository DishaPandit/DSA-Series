#include<iostream>
using namespace std;

int main()
{
    int arr[3][4];
    
    //int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,14,16};
    //int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};
    
    cout<<"Enter your input";

    //taking input - row wise

    for(int i = 0; i<3; i++ )
    {
        for(int j = 0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }

    //taking input - col wise

   /*
    
    for(int j = 0; j<4; j++ )
    {
        for(int i = 0; i<3; i++)
        {
            cin>>arr[i][j];
        }
    }

    */

  

    //giving output
    cout<<"Array is "<<endl;
    for(int i = 0; i<3; i++ )
    {
        for(int j = 0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}