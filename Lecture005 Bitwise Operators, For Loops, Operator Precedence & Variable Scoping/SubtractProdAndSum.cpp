// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

#include<iostream>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int product = 1;
        int sum = 0;
        int ans;
        int digit;
        
        while(n!=0)
        {
            digit = n%10;
            product = product * digit;
            sum = sum + digit;
            n = n/10;
        }
        
        ans = product - sum;
        return ans;
    }
};