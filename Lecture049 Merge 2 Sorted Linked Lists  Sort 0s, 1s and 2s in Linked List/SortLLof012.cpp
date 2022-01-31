//https://www.codingninjas.com/codestudio/problems/sort-linked-list-of-0s-1s-2s_1071937

//Method 1 - count the no. of 0, 1 and 2 and replace the linked list that many no. of times with 0, 1 and 2

//TC - O(n)
//SC - O(1)

#include<iostream>
using namespace std;

class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };


Node* sortList(Node *head)
{
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    
    Node* temp = head;
    while(temp != NULL)   
    {
        if(temp->data == 0)
            zeroCount++;
        
        if(temp->data == 1)
            oneCount++;
        
        if(temp->data == 2)
            twoCount++;
        
        temp = temp->next;
    }
    
    temp = head;
    while(temp != NULL)
    {
        if(zeroCount!=0)
        {
            temp->data = 0;
            zeroCount--;
        }
        else if(oneCount != 0)
        {
            temp->data = 1;
            oneCount--;
        }
        else if(twoCount != 0)
        {
            temp->data = 2;
            twoCount--;
        }
        temp=temp->next;
    }
    return head;
   
}
 
//Method - 2 : Suppose it is said that dont replace data then what?
//then you can change the link in such a way that it gets sorted
//TC - O(n)
//SC - O(1)

/*

void insertAtTail(Node* &tail, Node* curr)
{
    tail->next = curr;
    tail = curr;
}
Node* sortList(Node *head)
{
    //create dummy nodes
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
	Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
	Node* twoTail = twoHead;
    
    Node* curr = head;
    
    //creating separate list for 0s, 1s and 2s
    while(curr != NULL)
    {
        int val = curr->data;
        if(val == 0)
        {
            insertAtTail(zeroTail,curr);
        }
        else if(val == 1)
        {
            insertAtTail(oneTail,curr);
        }
        else if(val == 2)
        {
            insertAtTail(twoTail,curr);
        }
        curr = curr->next;
    }
    
    //merge three sublists
    
    //1s list is non empty
    if(oneHead->next != NULL)
    {
        zeroTail->next = oneHead->next;
    }
    //1s list is empty
    else
    {
        zeroTail->next = twoHead->next;
    }
    
    oneTail->next = twoHead->next;
    twoTail->next = NULL;
    
    //place head to correct position
    head = zeroHead->next;
    
    //delete dummy head pointer
    zeroHead = NULL;
    oneHead = NULL;
    twoHead = NULL;
    
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    
    return head;
    
}


*/

