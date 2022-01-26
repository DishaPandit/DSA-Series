//https://www.codingninjas.com/codestudio/problems/reverse-linked-list_920513

//TC - O(n)
//SC - O(n)

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

//it returns head of the reversed list
Node* reverse(Node* head)
{
    //base case
    if(head == NULL || head->next == NULL)
        return head;
    
    Node* smallHead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    
    return smallHead;
}

Node* reverseLinkedList(Node *head)
{
    return reverse(head);
}
