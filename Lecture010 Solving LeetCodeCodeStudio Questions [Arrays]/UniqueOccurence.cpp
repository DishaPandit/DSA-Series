//https://leetcode.com/problems/unique-number-of-occurrences/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ans;
        // Loop to check number of occurrences
        for(int i=0; i<arr.size(); i++)
        {
            int temp = arr[i]; // Store the value of arr[i] in a variable so after traversing through second loop value of arr[i] doesn't change in between
            int count = 0; // Counting occurences
            
            if(temp != INT32_MIN)
            {
                for(int j=0; j<arr.size(); j++)
                {
                    if(temp == arr[j])
                    {
                        count++;
                        arr[j] = INT32_MIN; // Initializing visited numbers of array with INT_MIN
                    }
                }
                if(count>0)
                    ans.push_back(count);
            }
        }
        // Loop to check frequency of a number
        for(int i=0; i<ans.size(); i++)
        {
            int count_fr = 0; // Counting frequency of a number in dynamic array
            for(int j=0; j<ans.size(); j++)
            {
                if(ans[i] == ans[j])
                    count_fr++;
            }
            if(count_fr > 1)
                return false;
        }
        return true; 
        
    }
};

//method 2

/*
bool uniqueOccurrences(vector<int>& arr) {
       unordered_map<int, int>m;
        for(auto &i:arr){
            m[i]++;
        }
        unordered_map<int,int>n;
        for(auto &i:m){
            n[i.second]++;
        }
        return size(n)==size(m);
    }

*/

//method 3

/*

Actually what we are given was that array can contain numbers from -1000 to +1000 which means a total of 2001 possible distinct numbers there can be in an array,
we want to count the number of appearances of every number, for example, the number of 1's appeared will be stored at A[1], 2's at A[2] like that this is possible 
only when a number is positive, as we can't have A[-2] or A[-1] as we know array index can't be in negative, for that i.e for negative numbers I am storing them after from 1000, 
for that I used logic 2001 + number, as the number is negative,
for number = -1 we will store its occurrence at 2001+(-1) = 2000 index of A, similarly for -2's at 1999 index of A, like that we can store all the numbers in the array of size 2001,
After storing count, you have an array A which contain the count of appearances of every element,
As what we want is no two elements should have the same number of the count, i.e if 1's appears 2 times and 2's also appeared 2 times then the answer is false, 
what that means is A[1] = 2, A[2] = 2, if we create another array B which can store the count number that if a number appeared 1 times then it should be stored at B[1], 
if a number appeared two times then it should be stored at B[2] , like that , if more than two number have same number of count then they will be stored at the same index of B
for example
let suppose A[i] = k, and A[j] = k and we store occurrence at B so B[k] = 2 , that means we increase B[i] by 1 for every occurrence of i in A,
that is why we create both arrays with 0 stored at every position,
if for any B[i] if B[i] is greater than 1 that means any two number have occurrences same we return false in that case,
otherwise true
I hope I made it a little clear, if still doubt then you can ask again


bool uniqueOccurrences(vector<int>& arr) {
        int A[2001],B[2001];
        for(int i = 0;i<2001;i++){
            A[i] = 0;
            B[i] = 0;
        }
        for(int i = 0;i<(int)(arr.size());i++){
            if(arr[i]>=0){
                A[arr[i]]++;
            }
            else{
                A[arr[i]+2001]++;
            }
        }
        for(int i = 0;i<2001;i++){
            if(A[i])
              B[A[i]]++;  
        }
        for(int i = 0;i<2001;i++){
            if(B[i]>1) return false;
        }
        return true;
    }
*/
