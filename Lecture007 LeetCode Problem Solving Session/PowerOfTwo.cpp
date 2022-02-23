//https://leetcode.com/problems/power-of-two/

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


//optimised approach :isme hm har step pe jo answe nikaal rhe hai uska use krte ja rhe hai taki processing kam ho

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        //isme hm har step pe jo answe nikaal rhe hai uska use krte ja rhe hai taki processing kam ho
        //isliye ans ko 1 liya hai aur neeche ans ko bs 2 se multiply krre hai
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

