//https://practice.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1#

//TC - O(n)
//SC - O(1)

//If we cant use map, then we will have to change the pointer links

//very very hard approach..meraaaaa dimaaaaag hil chukaaaaa haiiiiiiiii


#include<bits/stdc++.h>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
    
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
    Node* copyRandomList(Node* head) {
        
        //step 1 : create a clone list
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        Node* temp = head;
        while(temp!= NULL)
        {
            insertAtTail(cloneHead,cloneTail,temp->val);
            temp = temp->next;
        }
        
        //step 2 : add cloneNode in between original list
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        
        while(originalNode!=NULL && cloneNode!=NULL)
        {
            Node* next = originalNode->next;
            originalNode->next = cloneNode;
            originalNode = next;
            
            next = cloneNode->next;
            cloneNode->next = originalNode;
            cloneNode = next;
            
        }
        
        //step 3 : copy random pointer
        temp = head;
        while(temp != NULL)
        {
            if(temp->next!=NULL)
            {
                temp->next->random = temp->random ? temp->random->next : temp->random;
            }
            temp = temp->next->next;
        }
        
        // step 4 : revert changes done in list in step 2
        originalNode = head;
        cloneNode = cloneHead;
        
        while(originalNode!=NULL && cloneNode!=NULL)
        {
            originalNode->next = cloneNode->next;
            originalNode = originalNode->next;
            
            if(originalNode != NULL)
            {
                cloneNode->next = originalNode->next;
            }
            
            cloneNode = cloneNode->next;
        }
        
        //step 5 : return ans
        return cloneHead;
        
    }
};
