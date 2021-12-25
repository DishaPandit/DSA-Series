/*

https://leetcode.com/problems/spiral-matrix/

i/p :  1 2 3
       4 5 6
       7 8 9

o/p :  1 2 3 
       6 9 8 
       7 4 5   

       that is print in a spiral manner clockwise

       Approach :

       1. Print starting row. increase starting row
       2. Print ending col.decrease ending col
       3. Print ending row. decrease ending row
       4. Print starting col. increase starting col

       Handle duplicates

IMP INFO
**********************************************************************************************************

We have std::vector<std::vector<int>> vec(10,std::vector<int>(10)):

Number of rows (the number of std::vector<int> contained in vec): vec.size()
Number of columns (the number of elements contained in each std::vector<int>): vec[0].size()
Total number of elements: vec.size()*vec[0].size()

**********************************************************************************************************

We are traversing each element once. No. of elements are n*m. So time complexity is  O(nm) where n is no. of rows and m is no. of columns

*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row-1;
        int endingCol = col-1;
        
        int count = 0;
        int total = row*col;
        
        //so that each element get traversed once
        while(count<total)
        {
            //print starting row
            
            for(int index = startingCol; index<=endingCol && count<total; index++)
            {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            
            
            //print ending col
            
            for(int index = startingRow; index<=endingRow && count<total; index++)
            {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;
            
            
            //print ending row
            
            for(int index = endingCol; index >= startingCol && count<total; index--)
            {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
            
            
            //print starting col
            for(int index = endingRow; index>=startingRow && count<total; index--)
            {
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        
        return ans;
        
    }
};
