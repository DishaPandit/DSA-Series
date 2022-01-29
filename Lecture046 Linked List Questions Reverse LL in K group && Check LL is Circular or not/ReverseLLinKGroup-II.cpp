//https://leetcode.com/problems/reverse-nodes-in-k-group

#include<iostream>
using namespace std;

 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        //cursor concept is to tackle the case when we dont have last group having all k nodes

        /*
        the "cursor" is a checker.
        It checks if we have K nodes in the sublist we want to reverse.
        if(checker==false) we dont need to reverse this sublist, and this will happen for the last sublist only. so we can directly return original head for that sublist.
        else: we need to rotate, and as we already checked that we have K nodes, so there is no overhead for NULL Exceptions.

        */

        ListNode* cursor = head;
        int flag = 0;
        while(flag<k)
        {
            if(cursor == NULL)
                return head;
            cursor = cursor->next;
            flag++;
        }
        
        
        //step 1 : reverse k nodes
        int count = 0;
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;
        
        while(count < k)
        {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            count++;
        }
        
        //step 2 : recursion
        
        if(forward != NULL)
        {
            head->next = reverseKGroup(forward,k);
        }
        
        //step 3 : return head
        return prev;
    }
};