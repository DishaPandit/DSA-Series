//Find the total no. of occurence of an element in the given array

//Tc - O(log n)

#include<bits/stdc++.h>
using namespace std;

int firstOcc(vector<int>& arr, int n, int k)
{
    int s = 0;
    int e = n-1;
    int mid;
    int ans = -1;
    while(s<=e)
    {
        mid = s + (e-s)/2;
        if(arr[mid]==k)
        {
            ans = mid;
            //move e to left part becoz we are searching left most occ to common 
            //sense hai ki wo left me hi milega
            e = mid-1;
        }
        else if(arr[mid]>k)
            e = mid-1;
        
        else
            s = mid+1;  
    }
    return ans;
}

int lastOcc(vector<int>& arr, int n, int k)
{
    int s = 0;
    int e = n-1;
    int mid;
    int ans = -1;
    while(s<=e)
    {
        mid = s + (e-s)/2;
        if(arr[mid]==k)
        {
            ans = mid;
            //move s to right part becoz we are searching right most occ to common 
            //sense hai ki wo right me hi milega
            s = mid+1;
        }
        else if(arr[mid]>k)
            e = mid-1;
        
        else
            s = mid+1;    
    }
    return ans;
}

int countOcc(vector<int>& arr, int n, int k)
{
    int first = firstOcc(arr,n,k);
    if(first == -1)
        return 0;

    else
    {
        return lastOcc(arr,n,k) - first + 1;
    }
}

int main()
{
    vector<int> v = {1,2,3,4,4,4,4,4,4,4,4,5,6,7,8,8};
    cout << "Total occurence of 4 is : "<<countOcc(v,16,4)<<endl;
}