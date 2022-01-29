//https://www.codingninjas.com/codestudio/problems/reverse-list-in-k-groups_983644

//TC - O(n) - becoz every node is visited once
//SC - O(n) - becoz in every call, k nodes is reversed, having constant space. So, total calls will be n/k. So, (n/k)*k = n 

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


Node* kReverse(Node* head, int k) {
    
    //base case
    if(head==NULL || head->next == NULL)
        return head;
    
    //step 1 : reverse first k nodes
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    int count = 0;
    
    while(curr!=NULL && count < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr =  forward;
        count++;
    }
    
    //step 2 : recursive call
    if(forward != NULL)
    {
        head->next = kReverse(forward,k);
    }
    
    //step 3 : return head
    return prev;
}