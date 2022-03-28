//Pow(x,n) 
//Modular exponentiation

//TC - O(log n)
//SC - O(1)
//Iterative method

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
		long long int PowMod(long long int x,long long int n,long long int M)
		{
		    long long int res = 1;
		    while(n)
		    {
		        if(n&1)
		            res = (res * (x)%M)%M;
		            
		        x = ((x)%M * (x)%M)%M;
		        n = n>>1;
		    }
		    
		    return res;
		    
		}
};
