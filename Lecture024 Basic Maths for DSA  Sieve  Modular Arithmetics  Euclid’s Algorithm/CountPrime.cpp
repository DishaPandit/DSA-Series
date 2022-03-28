//https://leetcode.com/problems/count-primes/

//brute force
//TC - O(n* sqrt(n))

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    bool isPrime(int n)
    {
        if(n<=1)
            return false;
        
        for(int i = 2; i<n; i++)
        {
            if(n%i == 0)
                return false;
        }
        return true;
    }
    
    int countPrimes(int n) {
        
        int count = 0;
        for(int i = 2; i<n; i++)
        {
            if(isPrime(i))
                count++;
        }
        return count;
        
    }
};



/*

Sieve of erathosthenes 
TC - O(nlog log n)

class Solution {
public:
    int countPrimes(int n) {
        
        int count = 0;
        vector<bool> isPrime(n+1,true);
        for(int i = 2; i<=sqrt(n); i++)
        {
            if(isPrime[i])
            {
                for(int j = 2*i; j<=n; j=j+i)
                {
                    isPrime[j] = false;
                }
            }
        }
        
        for(int i = 2; i<n; i++)
        {
            if(isPrime[i])
                count++;
        }
        return count;
        
    }
};

*/