//https://leetcode.com/problems/peak-index-in-a-mountain-array/

/*
    1. mountain array le as a example
    2. teen condition bni - ek left of peak, right of peak and on the peak
    3. wo gdho wala idea mt laga ki peak se phle aur peak k baad wala 
       element chota hoga to usey if condition me rkh do
    4. break kr condition ko based on two lines of mountain
    
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int low = 0;
        int high = arr.size()-1;
        int mid;
        
        while(low<high) // <= isliye use nhi kiya kyuki jb ek element bchega to same comparison do bar ho jaegi
            // s == e wali condition do baar ho jaegi na aur tle bhi maar dega
        {
            mid = low + (high-low)/2; 
            
            if(arr[mid+1]>arr[mid])
                low = mid + 1;
            
            else 
                high = mid; //agar mid-1 kr dete to peak wala case bigad jata
            
        }
        return low;     //you can return high also
    }
};