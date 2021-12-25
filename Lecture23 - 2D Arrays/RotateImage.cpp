/*

https://leetcode.com/problems/rotate-image/

i/p : 1 2 3
      4 5 6 
      7 8 9

o/p : 7 4 1
      8 5 2
      9 6 3

*/

#include<iostream>
#include<vector>
using namespace std;

void rotateImage(vector<vector<int>>& matrix)
{
    int n = matrix.size();

    //transpose of  matrix

    for(int i = 0; i<n ; i++)
    {
        //if I start j =0 , then it will again swap (1,0) with (0,1) hence nullifying 
        //previous swap effect theerfore giving wrong answer hence j=i

        for(int j = i; j<n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    //reverse of transpose matrix

    
    for(int i = 0; i<n; i++)
    {

        //s and e are declared inside for becoz it need to restored to default values for every row so that it can be swapped

        int s = 0;
        int e = n-1;

         while(s<e)
        {
            swap(matrix[i][s++], matrix[i][e--]);
        }
    }
   
}