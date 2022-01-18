/*

Find poer set for the given array. Power set is the set of all the subsets
i/p : {1,2,3}
o/p : {{ },{1},{2},{3},{1,2},{2,3},{3,1},{1,2,3}}

For any set of n elements, the total elements in power set will be 2^n

https://leetcode.com/problems/subsets/

Algorithm - 

1. make a fucntion (vector that contains original array, vector that keeps output you generate in each call, 
index to track, vector of vector to store all the output array)
2. base case - if index > size of original array then, push the output vector in ans vector and return
3. Here for every index, you will either include that element or exclude it
4. Call recursively for exclude case
5. In include case, you will first have to include the element in output vector and then call recursively

*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
    
private: 
    void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans)
    {
        //base case
        if(index >= nums.size())
        {
            ans.push_back(output);
            return;
        }
        //exclude
        solve(nums,output,index+1,ans);
        
        //include
        int element = nums[index];
        output.push_back(element);
        solve(nums,output,index+1,ans);
        
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(nums,output,index,ans);
        return ans;
        
    }
};