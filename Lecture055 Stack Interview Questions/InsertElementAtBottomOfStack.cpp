//https://www.codingninjas.com/codestudio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166

//Iterative method - solved on my own
//TC - O(n)
//SC - O(n)
// but if it is asked to change in same stack, you cant use this method. For that use recursion

#include<bits/stdc++.h>
using namespace std;

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    stack<int> temp;
    while(!myStack.empty())
    {
        int num = myStack.top();
        temp.push(num);
        myStack.pop();
    }
    
    stack<int> ans;
    ans.push(x);
    while(!temp.empty())
    {
        int num = temp.top();
        ans.push(num);
        temp.pop();
    }
    return ans;
}


//Recursive method

/*

stack<int> solve(stack<int>& s, int x) 
{
    //base case
    if(s.empty())
    {
        s.push(x);
        return s;
    }
    
    int num = s.top();
    s.pop();
    
    //recursive call
    solve(s,x);
    s.push(num);
    
    return s;
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack,x);
    return myStack;
}


*/
