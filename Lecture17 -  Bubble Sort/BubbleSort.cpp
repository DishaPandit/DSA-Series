/*
    Time -  O(n^2)
    Space - 0(1)
    Stable algorithm
    inplace algorithm
    best time complexity - O(n)
    worst time complexity - O(n^2)

*/


#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>& arr, int n)
{
    
    //for no. of rounds
    for(int i = 1; i<n; i++)
    {
        bool swapped = false;
        for(int j = 0; j<n-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        //for optimisation
        if(swapped == false)
            break;
    }
}

int main()
{
    vector<int> v{10,30,20,50,33};
    cout<<"Vector after sorting "<<endl;
    bubbleSort(v,5);
    for(int i = 0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}