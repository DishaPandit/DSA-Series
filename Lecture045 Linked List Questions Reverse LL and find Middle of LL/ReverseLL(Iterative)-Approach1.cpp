//https://www.codingninjas.com/codestudio/problems/reverse-the-singly-linked-list_799897

//TC - O(n)
//SC - O(1)

#include<iostream>
using namespace std;

template <typename T>
class LinkedListNode
{
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
};

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    //empty list or single node list
    if(head == NULL || head->next == NULL)
        return head;
    
    LinkedListNode<int> *prev = NULL;
    LinkedListNode<int> *curr = head;
    
    
    while(curr != NULL)
    {
        LinkedListNode<int> *forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    
    head = prev;
    return prev;
}