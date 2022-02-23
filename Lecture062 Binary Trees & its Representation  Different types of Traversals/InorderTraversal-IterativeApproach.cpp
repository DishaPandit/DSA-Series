//https://leetcode.com/problems/binary-tree-inorder-traversal/

//TC - O(n) - push and pop each node once in stack. each operation takes O(1) time. total nodes are n so total time is O(n)
//SC - O(height)

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
    
private : void solve(TreeNode* root, vector<int> &v)
{
    stack<TreeNode*> s;
    TreeNode* curr = root;
    while(curr != NULL || !s.empty())
    {
        //process L
        while(curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        //Process N
        v.push_back(curr->val);
        //process R
        curr = curr->right;
    }
    
}
public:
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> ans;
        solve(root,ans);
        return ans; 
    }
};