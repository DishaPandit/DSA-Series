/*

    Time - O(n^2) both in best and worst case
    Space - O(1)

    This is an unstable algo

*/



#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>& arr, int n)
{
    //for no. of rounds
    for(int i = 0; i<n-1; i++)
    {
        int minIndex = i;

        //for finding min element in remaining vector
        for(int j = i+1; j<n; j++)
        {
            if(arr[j]<arr[minIndex])
                minIndex =  j;
        }

        swap(arr[i],arr[minIndex]);
    }
}

int main()
{
    vector<int> v{ 10, 20, 30, 40, 50 }; 
    selectionSort(v,5);

    cout<<"Printing vector after sorting"<<endl;
    for(int i = 0; i< v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}