//https://www.codingninjas.com/codestudio/problems/queue-using-array-or-singly-linked-list_2099908

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Queue {
public:
    
    int *arr;
    int size;
    int Front;
    int rear;
    
    Queue() {
        
        size = 10000;
        arr = new int[size];
        Front = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {        //TC - O(1)
        
        if(Front == rear)
            return true;
        else
            return false;
    }

    void enqueue(int data) {        //TC - O(1)
        
        if(rear == size)
            return;
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {        //TC - O(1)
        
        if(Front == rear)
            return -1;
        
        else
        {
            int res = arr[Front];
            arr[Front] = -1;
            Front ++;
            
            //if queue becomes empty
            if(Front == rear)
            {
                Front = 0;
                rear = 0;
            }
            
            return res;
        }
    }

    int front() {        //TC - O(1)
        
        if(Front == rear)
            return -1;
        
        else
            return arr[Front];
    }
};