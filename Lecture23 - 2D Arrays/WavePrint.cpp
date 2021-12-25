/*
imp ques

https://www.codingninjas.com/codestudio/problems/print-like-a-wave_893268

i/p :  1 2 3 
       4 5 6
       7 8 9 

o/p :  1 4 7   first print top to bottom, then bottom to top and so on
       8 5 2
       3 6 9

We are traversing each element once. No. of elements are n*m. So time complexity is  O(nm) where n is no. of rows and m is no. of columns

*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> v;
   for(int col = 0; col<mCols; col++)
   {
       
       //even col no.
       if(col%2==0)
       {
           for(int row = 0; row<nRows; row++)
           		v.push_back(arr[row][col]);
       }
       else
       {
           for(int row = nRows-1; row>=0; row--)
                v.push_back(arr[row][col]);
       }
       
   }
    return v;
}