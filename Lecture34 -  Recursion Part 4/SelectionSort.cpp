#include<iostream>
using namespace std;

void selectionSort(int *arr,int n)
{
    //base case
    if(n==0|| n==1)
    {
        return;
    }
   
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

    selectionSort(arr,size);

    for(int i = 0;i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

}