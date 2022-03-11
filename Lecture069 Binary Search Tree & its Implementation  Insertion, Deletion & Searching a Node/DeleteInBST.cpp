//https://leetcode.com/problems/delete-node-in-a-bst/


//Recursive

//TC - O(height)
//SC - O(height)

//successor wala part acche se krna

#include<iostream>
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
    
    int minValue(TreeNode* root)
    {
        TreeNode* temp = root;
        while(temp->left != NULL)
        {
            temp = temp->left;
        }
            return temp->val;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        
        //delete krne k liye phle element ko search krna hoga

        //base case
        if(root == NULL)
            return root;

        if(root->val > key)
            root->left = deleteNode(root->left, key);

        else if(root->val < key)
            root->right = deleteNode(root->right, key);

        //jab key mil jaye to usko delete krdo
        else
        {
            //0 child
            if(root->left == NULL && root->right == NULL)
            {
                delete root;
                return NULL;
            }

            //1 child

            //child present is left child
            if(root->left != NULL && root->right == NULL)
            {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }

            //child present is right child
            if(root->left == NULL && root->right != NULL)
            {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }

            //have 2 children
            if(root->left != NULL && root->right != NULL)
            {
                int successor = minValue(root->right);
                root->val = successor;
                //right se successor ko delete kr do
                root->right = deleteNode(root->right, successor);
                return root;
            }

        }

        return root;

    }
};