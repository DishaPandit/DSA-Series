/*
Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.
Example:
We have an array ARR = {1, 2, 3, 4, 5, 6} and M = 3 , considering 0 
based indexing so the subarray {5, 6} will be reversed and our 
output array will be {1, 2, 3, 4, 6, 5}.
*/

#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> &arr , int m)
{
	int s = m+1;
    int e = arr.size() - 1;
    
    while(s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
        
    }
}

int main()
{
    vector<int> v;
    v.push_back(20);
    v.push_back(30);
    v.push_back(220);
    v.push_back(201);
    v.push_back(2);

    cout<<"Array before reverse :"<<endl;
    for(int i = 0; i< v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    reverseArray(v,2);

    cout<<"Array after reverse :"<<endl;
    for(int i = 0; i< v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}