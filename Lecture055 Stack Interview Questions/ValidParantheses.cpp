//https://www.codingninjas.com/codestudio/problems/valid-parenthesis_795104?

//Important
//TC - O(n)
//SC - O(n)

#include<bits/stdc++.h>
using namespace std;

bool isValidParenthesis(string expression)
{
    stack<char> s;
    for(int i = 0; i<expression.length(); i++)
    {
        char ch = expression[i];
        
        //if openeing bracket, push in stack
        if(ch == '(' || ch == '[' || ch == '{')
            s.push(ch);
        
        //if closing bracket
        else
        {
            if(!s.empty())
            {
                char top = s.top();
                if((ch == ')' && top == '(') || 
                   (ch == '}' && top == '{') ||
                   (ch == ']' && top == '['))
                {
                    s.pop();
                }       
                else 
                	return false;      
            }
            
            //stack is empty and you are getting closing bracket
            //hence unbalanced
            else
                return false;        
        }
    }
    if(s.empty())
        return true;
    else
        return false;
}