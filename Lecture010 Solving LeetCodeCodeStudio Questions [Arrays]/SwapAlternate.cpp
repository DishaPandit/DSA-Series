// swap array as below
// if arr[] = {1,2,3,4,5,6}
//after swapping arr[]= {2,1,4,3,6,5}

#include<iostream>
using namespace std;

void swapArray(int arr[], int size)
{
  //int temp;
  for(int i =0; i<size-1; i+=2)
  {
    // temp = arr[i+1];
    // arr[i+1]= arr[i];
    // arr[i]= temp;

    swap(arr[i],arr[i+1]);
  }
   for(int i=0;i<size;i++)
   {
     cout<<arr[i]<<" ";
   }
}
int main()
{
  cout<<"Enter size of array"<<endl;
  int size;
  cin>>size;
  int *arr = new int[size];
  cout <<"Enter elements "<<endl;
  for(int i =0; i<size; i++)
  {
    cin>>arr[i];
  }
 
  swapArray(arr,size);
  return 0;
}
