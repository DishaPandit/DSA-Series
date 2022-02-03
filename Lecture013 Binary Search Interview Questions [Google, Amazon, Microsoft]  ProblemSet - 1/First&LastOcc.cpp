//https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549

//TC - O(log n)

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

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
  	pair<int,int> p ;
    p.first = firstOcc(arr,n,k);
    p.second = lastOcc(arr,n,k);
    return p;
}