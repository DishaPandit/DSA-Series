//https://practice.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1/
//Every node will help to generate the next diagonal. We will push the element in the queue only when its left is available. 
//We will process the node and move to its right.
//TC - O(n)
//SC - O(n)

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

struct Node
{
    int data;
    Node* left, * right;
}; 


vector<int> diagonal(Node *root)
{
    queue<Node*> Q;
    
    Q.push(root);
    vector<int> diagonalNode;
    while (!Q.empty())
    {
        Node *temp=Q.front();
        Q.pop();
        while (temp)
        {
            if(temp->left)
                Q.push(temp->left);
            //cout<<p->data<<" ";
            diagonalNode.push_back(temp->data);
            temp=temp->right;
        }
    }
    return diagonalNode;
}