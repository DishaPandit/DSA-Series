//https://www.codingninjas.com/codestudio/problems/sort-0-1-2_631055?
//TC - O(nlogn)

#include<bits/stdc++.h>
using namespace std;

void sort012(int *arr, int n)
{
   //used this instead of arr.begin() and arr.end() becoz we are passing pointer
   sort(arr,arr+n);
}


//method -2
/*

void sort012(int *arr, int n)
{
    Time Complexity - 0(n)
    int low  = 0;
    int mid = 0;
    int high = n-1;
    
    while(mid<=high)
    {
		if(arr[mid] == 0)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else   //(arr[mid] == 2)
        {
            swap(arr[mid],arr[high]);
            high--;
           
        }
        
    }
}

*/