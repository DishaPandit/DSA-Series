//https://www.codingninjas.com/codestudio/problems/remove-duplicates-from-unsorted-linked-list_1069331
//TC - O(n*n)
//SC - O(1)
// Solution is correct but gives TLE. Hence use the hashmap approach

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


Node *removeDuplicates(Node *head)
{
    if(head == NULL || head->next == NULL)
        return head;
    
    Node* curr = head;
    Node* prev = NULL;
    while(curr != NULL)
    {
        Node* temp = curr->next;
        prev = curr;
        
        while(temp != NULL)
        {
            if(curr->data == temp->data )
            {
                Node* toBeDeleted = temp;
                Node* next_next = temp->next;
                toBeDeleted->next = NULL;
                temp = next_next;
                delete toBeDeleted;
                prev->next = next_next;
            }
            else
            {
                temp = temp->next;
                prev = prev->next;
            }    
        }
        curr = curr->next;
    }
    return head;  
}