//

//TC - O(log n)
//SC - O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        
        int low = 0,high = x;
        long long int ans = 0;
       while(low<=high)
       {
          long long int mid = low + (high-low)/2;
          long long int msq = mid*mid;
           if(msq == x)
               return mid;
           else if(msq>x)
               high = mid-1;
           else
           {
               low = mid+1;
               ans = mid;
           }
       }
        return ans;
        
    }
};