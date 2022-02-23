//https://leetcode.com/problems/binary-tree-postorder-traversal/
//https://www.geeksforgeeks.org/iterative-postorder-traversal/

//Approach 1 - using 2 stacks

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
    void solve(TreeNode* root,vector<int> &ans)
{
    if (root == NULL)
        return;
 
    // Create two stacks
    stack<TreeNode *> s1, s2;
 
    // push root to first stack
    s1.push(root);
    TreeNode* node;
 
    // Run while first stack is not empty
    while (!s1.empty()) {
        // Pop an item from s1 and push it to s2
        node = s1.top();
        s1.pop();
        s2.push(node);
 
        // Push left and right children
        // of removed item to s1
        if (node->left)
            s1.push(node->left);
        if (node->right)
            s1.push(node->right);
    }
 
    // Print all elements of second stack
    while (!s2.empty()) {
        node = s2.top();
        s2.pop();
        ans.push_back(node->val);
    }
}
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> ans;
        solve(root,ans);
        return ans;
    }
};

//Approach 2 - Using 1 stack
//https://www.geeksforgeeks.org/iterative-postorder-traversal-using-stack/

/*

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) 
    {
        vector<int> ans;
        TreeNode* curr = root;
        stack<TreeNode*> s;
        if(root==NULL)
        {
            return ans;
        }
        while(curr!=NULL || !s.empty())
        {
            if(curr!=NULL)
            {
                s.push(curr);
                curr = curr->left;
            }
            else
            {
                TreeNode* temp = s.top()->right;
                if(temp !=NULL)
                {
                    curr = temp;
                }
                else
                {
                    temp = s.top();
                    s.pop();
                    ans.push_back(temp->val);
                    while(!s.empty() && temp == s.top()->right)
                    {
                        temp = s.top();
                        s.pop();
                        ans.push_back(temp->val);
                    }     
                }
            }
        }
        return ans;
    }
};

*/
