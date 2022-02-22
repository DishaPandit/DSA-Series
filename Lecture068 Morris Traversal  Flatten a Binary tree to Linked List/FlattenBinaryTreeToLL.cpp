//https://practice.geeksforgeeks.org/problems/flatten-binary-tree-to-linked-list/1/#
//used morris traversal because of space constraint
//TC - O(n)
//SC - O(1)


#include<iostream>
using namespace std;

struct Node {
	int key;
	Node *left, *right;
};

class Solution
{
    public:
    void flatten(Node *root)
    {
        Node* curr = root;
        while(curr != NULL)
        {
            if(curr->left)
            {
                Node* pred = curr->left;
                while(pred->right)
                {
                    pred = pred->right;
                }
                //linking
                pred->right = curr->right;
                curr->right = curr->left;
                //left ko null krna hai
                curr->left = NULL;
                
            }
            curr = curr->right;
        }
    }
};

