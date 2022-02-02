/*

1. traverse till the middle of LL
2. reverse the LL after the middle node
3. compare both halves
4. if they are equal, then it is palindrome

TC - O(n)  
SC - O(1)

*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

class Solution{
    
  private:
    
    Node* getMid(Node* head)
    {
        Node* slow = head;
        Node* fast = head->next;
        
        while(fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    
    Node* reverse(Node* head)
    {
        Node* curr = head;
        Node* prev = NULL;
        Node* forward = NULL;
        
        while(curr!= NULL)
        {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
  
  
  
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //if list has single element
        if(head->next == NULL)
        {
            return true;
        }
        
        //step 1 - find middle of list
        Node* middle = getMid(head);
        
        //step 2 - reverse list after middle
        Node* temp  = middle->next;
        middle->next = reverse(temp);
        
        //step 3 - compare both halves
        Node* head1 = head;
        Node* head2 = middle->next;
        
        while(head2 != NULL)
        {
            if(head1->data != head2->data)
            {
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        
        //step 4 - repeat step 2 so that list remains in original form. Not required though
        temp = middle->next;
        middle->next = reverse(temp);
        
        return true;
    }
    
    
};


