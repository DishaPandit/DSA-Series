//mjhse ghnta nhi ho raha khud se..values assign krne me glti kri hai bhtt
//https://www.codingninjas.com/codestudio/problems/circular-queue_1170058

#include<bits/stdc++.h>
using namespace std;

class CircularQueue{
    public:
    // Initialize your data structure.
    int *arr;
    int n;
    int front;
    int rear;
    
    CircularQueue(int n){
        
        this->n = n;
        arr = new int[n];
        front = rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        
        //queue is full
        if((front == 0 && rear == n-1) || rear == front-1) 
            return false;
        
        //if we are going to insert first element
        else if(front == -1)
        {
            front = rear = 0;
            arr[rear] = value;
            return true;
        }
        
        //to maintain cyclic nature
        else if(rear == n-1 && front != 0)
        {
            rear = 0;
            arr[rear] = value;
            return true;
        }
        
        //normal case
        else
        {
            rear++;
            arr[rear] = value;
            return true;
        }
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // queue is empty
        if(front == -1 )
        	return -1;
        
        int res = arr[front];
        arr[front] = -1;
        //single element in queue
        if(front == rear)
        {
            front = rear = -1;
        }
        
        //to maintain cyclic nature
        else if(front == n-1)
        {
            front = 0;
        }
        
        //normal case
        else
        {
            front++;
        }
        return res;
    }
};