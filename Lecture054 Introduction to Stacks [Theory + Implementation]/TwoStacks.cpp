//https://www.codingninjas.com/codestudio/problems/two-stacks_983634

/*

Approach 1 - GHATIYA WALI

We could have divided array into two halves and alloted each half to each
stack. This will not utilise space optimally becoz, if there are say, all 
elements inserted in first stack, but second stack is left empty as there 
was no insertion, still stack 1 cant use that space coz second half is not
alloted to the first stack. That half space will get wasted


Approach 2 - GOOD APPROACH for optimal space utilisation

We will start filling one stack from start of array and other stack from
end of array. In this way we keep on pushing till there is space left 
in the array hence using space optimally

TC - O(1) for each function hence, overall O(1)

*/

#include<bits/stdc++.h>
using namespace std;

class TwoStack {
	int *arr;
    int top1;
    int top2;
    int size;
public:

    // Initialize TwoStack.
    TwoStack(int s) {
        this->size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }
    
    // Push in stack 1.
    void push1(int num) {
        if(top2 - top1 > 1)
        {
            top1++;
            arr[top1] = num;
        }
            
    }

    // Push in stack 2.
    void push2(int num) {
        if(top2 - top1 > 1)
        {
            top2--;
            arr[top2] = num;
        }
        
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        int ans = -1;
        if(top1 >= 0)
        {
            ans = arr[top1];
            top1--;
        }
        return ans;    
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        int ans = -1;
        if(top2 < size)
        {
            ans = arr[top2];
            top2++;
        }
        return ans;    
    }

};
