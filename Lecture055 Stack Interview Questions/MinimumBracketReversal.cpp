//https://www.codingninjas.com/codestudio/problems/minimum-cost-to-make-string-valid_1115770

//TC - O(n)
//SC - O(n)

//slightly tough

#include<bits/stdc++.h>
using namespace std;

#include<stack>
int findMinimumCost(string str) {
    
    //odd condition
    if(str.length()%2 == 1)
        return -1;
    
    stack<char> s;
    for(int i = 0; i<str.length(); i++)
    {
        char ch = str[i];
        
        //removing valid expression
        
        if(ch == '{')
            s.push(ch);
        
        else
        {
            if(!s.empty() && s.top() == '{')
            {
                s.pop();
            }
            else
            {
                s.push(ch);
            }
        }
    }
    
    //handling the invalid expression
        // a = count of closed brace, b = count of open brace
        int a = 0, b = 0;
        while(!s.empty())
        {
            if(s.top() == '{')
                b++;
            
            else
                a++;
            
            s.pop();
        }
    
        int ans = (a+1)/2 + (b+1)/2;
        return ans;
}