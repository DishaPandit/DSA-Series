//https://www.codingninjas.com/codestudio/problems/deque_1170059
//TC - O(1) for each operation

#include<iostream>
using namespace std;

class Deque
{
public:
    // Initialize your data structure.
    int *arr;
    int n;
    int front;
    int rear;
    
    Deque(int n)
    {
        this->n = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        //if queue is full
        if(isFull())
            return false;
        
        //if single element is present
        else if(front == -1)
        {
            front = rear = 0;
            arr[front] = x;
            return true;
        }
        //to maintain cyclic nature
        else if(front == 0 && rear != n-1)
        {
            front = n-1;
            arr[front] = x;
            return true;
        }
        //normal case
        else
        {
            front--;
            arr[front] = x;
            return true;
        }
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        //if queue is full
        if(isFull())
            return false;
        
        //if single element is present
        else if(front == -1)
        {
            front = rear = 0;
            arr[rear] = x;
            return true;
        }
        //to maintain cyclic nature
        else if(rear == n-1 && front != 0)
        {
            rear = 0;
            arr[rear] = x;
            return true;
        }
        //normal case
        else
        {
            rear++;
            arr[rear] = x;
            return true;
        }
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
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

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        // queue is empty
        if(front == -1 )
        	return -1;
        
        int res = arr[rear];
        arr[rear] = -1;
        //single element in queue
        if(front == rear)
        {
            front = rear = -1;
        }
        
        //to maintain cyclic nature
        else if(rear == 0)
        {
            rear = n-1;
        }
        
        //normal case
        else
        {
            rear--;
        }
        return res;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if(isEmpty())
            return -1;
        
        else
            return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        if(isEmpty())
            return -1;
        
        else
            return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if(front == -1)
            return true;
        else
            return false;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        if((front == 0 && rear == n-1) || (rear == front-1))
            return true;
        else
            return false;
    }
};
