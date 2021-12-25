#include<iostream>
using namespace std;

int largestRowSum(int arr[][4], int n, int m)
{
    int max = INT32_MIN;
    int maxRow = 1;
    
    for(int i = 0; i<3; i++ )
    {
        int sum = 0;
        for(int j = 0; j<4; j++)
        {
           sum = sum + arr[i][j]; 
            
        }

        if(sum > max)
        {
            max = sum;
            maxRow = i+1;
        }
        
    }
    return maxRow;
   

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

    int ans = largestRowSum(arr,3,4);
    cout<<"Row with largest sum is "<<ans<<endl;

    return 0;
}