#include<iostream>
using namespace std;
 bool isSorted(int arr[], int size)
 {
     //base case
     if(size == 0 || size == 1)
        return true;
     if(arr[0]>arr[1])
        return false;
    
     else
     {
         bool ans = isSorted(arr+1,size-1);
         return ans;
     }
 }
 int main()
 {
     int arr[5]={1,3,4,5,8};
     bool ans = isSorted(arr,5);

     if(ans)
        cout << "Sorted array"<<endl;
     else
        cout << "Unsorted array"<<endl;

     return 0;
 }