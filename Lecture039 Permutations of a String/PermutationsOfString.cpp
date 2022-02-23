/*
https://www.codingninjas.com/codestudio/problems/permutations-of-a-string_985254?leftPanelTab=0

print permutations lexicographically like dictionary
*/
#include<bits/stdc++.h>
using namespace std;

//my solution gives permutation but not in lexicographical order
void solve(string& str,int index, vector<string>& ans)
{
    //base case
    if(index>=str.length())
    {
        ans.push_back(str);
        return;
    }
    for(int j = index; j <str.length(); j++)
    {
        swap(str[j],str[index]);
        solve(str,index+1,ans);
        swap(str[j],str[index]);
    }
}

vector<string> generatePermutations(string &str)
{

    vector<string> ans;
    if(str.length()==0)
        return ans;
    int index = 0;
    solve(str,index,ans);
    sort(str.begin(), str.end());
    return ans;
}

/*

someone else's solution. gives correct ouput but gives tle for large tc

#include<bits/stdc++.h>
void helper(string up, string p, vector<string> &ans) {
   if (up.length() == 0) {
       ans.push_back(p);
       return;
   }
   for (int i = 0; i < up.length(); i++) {
       char ch = up.at(i);
       string s = up.substr(0, i) + up.substr(i + 1);
       helper(s, p + ch, ans);
   }
}

vector<string> generatePermutations(string &str)
{
   // write your code here
   vector<string> ans;
   helper(str, "", ans);
   sort(ans.begin(), ans.end());
   return ans;
}

*/
