//https://leetcode.com/problems/complement-of-base-10-integer/

#include<iostream>
using namespace std;

class Solution {
public:
    int bitwiseComplement(int n) {
        
        int m = n;
        int mask = 0;
        
        //edge case
        if(n==0)
            return 1;
        
        while(m !=0)
        {
            
            mask = (mask<<1)|1;
    
            //to count how many times while loop run
            m = m>>1;
        }
        
        int ans = ~n&mask;
        return ans;
    }
};