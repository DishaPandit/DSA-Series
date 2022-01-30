//https://www.codingninjas.com/codestudio/problems/unique-sorted-list_2420283
//https://leetcode.com/problems/remove-duplicates-from-sorted-list/

//Method 1 - gives tle in leetcode
//TC - O(n)
//TC - O(1)

#include<iostream>
using namespace std;

class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
    };
    

Node * uniqueSortedList(Node * head) {
    // empty list
    if(head == NULL)
        return NULL;
    
    Node* curr = head;
    while(curr != NULL)
    {
        if((curr->next != NULL) && curr->data == curr->next->data)
        {
            Node* next_next = curr->next->next;
            curr->next->next = NULL;
            delete curr->next;
            curr->next = next_next;
        }
        else
            curr = curr->next;
    }
    return head;
    
}

/*

method 2 - does not give tle

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
         ListNode * cur =head;
    if(head == NULL)
    {
        return NULL;
    }
    while(cur->next != NULL)
    {
        if(cur->val != cur->next->val)
        {
            cur=cur->next;
        }
        else{
            ListNode * temp ;
             temp = cur->next;
            cur->next = cur->next->next;
           
            delete temp;
        }
    }
    return head ;
    }
};

*/