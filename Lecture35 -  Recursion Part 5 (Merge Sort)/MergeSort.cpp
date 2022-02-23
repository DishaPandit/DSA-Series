//important
//Merge Sort using extra space
//Space complexity = O(n)

#include<iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s+(e-s)/2;

    //calculating length of both new arrays
    int len1 = mid-s+1;
    int len2 = e-mid;

    //creating two new arrays
    int *first = new int[len1];
    int *second = new int[len2];

    //copying value of original array into 2 new arrays
    int k = s;
    for(int i=0; i<len1;i++)
    {
        first[i]=arr[k++];
    }
    for(int i=0; i<len2;i++)
    {
        second[i]=arr[k++];
    }

    //merging two sorted halves
    k = s;
    int index1 = 0;
    int index2 = 0;
    while(index1 < len1 && index2 < len2)
    {
        if(first[index1]<second[index2])
            arr[k++] = first[index1++];

        else
            arr[k++] = second[index2++];
    }
    while(index1 < len1)
    {
        arr[k++] = first[index1++];
    }
    while(index2 < len2)
    {
        arr[k++] = second[index2++];
    }
}

void mergeSort(int *arr, int s, int e)
{
    //base case
    if(s>=e)
        return;
    
    int mid = s +(e-s)/2;

    //sort left half
    mergeSort(arr,s,mid);

    //sort right half
    mergeSort(arr,mid+1,e);

    //merge sorted arrays
    merge(arr,s,e);
}

int main()
{
    cout<<"Enter size of array :"<<endl;
    int size;
    cin>>size;

    int *arr = new int[size];

    cout<<"Enter the elements :"<<endl;
    for(int i =0; i<size; i++)
    {
        cin>>arr[i];
    }

    mergeSort(arr,0,size-1);

    for(int i =0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    delete []arr;
    return 0;

}