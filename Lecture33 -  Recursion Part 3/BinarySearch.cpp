<<<<<<< HEAD
//https://www.codingninjas.com/codestudio/problems/binary-search_972

#include<iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int target)
{
    //base case
    if(s>e)
        return 0;
    
    int mid = s+(e-s)/2;

    if(target==arr[mid])
        return 1;

    else if(target>arr[mid])
        return binarySearch(arr,mid+1,e,target);
    else
        return binarySearch(arr,s,mid-1,target);
    
}

int main()
{
    int size;
    cout <<"Enter the size of array :"<<endl;
    cin >>size;
    int *arr = new int[size];
    cout << "Enter elements "<<endl;
    for(int i = 0; i<size; i++)
    {
        cin>>arr[i];
    }

    int target;
    cout <<"Enter element you want to find "<<endl;
    cin >> target;

    bool ans = binarySearch(arr,0,size-1,target);
    if(ans)
        cout <<"Element found "<<endl;
    else
        cout <<"Element not found "<<endl;

    return 0;
}
||||||| 3935907
=======
#include<iostream>
using namespace std;
 bool binarySearch(int arr[], int size)
 {
     //base case
     if(size == 0 || size == 1)
        return true;
     if(arr[0]>arr[1])
        return false;
    
     else
     {
         bool ans = binarySearch(arr+1,size-1);
         return ans;
     }
 }
 int main()
 {
     int arr[5]={1,3,4,5,8};
     bool ans = binarySearch(arr,5);

     if(ans)
        cout << "Sorted array"<<endl;
     else
        cout << "Unsorted array"<<endl;

     return 0;
 }
>>>>>>> 95b2c2d8a00fe3bac08571b4f6e1cc4224aecf45
