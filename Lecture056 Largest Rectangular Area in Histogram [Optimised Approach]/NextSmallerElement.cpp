//https://www.codingninjas.com/codestudio/problems/next-smaller-element_1112581

//Brute force method me do for loop lgte : i=0 to i<n and j = i+1 to j<n but TC O(n^2) ho jati so use stack
//Also lets say stack is 2 4 5 7 3 where 2 is bottom element
//If we traverse from bottom to top (i.e from 2 to 3) then again TC will become O(n^2)
//So, we will traverse from top to bottom (i.e from 3 to 2) then TC will be O(n) as we will be able to save some comparisons

//TC - O(n)
//SC - O(n)

#include<bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for(int i = n-1; i>=0; i--)
    {
        int curr = arr[i];
        while(s.top()>=curr)
        {
            s.pop();
        }
        //ans is stack ka top
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}