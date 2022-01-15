/*
QuickSort Algorithm
--------------------

1. Declare a quicksort() with three parameters - arr[], start index, end index
2. if(s>=e) then return 
3. call a partition function to get correct index of the pivot element

    3.1 Declare partition() with three parameters - arr[], start index,end index
    3.2 Set pivot as arr[s]
    3.3 Count no.of elements <= pivot
    3.4 Set pivotIndex as s + count and swap with element at that position
    3.5 Initialize two pointer i & j and run a loop till i<j
    3.6 Keep swapping arr[i] with arr[j] if arr[i]<pivot and arr[j]>pivot

4. Recursively call left and right half of partition

*/

#include<iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;

    //counting no. of elements <= pivot
    for(int i = s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
            count++;
    }

    //placing pivot element at right position
    int pivotIndex = s + count;
    swap(arr[pivotIndex],arr[s]);

    //moving all elements <= pivot to its left and >= pivot to its right
    int i = s,j = e;
    while(i < pivotIndex && j > pivotIndex)
    {
        if(arr[i] <= pivot)
            i++;
        
        if(arr[j] > pivot)
            j--;

        if(i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;

}
void quickSort(int arr[], int s,int e)
{
    //base case
    if(s>=e)
        return;
    
    int p = partition(arr,s,e);

    //recursive call for sorting left part
    quickSort(arr,s,p-1);

    //recursive call for sorting right part
    quickSort(arr,p+1,e);

}
int main()
{
    cout<<"Enter size of array :"<<endl;
    int size;
    cin>>size;

    int *arr = new int[size];
    cout<<"Enter the elements :"<<endl;

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Sorted array is :"<<endl;

    quickSort(arr,0,size-1);

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}