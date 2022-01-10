#include<iostream>
using namespace std;

void bubbleSort(int *arr,int n)
{
    //base case
    if(n==0|| n==1)
    {
        return;
    }
    //solve one case
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
    }
    bubbleSort(arr,n-1);
}
int main()
{
    cout<<"Enter size of array :"<<endl;
    int size;
    cin>>size;
    cout<<"Enter elements :"<<endl;
    int *arr = new int[size];
    for(int i = 0;i<size; i++)
    {
        cin>>arr[i];
    }

    bubbleSort(arr,size);

    for(int i = 0;i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

}