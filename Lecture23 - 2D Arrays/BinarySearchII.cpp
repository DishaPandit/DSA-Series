/*
https://leetcode.com/problems/search-a-2d-matrix-ii/

here we are not using concept of mid. it was not applicable coz not sorted
so tried to reduce our search space

Time Complexity - O(m+n)
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        
        //these two statement you found by hit and trial, like
        // you thought that this approach will be applicable when
        // you start from last element of first row
        //hence u initialised in this way
        
        int rowIndex = 0;
        int colIndex = col-1;
        
        while(rowIndex < row && colIndex >=0)
        {
            int element = matrix[rowIndex][colIndex];
            
            if(element == target)
                return true;
            else if(element < target)
                rowIndex++;
            else
                colIndex--;
        }
        return false;
    }
};