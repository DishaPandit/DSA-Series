//https://www.codingninjas.com/codestudio/problems/n-stacks-in-an-array_1164271

//TC - O(1)
//SC - O(s+n)

//kafi hard. mujhe to smjh nhi aaya do baar me bhi

#include<bits/stdc++.h>
using namespace std;

class NStack
{
    int *arr;
    int *top;
    int *next;
    
    int n, s;
    int freeSpot;
    
public:
    // Initialize your data structure.
    NStack(int N, int S)
    {
        n = N;
        s = S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];
        
        //initialize top
        for(int i = 0; i<n ; i++)
        {
            top[i] = -1;
        }
        
        //initialise next
        for(int i = 0; i<s; i++)
        {
            next[i] = i+1;
        }
        
        //update last index value of next to -1
        //kyuki wo kisi ko point nhi krega
        next[s-1] = -1;
        
        freeSpot = 0;
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        // Check for overflow
        if(freeSpot == -1)
            return false;
        
        //find index
        int index = freeSpot;
        
        //update freeSpot
        freeSpot = next[index];
        
        //insert element into array
        arr[index] = x;
        
        //update next
        next[index] = top[m-1];
        
        //update top
        top[m-1] = index;
        
        return true; 
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        // check underflow
        if(top[m-1] == -1)
            return -1;
        
        //push wale function ko reverse order me likh do
        
        int index = top[m-1];
        
        top[m-1] = next[index];
        
        next[index] = freeSpot;
        
        freeSpot = index;
        
        return arr[index];
    }
};