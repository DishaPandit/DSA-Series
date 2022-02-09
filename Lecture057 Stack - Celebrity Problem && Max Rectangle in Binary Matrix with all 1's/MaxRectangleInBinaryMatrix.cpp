//https://practice.geeksforgeeks.org/problems/max-rectangle/1/#

//TC - O(n*m) = where n is no. of rows and m is no. of col
//SC - O(m) = where m is no. of col becoz we are creating stack of size m

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

class Solution{
    
  private:
  
    vector<int> nextSmallerElement(int* arr, int n)
    {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i = n-1; i>=0; i--)
        {
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >=curr)
            {
                s.pop();
            }
            //ans is stack ka top
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    
    vector<int> prevSmallerElement(int* arr, int n)
    {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i = 0; i<n; i++)
        {
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >=curr)
            {
                s.pop();
            }
            //ans is stack ka top
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    
    int largestRectangleArea(int* heights, int n) {
        
        vector<int> next(n);
        next = nextSmallerElement(heights,n);
        
        vector<int> prev(n);
        prev = prevSmallerElement(heights,n);
        
        int area = INT_MIN;
        
        for(int i = 0; i<n; i++)
        {
            int l = heights[i];
            //case when all rectangle are equal / rectangles are increasing 
            //in height from left to right
            if(next[i] == -1)
                next[i] = n;
            
            int b = next[i] - prev[i] - 1;
            int newArea = l*b;
            area = max(area,newArea);
                
        }
        return area;
    }
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        //compute area for first row
        int area = largestRectangleArea(M[0],m);
        
        //baki bachi hui row ko process kro isliye i = 1 hai
        for(int i = 1; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                //update row by adding previous row
                if(M[i][j] != 0)
                {
                    M[i][j] = M[i][j] + M[i-1][j];

                }
                else
                    M[i][j] = 0;
            }
            //entire row is updated now
            //histogram wala logic lga rhe h
            area = max(area, largestRectangleArea(M[i],m));
        }
        return area;
    }
};

