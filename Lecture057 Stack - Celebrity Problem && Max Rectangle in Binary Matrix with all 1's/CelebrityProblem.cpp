//https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1/#

/*
Approach 1 - Brute Force Approach - TC O(n^2)
for(i = 0 to n)
{
    one loop for row - this will check if any row has all the elements as zero

    one loop for column - this will check if all the elements of a column except diagonal elements are one
}

the inner loop return bool value, check it outside and 
return ans as the number which satisfied both the loop condition
---------------------------------------------------------------------------------------------------------------------
//Brute force approach

int temp = 0,ans=0;
        for(int i =0;i<M.size();i++)
        {
            int cnt = 0;
            int pos = -1;
            
            for(int j = 0;j < M[0].size();j++)
            {
                if(M[i][j] == 0)
                    cnt++;
            }
            if(cnt == n)
            {
               ans = i;
               temp++;
            }             
        }
        
        if(temp == 1) return ans;
        
        return -1;

*/


//Approach 2- Optimised approach - TC O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    private:
    bool knows(vector<vector<int> >& M, int n, int a, int b)
    {
        if(M[a][b] == 1)
            return true;
            
        else
            return false;
    }
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> s;
        //step 1 : push all elements in stack
        for(int i = 0 ; i<n ; i++)
        {
            s.push(i);
        }
        
        //step 2 :
        while(s.size() > 1)
        {
            //Do element nikaalo
            int a = s.top();
            s.pop();
            
            int b = s.top();
            s.pop();
            
            //if a knows b
            if(knows(M,n,a,b))
                s.push(b);
            
            //if b knows a    
            else
                s.push(a);
        }
        
        //step 3 : single element in stack is potential celebrity element
        //so verify it
        int candidate = s.top();
        
        bool rowCheck = false;
        int zeroCount = 0;
        
        for(int i =0; i<n; i++)
        {
            if(M[candidate][i] == 0)
                zeroCount++;
        }
        
        if(zeroCount == n)
        {
            rowCheck = true;
        }
        
        bool colCheck = false;
        int oneCount = 0;
        
        for(int i = 0; i<n; i++)
        {
            if(M[i][candidate] == 1)
                oneCount++;
        }
        
        if(oneCount == n-1)
        {
            colCheck = true;
        }
        
        if(rowCheck == true && colCheck == true)
            return candidate;
            
        else 
            return -1;
    }
};


//Approach 3

/*

int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        
    int i = 0, j = n - 1;
   while (i < j)
    {
			if (M[j][i] == 1) // j knows i
				{
				    j--;
				}
			else // j doesnt know i so i cant be celebrity
			{
			    i++;
			}
	}
		// i points to our celebrity candidate
		int candidate = i;

		// Now, all that is left is to check that whether
		// the candidate is actually a celebrity i.e: he is
		// known by everyone but he knows no one
		for (i = 0; i < n; i++)
		{
			if (i != candidate) 
			{
				if (M[i][candidate] == 0
					|| M[candidate][i] == 1)
					{
					return -1;
					}
			}
		}
		// if we reach here this means that the candidate
		// is really a celebrity
		return candidate;
	
    }

    */