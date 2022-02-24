//https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1/#

//TC - O(n)
//SC - O(height)

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

// Should return  right view of tree
class Solution
{
    public:
    
    void solve(Node* root, vector<int> &ans, int level)
    {
        if(root == NULL)
            return;
            
            //when we reach a level for first time, its value will be equal to size of vector        
            if(level == ans.size())
            ans.push_back(root->data);

        //right se shuru krna hai    
        solve(root->right, ans, level+1);
        solve(root->left, ans, level+1);
        
    }
    
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       vector<int> ans;
       solve(root, ans, 0);
       return ans;
    }
};

//Iterative solution 
//TC - O(n)
//SC - O(n) or theta(width)

/*

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        if(root==NULL)
            return v;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int count=q.size();
            for(int i=0;i<count;i++){
                TreeNode* curr=q.front();
                q.pop();

                //count-1 shows the right most element
                if(i==count-1)
                    v.push_back(curr->val);
                if(curr->left!=NULL)
                    q.push(curr->left);
                if(curr->right!=NULL)
                    q.push(curr->right);
            }
        }
        return v;
    }
};

*/
