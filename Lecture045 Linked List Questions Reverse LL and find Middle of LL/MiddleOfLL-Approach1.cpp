//https://www.codingninjas.com/codestudio/problems/middle-of-linked-list_973250
//TC - O(n)
//SC - O(1)

//Naive approach

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

int getLength(Node* &head)
{
    if(head == NULL)
        return 0;
    
    Node* temp = head;
    int count = 0;
    while(temp!=NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
    
}
Node *findMiddle(Node *head) {
    
    int len = getLength(head);
    int ans = len/2 + 1;
    
    Node* temp = head;
    int count = 1;
    while(count <ans)
    {
        temp = temp->next;
        count++;
    }
    return temp;
}