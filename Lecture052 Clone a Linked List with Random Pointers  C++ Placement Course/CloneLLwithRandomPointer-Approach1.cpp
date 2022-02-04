//https://practice.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1#

//TC - O(n)
//SC - O(n)

//HARD QUES

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    Node *next;
    Node *arb;

    Node(int x) {
        data = x;
        next = NULL;
        arb = NULL;
    }
};



 // } Driver Code Ends
class Solution
{
    private:
    void insertAtTail(Node* &head, Node* &tail, int data)
    {
        Node *newNode = new Node(data);
        if(head==NULL)
        {
            head = newNode;
            tail = newNode;
            return ;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
            
    }
    public:
    Node *copyList(Node *head)
    {
        //step 1 : create a clone list
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        Node* temp = head;
        while(temp!= NULL)
        {
            insertAtTail(cloneHead,cloneTail,temp->data);
            temp = temp->next;
        }
        
        //step 2: create a map
        unordered_map<Node*,Node*> oldToNew;
        
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        
        while(originalNode!=NULL && cloneNode != NULL)
        {
            oldToNew[originalNode] = cloneNode;
            originalNode = originalNode->next;
            cloneNode = cloneNode->next;
        }
        
        originalNode = head;
        cloneNode = cloneHead;
        
        //step 3 : copy the mapping
        while(originalNode != NULL)
        {
            cloneNode->arb = oldToNew[originalNode->arb];
            originalNode = originalNode->next;
            cloneNode = cloneNode->next;
        }
        return cloneHead;
    }

};




