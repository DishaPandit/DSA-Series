//https://www.codingninjas.com/codestudio/problems/design-a-stack-that-supports-getmin-in-o-1-time-and-o-1-extra-space_842465
//TC - O(1)
//SC - O(1)

//hard ques

#include<iostream>
#include<stack>
using namespace std;

class SpecialStack {
    // Define the data members.
    stack<int> s;
    int mini;
	
    /*----------------- Public Functions of SpecialStack -----------------*/
    public:
        
    void push(int data) {
        //for first element
        if(s.empty())
        {
            s.push(data);
            mini = data;
        }
        else
        {
            //naya mini mil gaya hai
            if(data < mini)
            {
                int val = 2*data - mini;
                s.push(val);
                mini = data;
            }
            else
            {
                s.push(data);
            }
        }
    }

    int pop() {
        if(s.empty())
            return -1;
        
        int curr = s.top();
        s.pop();
        if(curr > mini)
        {
            return curr;
        }
        else
        {
            int prevMin = mini;
            int val = 2*mini - curr;
            mini = val;
            return prevMin;
        }
    }

    int top() {
        if(s.empty())
            return -1;
        
        int curr = s.top();
        
        if(curr<mini)
            return mini;
        
        else
            return curr;
    }

    bool isEmpty() {
        return s.empty();
    }

    int getMin() {
        if(s.empty())
            return -1;
        
        return mini;
    }  
};