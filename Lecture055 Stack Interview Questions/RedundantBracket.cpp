//https://www.codingninjas.com/codestudio/problems/redundant-brackets_975473
//not easy. need a dry run to make conditions . medium level ques

//TC - O(n)
//SC - O(n)

#include<iostream>
#include<stack>
using namespace std;

bool findRedundantBrackets(string &s)
{
    stack<char> st;
    
    for(int i = 0; i<s.length(); i++)
    {
        char ch = s[i];
        if(ch == '(' || ch == '+' || ch == '-' || ch == '/' || ch == '*')
        {
            st.push(ch);
        }
        else 
        {
            //ch is either lowercase or closing bracket
            if(ch == ')')
            {
                bool isRedundant = true;
                while(st.top() != '(' )
                {
                    char top = st.top();
                    if(top == '+' || top == '-' || top == '/' || top == '*')
                    {
                        isRedundant = false;
                    }
                    st.pop();
                }
                if(isRedundant)
                    return true;
                st.pop();
            }
        }
    }
}
