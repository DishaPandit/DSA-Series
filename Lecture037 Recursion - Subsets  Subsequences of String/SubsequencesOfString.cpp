/*
https://www.codingninjas.com/codestudio/problems/subsequences-of-string_985087

i/p : abc
o/p : a b c ab bc ca abc 

algo will  be same as subset algo

1. make a fucntion (vector that contains original array, vector that keeps output you generate in each call, 
index to track, vector of vector to store all the output array)
2. base case - if index > size of original array then, push the output vector in ans vector and return
3. Here for every index, you will either include that element or exclude it
4. Call recursively for exclude case
5. In include case, you will first have to include the element in output vector and then call recursively

*/

#include<iostream>
#include<vector>
using namespace std;

void solve(string str, string output, int index, vector<string>& ans)
{
    //base case
    if(index >= str.length())
    {
        // used this condtition because the ques does not ask for empty subset
        if(output.length()>0)
        {
             ans.push_back(output);
        }
       
        return;
    }
    //exclude
    solve(str,output,index+1,ans);
    
    //include
    char element =  str[index];
    output.push_back(element);
    solve(str,output,index+1,ans);
}

vector<string> subsequences(string str){
	
	vector<string> ans;
    string output;
    int index = 0;
    solve(str,output,index,ans);
    return ans;
    
	
}

