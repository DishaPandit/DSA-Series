//https://leetcode.com/problems/binary-tree-preorder-traversal/
//TC - O(n)
//SC - O(n)

#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
    void preorder(TreeNode* root, vector<int> &v)
    {
        if(root == NULL)
            return;
        
        stack<TreeNode*> s;
        s.push(root);
        
        while(!s.empty())
        {
            TreeNode* curr = s.top();
            v.push_back(curr->val);
            s.pop();
            
            //we push right first, so that when we take out, we pop left element first
            if(curr->right)
                s.push(curr->right);
            
            if(curr->left)
                s.push(curr->left);
            
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> ans;
        preorder(root,ans);
        return ans;
    }
};