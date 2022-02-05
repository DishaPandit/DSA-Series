//https://www.codingninjas.com/codestudio/problems/search-in-rotated-sorted-array_1082554

//TC - O(log n)
//SC - O(1)

/*
Sorted rotated array ka graph banenge to do line bnegi. We know arr[0] and arr[n-1] which lies on line 1 and line 2 respectively
To perform binary search we need start and end on the same point. Hence we use the concept of pivot element. which will lie on 
second line. Now we have two points on second line and we can perform binary search. So we check if key lies on second line, we 
perform binary search on 2nd line, else on first line. Easy peasy
*/


#include<bits/stdc++.h>
using namespace std;

int findPivot(vector<int>& arr, int n)
{
    int s = 0;
    int e = arr.size()-1;
    
    while(s<e)
    {
        int mid = s + (e-s)/2;
        if(arr[mid]>=arr[0])
            s = mid+1;
        else
            e = mid;
    }
    return s;
}

int binarySearch(vector<int>& arr,int n,int start, int end,int key)
{
    int s = start;
    int e = end;
    
    while(s<=e)
    {
        int mid = s+ (e-s)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]>key)
            e = mid-1;
        else
            s = mid+1;
    }
    return -1;
}

int findPosition(vector<int>& arr, int n, int k)
{
    int pivot = findPivot(arr,n);
    int e = arr.size()-1;
    int ans = -1;
    if(k>= arr[pivot] && k<= arr[e])
        ans = binarySearch(arr,n,pivot,e,k);
    else
        ans = binarySearch(arr,n,0,pivot-1,k);
    
    return ans;
}

