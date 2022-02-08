//https://www.codingninjas.com/codestudio/problems/sort-a-stack_985275
//TC - O(n^2)

#include<bits/stdc++.h>
using namespace std;

void sortedInsert(stack<int> &s, int element)
{
    //base case
    //main logic lies here
    if(s.empty() || (!s.empty() && s.top()<element))
    {
        s.push(element);
        return;
    }
    
    int num = s.top();
    s.pop();
    
    //recursive call
    sortedInsert(s,element);
    s.push(num);
}

void sortStack(stack<int> &stack)
{
	// base case
    if(stack.empty())
    {
        return;
    }
    
    int num = stack.top();
    stack.pop();
    
    //recursive call
    sortStack(stack);
    sortedInsert(stack,num);
}