//https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1#

//The diameter of a tree (sometimes called the width) is the number of nodes on the longest path between two end nodes
//end node can be a leaf node or root node

//Approach 1 - TC - O(n^2) - becoz we have two call stacks of O(n)

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

class Solution {
    
  private :
  
    int height(struct Node* node){
        
    //base case
    if(node == NULL)    //no tree exist
        return 0;
        
    int left = height(node->left);
    int right = height(node->right);
    int ans = max(left,right) + 1;      //added 1 to include root node
    
    return ans;
    }
    
  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        
    //base case
    if(root == NULL)
        return 0;
        
    //if diameter can be made using left part of tree
    int option1 = diameter(root->left);
    
    //if diameter can be made using right part of tree
    int option2 = diameter(root->right);
    
    //if diameter can be achieved using left part, right part and root node
    int option3 = height(root->left) + height(root->right) + 1;
    
    int ans = max(option1, max(option2,option3));
    
    return ans;
    }
};

//Approach 2 : idea is to remove height function so that we can reduce call stack and hence complexity
//hence we will use a pair<int,int> where first part will store diameter and second will store height
//remaining concept remains same

//TC - O(n)
//SC - O(height) in avg O(n) in skewed tree

/*

class Solution {
    
  private :
  
    pair<int,int> diameterFast(Node* root) {
        
    //base case
    if(root == NULL)
    {
        pair<int,int> p = make_pair(0,0);
        return p;
    }
    
    pair<int,int> left = diameterFast(root->left);
    pair<int,int> right = diameterFast(root->right);
    
    
    //if diameter can be made using left part of tree
    int option1 = left.first;
    
    //if diameter can be made using right part of tree
    int option2 = right.first;
    
    //if diameter can be achieved using left part, right part and root node
    int option3 = left.second + right.second + 1;
    
    pair<int,int> ans;
    ans.first = max(option1, max(option2,option3));
    ans.second = max(left.second,right.second) +1;
    
    return ans;
    }
    
  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        
        return diameterFast(root).first;
    }
};

*/