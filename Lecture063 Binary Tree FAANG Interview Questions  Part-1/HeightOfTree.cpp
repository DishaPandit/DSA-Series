//https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1#

//height of tree or depth of tree
//Height is longest path between root node and leaf node
//TC - O(n) - n is node of nodes. each node is visited once
//SC - O(height) -avg time and O(n) for skewed tree

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        
    //base case
    if(node == NULL)    //no tree exist
        return 0;
        
    int left = height(node->left);
    int right = height(node->right);
    int ans = max(left,right) + 1;      //added 1 to include root node
    
    return ans;
    }
};