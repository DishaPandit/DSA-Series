//https://www.codingninjas.com/codestudio/problems/middle-of-linked-list_973250

//two pointer approach
//TC - O(n/2) or O(n)
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

Node* getMiddle(Node* head){
     if(head == NULL || head->next == NULL)
    {
        return head;
    }
    
    if(head->next->next == NULL)
    {
        return head->next;
    }
    
    Node* slow = head;
    Node* fast = head->next;
    
    while(fast != NULL)
    {
        fast = fast->next;
        if(fast!= NULL)
        {
            fast = fast->next;
        }
        slow =  slow->next;
    }
    return slow;
}

Node *findMiddle(Node* head) {
    
   return getMiddle(head);
    
    
}