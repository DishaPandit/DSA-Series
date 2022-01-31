//https://www.codingninjas.com/codestudio/problems/merge-two-sorted-linked-lists_800332

//TC - O(m+n)
//SC - O(1)

#include<iostream>
using namespace std;

template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

Node<int>* solve(Node<int>* first, Node<int>* second)
{
    //if only 1 element is present in first list
    if(first->next == NULL)
    {
        first->next = second;
        return first;
    }
    
    Node<int>* curr1 = first;
    Node<int>* next1 = curr1->next;
    Node<int>* curr2 = second;
    
    while(next1 != NULL && curr2 != NULL)
    {
        if(curr2->data >= curr1->data && curr2->data <= next1->data)
        {
            curr1->next = curr2;
            //isliye bnaya taki second list ka remaining part lost na ho jaye
            Node<int>* next2 = NULL;
            next2 = curr2->next;
            curr2->next = next1;
            
            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            //curr1 aur next1 ko aage bdha do
            curr1 = next1;
            next1 = next1->next;
            //check krlo kahi list 1 khmt to nhi ho gyi
            if(next1 == NULL)
            {
                curr1->next = curr2;
                return first;
            }
        }
        
    }
    return first;
}

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    //first list is empty
    if(first == NULL)
        return second;
    
    //second list is empty
    if(second == NULL)
    {
        return first;
    }
    
    //to find which list has smaller first node
    //so that we can use our approach in which we pick a element from second 
    //list which will be greater from first node of first list and
    //insert it appropriately in the first list
    
    if(first->data <= second->data)
        return solve(first,second);
    
    else
        return solve(second,first);
}
