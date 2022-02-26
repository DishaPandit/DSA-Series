//https://leetcode.com/problems/find-all-duplicates-in-an-array

//Solution 1
//TC- O(n*n)

#include<iostream>
#include<vector>
using namespace std;
class Solution{

public:

    vector<int> findDuplicates(vector<int>& nums)
    {
        if(nums.empty())
        {
            return {};
        }
        vector<int> ans;
        for(int i =0; i<nums.size();i++)
        {
            for(int j = i+1; j<nums.size();j++)
            {
                if(nums[i]!=nums[j])
                    continue;
                
                else{
                    ans.push_back(nums[i]);
                    break;
                }
            }
        }
        return ans;
    }

};

//Solution 2
//TC - O(n)
//SC - O(1
//https://leetcode.com/problems/find-all-duplicates-in-an-array/discuss/775798/c%2B%2B-Four-Solution-or-O-(N*N)-to-greater-O(N)-or-Explain-All
/*

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        if(nums.empty())return {};
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])-1]<0)
                ans.push_back(abs(nums[i]));
            nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
        }
        return ans;
    }
};

*/


//Solution 3 
//TC - O(n)
//SC - O(n)

/*

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        if(nums.empty())return {};
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int no:nums)mp[no]++;
        for(auto it:mp)if(it.second==2)ans.push_back(it.first);
        return ans;
    }
};

*/