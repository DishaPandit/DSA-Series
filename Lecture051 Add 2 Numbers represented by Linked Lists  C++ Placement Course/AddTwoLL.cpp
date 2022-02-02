//https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1#

// using multiple loops
//TC - for reversing O(m) and O(n) where m and n nodes in LL
//   - adding 0(max(m,n)) = 0(m+n)
// which is O(m) + O(n) + O(m+n) = O(m+n)

//SC - O(max(m,n))  = O(m+n) becoz we used a LL to store ans


#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    private :
    
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
    
    void insertAtTail(struct Node* &head, struct Node* &tail,int value)
    {
        Node* temp = new Node(value);
        //empty list
        if(head == NULL)
        {
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
    
    struct Node* add(struct Node* first, struct Node* second)
    {
        int carry = 0;
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        while(first != NULL && second != NULL)
        {
            int sum = carry + first->data + second->data;
            int digit = sum%10;
            
            // create node and add in ans LL
            insertAtTail(ansHead,ansTail,digit);
            
            carry = sum/10;
            first = first->next;
            second = second->next;
        }
        
        //if first LL has greater no. of nodes
        while(first != NULL)
        {
            int sum = carry + first->data;
            int digit = sum%10;
            
            // create node and add in ans LL
            insertAtTail(ansHead,ansTail,digit);
            
            carry = sum/10;
            first = first->next;
            
        }
        
        //if second LL has greater no. of nodes
        while(second != NULL)
        {
            int sum = carry + second->data;
            int digit = sum%10;
            
            // create node and add in ans LL
            insertAtTail(ansHead,ansTail,digit);
            
            carry = sum/10;
            second = second->next;
            
        }
        
        //if both LL has same no. of nodes and at the end a carry is left
        while(carry != 0)
        {
            int sum = carry;
            int digit = sum%10;
            
            // create node and add in ans LL
            insertAtTail(ansHead,ansTail,digit);
            
            carry = sum/10;
            
        }
        return ansHead;
    }
    
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        //step1 : reverse input LL
        first = reverse(first);
        second = reverse(second);
        
        //step2 : add two LL
        Node* ans = add(first,second);
        
        //step3 : reverse ans LL
        ans = reverse(ans);
        
        return ans;
        
    }
};


