/*
https://leetcode.com/problems/search-a-2d-matrix/

Here the whole concept is same as binary search for 1D array. 
But the problem arruise when we say arr[mid] coz here we need two parameters

so we have to map mid such that it becomes something in the form of arr[i][j]

that is why we found i = mid/col and j = mid%col

Time Complexity - O(log nm)
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int s = 0;
        int e = row*col-1;
        
        while(s<=e)
        {
            int mid = s+ (e-s)/2;
            int element = matrix[mid/col][mid%col];
            
            if(element==target)
            {
                return true;
            }
            else if(element<target)
            {
                s = mid+1;
            }
            else
            {
                e = mid-1;
            }
        }
        return false;
        
    }
};