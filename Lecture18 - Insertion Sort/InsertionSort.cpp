#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int>& arr, int n)
{
    int j;
    for(int i = 1; i<n; i++)
    {
        int temp = arr[i];

        for(j = i-1; j>=0; j++)
        {
            if(arr[j] > temp)
                arr[j+1] = arr[j];
            else
                break;
        }
        arr[j+1] = temp;
    }
}

int main()
{
    vector<int> v{ 10, 20, 30, 40, 50 }; 
    insertionSort(v,5);

    cout<<"Printing vector after sorting"<<endl;
    for(int i = 0; i< v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}