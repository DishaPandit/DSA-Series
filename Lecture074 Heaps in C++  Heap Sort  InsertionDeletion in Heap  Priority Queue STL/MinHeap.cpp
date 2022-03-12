//https://www.codingninjas.com/codestudio/problems/build-min-heap_1171167

//building a heap - TC - O(n)
//heapify - TC - O(log n)

#include<bits/stdc++.h>
using namespace std;

void minHeapify(vector<int> &arr, int n, int i)        //TC - O(log n)
    {
        int smallest = i;
    	//becoz 0 based indexing
        int left = 2*i + 1;
        int right = 2*i +2;

        if(left < n && arr[smallest] > arr[left])
            smallest = left;

        if(right < n && arr[smallest] > arr[right])
            smallest = right;

        if(smallest != i)
        {
            swap(arr[smallest],arr[i]);
            minHeapify(arr, n, smallest);
        }
    }

vector<int> buildMinHeap(vector<int> &arr)
{
    int n = arr.size();
    for(int i = n/2-1; i>=0; i--)
    {
        minHeapify(arr,n,i);
    }
    return arr;
}
