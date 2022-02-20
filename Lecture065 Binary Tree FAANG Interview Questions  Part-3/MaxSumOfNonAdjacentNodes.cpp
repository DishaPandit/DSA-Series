//https://practice.geeksforgeeks.org/problems/maximum-sum-of-non-adjacent-nodes/1/#
//TC - O(n)
//SC - O(height)

#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};


class Solution{
  public:
  
    pair<int,int> solve(Node* root)
    {
        //base case
        if(root == NULL)
        {
            pair<int,int> p = make_pair(0,0);
            return p;
        }
        
        pair<int,int> left = solve(root->left);
        pair<int,int> right = solve(root->right);
        
        pair<int,int> res;
        
        res.first = root->data + left.second + right.second;
        
        res.second = max(left.first,left.second) + max(right.first,right.second);
        
        return res;

    }
  
    //Function to return the maximum sum of non-adjacent nodes.
    int getMaxSum(Node *root) 
    {
        //ans.first = max sum including nodes at current level
        //ans.second = max sum excluding nodes at current level
        pair<int,int> ans = solve(root);
        return max(ans.first,ans.second);
    }
};