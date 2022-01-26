//https://leetcode.com/problems/reverse-integer/

/*
1. Dont just blindly apply reverse integer formula ie ans = ans + digit*pow(10,i)
Think which digit is obtained first after doing modulous by 10 and then use formula accordingly

2. Keep in mind that int can overflow. To tackle this in line ans = ans*10 + digit
we have to initially check if max and min no. divided by 10 is simulatneously greater and smaller than ans. If yes, return 0
else proceed.

3. Rest is easy. Obtain a digit at a time, Use formula to store it in answer and then divide number by 10. 
Do this till no. becomes 0.

*/

#include<iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        
        int digit;
        int ans = 0;
        int i = 0 ;
        while(x!=0)
        {
            digit = x%10;
            if(ans >INT32_MAX/10 || ans < INT32_MIN/10)
            {
                return 0;
            }
            ans = ans*10+digit;
            x = x/10;
        }
        return ans;
        
    }
};