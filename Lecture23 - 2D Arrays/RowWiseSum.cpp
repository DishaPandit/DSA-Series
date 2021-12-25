#include<iostream>
using namespace std;

void sum(int arr[][4], int n, int m)
{
    
    for(int i = 0; i<3; i++ )
    {
        int sum = 0;
        for(int j = 0; j<4; j++)
        {
           sum = sum + arr[i][j]; 
            
        }

        cout<<"Sum of "<<i+1 <<"th row : "<<sum <<endl;
    }
   

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

    sum(arr,3,4);

    return 0;
}