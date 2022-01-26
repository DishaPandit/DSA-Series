https://leetcode.com/problems/power-of-two/

#include<iostream>
#include<math.h>
using namespace std;
/*
class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        int ans = 0;
        for(int i =0; i<=30; i++)
        {
            ans = (pow(2,i));
            if(ans == n)
                return true;
        }
        return false;
    }
};
*/


//optimised approach

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        int ans = 1;
        
        for(int i = 0; i <= 30; i++) {
            
            //cout<<" ans "<<ans <<endl;
            if(ans == n)
            {
                return true;
            }
            if(ans < INT32_MAX/2)
            ans = ans * 2;   
            
        }
        return false;
    }
};

