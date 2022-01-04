//https://www.codingninjas.com/codestudio/problems/count-ways-to-reach-nth-stairs_798650
//This solution gives TLE. Will require DP to solve it

#include<iostream>
using namespace std;

int countDistinctWayToClimbStair(long long nStairs)
{
    //base case
    if(nStairs<0)
        return 0;
    if(nStairs==0)
        return 1;
    
    //RC
    int ans = countDistinctWayToClimbStair(nStairs-1) +
        countDistinctWayToClimbStair(nStairs-2);
    return ans;
}